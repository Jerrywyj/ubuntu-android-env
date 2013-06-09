using System;
using System.Collections.Generic;
using System.Text;
using LMSAPI;

namespace LMSAPI_csharp
{
    /// <summary>
    /// Clase para adminstrar las propiedades de conexi�n y la captura del sensor.
    /// Contiene una copia offline de los par�metros de medici�n y almacena los objetos de 
    /// conexi�n (LMSAPI_CONNECTION) y de lectura de datos (LMSAPI_DATA)
    /// </summary>
    public class LMSAPIControl
    {
        public LMSAPI_CONNECTION laser_connection = null;
        public LMSAPI_DATA laser_data = null;
        public int port = 1;
        /// <summary>
        /// Rango angular: 100 180
        /// </summary>
        public int angular_range = 100;
        /// <summary>
        /// Resoluci�n: 100 (1 grado),50(0.5 grados),25 (0.25 grados).
        /// </summary>
        public int angular_resolution = 100;
        /// <summary>
        /// Rango de distancias: 8, 80
        /// </summary>
        public int distance_range = 8;
        /// <summary>
        /// Escala de medici�n.
        /// </summary>
        public float scale_distance = 1000.0f;// en metros

        /// <summary>
        /// Establece una conexi�n con el sensor seg�n los par�metros asignados.
        /// </summary>
        /// <returns>true si la conexi�n se realiz� con exito</returns>
        public bool stablish_connection()
        {
            laser_connection = null;//cerrar conexi�n anterior

            // Conectarnos con el sensor
            laser_connection = LMSAPI_LIB.create_connection_object(port, angular_range, angular_resolution, distance_range, 0);

            if (laser_connection == null)
            {
                System.Windows.Forms.MessageBox.Show("Error!!:Configuraci�n erronea del sensor, no puede establecerse conexi�n.");
                return false;
            }
            return true;
        }

        /// <summary>
        /// Cierra la conexi�n con el sensor
        /// </summary>
        public void end_connection()
        {            
            laser_connection = null;
        }

        /// <summary>
        /// Crea un objeto de lectura de datos (LMSAPI_DATA) con datos simulados, sin 
        /// necesidad de conexi�n con el sensor. 
        /// POST: laser_data != null.
        /// </summary>
        /// <returns></returns>
        public bool simulate_laser_data()
        {
            laser_data = LMSAPI_LIB.create_simulation_laser_data(angular_range, angular_resolution, distance_range, 0, scale_distance);
            if (laser_data == null)
            {
                System.Windows.Forms.MessageBox.Show("Error al solicitar datos de medici�n");
                return false;
            }
            return true;
        }

        /// <summary>
        /// Obtiene datos del sensor en el objeto de lectura laser_data. Si no hay conexi�n
        /// entonces obtiene datos simulados.
        /// </summary>
        /// <returns></returns>
        public bool request_laser_data()
        {
            if (laser_connection == null)
            {
                return simulate_laser_data();
            }

            laser_connection.m_scale_distance = scale_distance;//distancias en metros

            laser_data = laser_connection.request_measurement();
            if (laser_data == null)
            {
                System.Windows.Forms.MessageBox.Show("Error al solicitar datos de medici�n");
                return false;
            }
            return true;

        }
    }
}
