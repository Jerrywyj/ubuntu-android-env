#ifndef LMSAPI_MANUAL_H_INCLUDED
#define LMSAPI_MANUAL_H_INCLUDED

/* LMSAPI : API PARA EL CONTROL DEL SISTEMA DE MEDICION LASER SICK LMS200
 * Copyright (c) 2007 Francisco Le�n, Universidad Manuela Beltr�n.
 * Bogot�, Colombia.
 * Derechos Reservados para la UMB bajo la licencia BSD.
 *
 * La redistribuci�n y el uso de las fuentes y codigo binario, con o sin modificaci�n,
 * est�n permitidas bajo las siguiuentes condiciones:
 *
 * 1. La redistribuci�n del codigo fuente debe preservar los derechos de copia anteriormente
 *    descritos, las condiciones de uso y la clausula leg�l de este documento.
 * 2. La redistribuci�n en forma binaria debe reproducir derechos de copia anteriormente
 *    descritos, las condiciones de uso y la clausula leg�l tanto en los manuales de ayuda
 *    como tambi�n en otros materiales provistos en la distribuci�n del software.
 * 3. No se usar�n los nombres de los autores para promocioinar productos derivados
 *    de este software sin el permiso por escrito de los autores.
 *
 * Clausula Legal:
 * ESTE SOFTWARE SE OFRECE CON EL DERECHO DE COPIA DE LOS DUE�OS Y SUS CONTRIBUYENTES
 * 'TAL COMO ESTA' SIN NINGUNA GARANTIA O CONDICION ASOCIADA AL EJERCICIO MERCANTIL
 * O ECONOMICO DE PARTICULARES. SE EXCLUYE A LOS AUTORES O CONTRIBUYENTES DE ESTE SOFTWARE
 * DE TODA RESPONSABILIDAD JUR�DICA POR POSIBLES DA�OS, PERJUICIOS, SUBSTITUCION
 * DE BIENES O SERVICIOS, PERDIDA DE GANANCIAS, PERDIDA DE EXCLUSIVIDAD, DESLEALDAD,
 * DESPRESTIGIO, DA�OS A LA CONFIDENCIALIDAD DE INFORMACI�N O LUCRO CESANTE QUE PODR�AN SER CAUSADOS
 * POR LA EXISTENCIA O USO NEGLIGENTE DE ESTE SOFTWARE.
 */



//Pagina web principal
/*! \mainpage LMSAPI3D: APLICACI�N DE GRAFICACI�N DE SOLIDOS CON EL LASER SICK LMS200
*\section INTRO INTRODUCCI�N
*
<p><b>LMSAPI3D</b> es una aplicaci�n de ejemplo realizada en el entorno <b>.NET</b>, la cual se incorpora la funcionalidad de la librer�a
<a href="http://lmsapi.sf.net">LMSAPI</a> en la medici�n de s�lidos, y utiliza el poder gr�fico de <a href ="http://irrlichtnetcp.sourceforge.net/">IRRLICHT.NET</a> en la visualizaci�n de las mediciones.
</p>
<p>
- Descarge en <a href="http://sf.net/projects/lmsapi">Proyecto LMSAPI</a> los aplicativos de demostraci�n, incluyendo <b>LMSAPI3D</b>.
- \subpage REQ_MIN "REQUERIMIENTOS M�NIMOS DE INSTALACI�N"
</p>
*\section vista VISTA DE LA APLICACI�N LMSAPI3D
*\image html LMSAPI3D_app.png "LMSAPI3D"
*\section CONNECTION CONEXI�N
*\image html LMSAPI3D_conexion.png "Panel de conexi�n con el sensor"
<p>En la pesta�a de conexi�n se establecen los par�metros de medici�n y de configuraci�n del
sensor l�ser. Aqui se especifican los rangos de medici�n durante todo el barrido, y el puerto de conexi�n.</p>
<p>Tambi�n cuenta con un modo de <b>simulaci�n</b> el cu�l se puede utilizar para probar el desempe�o del aplicativo sin necesidad de tener conexi�n con el sensor l�ser. Este simulador genera datos aleatorios que posteriormente ser�n graficados en 3D.</p>
*\section TRAVERSE BARRIDO Y SENSADO
*\image html LMSAPI3D_barrido.png "Panel de configuraci�n del barrido"
<p>Para medir s�lidos es necesario realizar mediciones sucesivas desplazando el sensor en forma vertical.</p>
<p><b>LMSAPI3D</b> permite registrar barridos <b>angulares</b> los cuales tienen intervalos en �ngulos, o <b>lineales</b> los cuales tienen intervalos en cent�metros.</p>
<p>En este panel se especifican el rango de medici�n vertical, el n�mero de mediciones y la resoluci�n de la gr�fica. La resoluci�n m�xima es de <b>1</b> la cual representa todos los datos de la simulaci�n.</p>
<p>Cuando se d� la orden de <b>graficar</b>, el sistema pedir� confirmaci�n en cada instante en el cual el sensor tomar� secciones horizontales del s�lido.</p>
*\image html LMSAPI3D_confirmar.png "Confirmaci�n de la medici�n de cada secci�n."
*\section EXPORT EXPORTAR LA GR�FICA
<b>LMSAPI3D</b> permite exportar la malla 3D a tres formatos: 3D Studio (*.3ds), Wavefront (*.obj) y VRML (*.wrl):
*\image html LMSAPI3D_export.png "Exporta la gr�fica a un formato de malla 3D."
*/
/*! \page REQ_MIN REQUERIMIENTOS.
*\section REQ_HARD REQUERIMIENTOS DE HARDWARE.
- Computador con procesador Pentium 3 o superior, 256 megabytes en ram, disco duro de 1 GB y Puertos de comunicaci�n compatibles con el est�ndar RS232.
- Procesador gr�fico compatible con OpenGL.
- Cable de comunicaciones RS232.
- Sensor L�ser SICK LMS200.
- Fuente de poder que soporte un voltaje de 24 V DC +/- 15%.
- Fuente de poder que soporte un voltaje de 24 V DC +/- 15%.
*\section REQ_SOFT REQUERIMIENTOS DE SOFTWARE.
- Sistema operativo Windows 98/NT/2000/XP/Vista o superior.
- Microsoft .NET Framework, versi�n 2.0. Disponible en <a href="http://www.microsoft.com/downloads/details.aspx?displaylang=es&FamilyID=0856eacb-4362-4b0d-8edd-aab15c5e04f5">Descargas de Microsoft.</a>
*/
#endif // LMSAPI_CONSOLE_H_INCLUDED
