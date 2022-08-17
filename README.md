![Vet logo](https://raw.githubusercontent.com/gaco123/Proyecto_Final_CCII/master/Extras/logo.png)

===========================

# Proyecto Final del Curso de CCII
-------------
### Integrantes:

* Quicaño Miranda, Victor Alejandro
* Soto Huerta, Angela Shirleth
* Ramirez Zarate, Patrick Rene
* Rodriguez Cutimbo, Gabriel Fernando
* Farfan Huayta, Mauricio Alejandro
### Hecho con...

<p align="left">
<a href="https://docs.microsoft.com/en-us/cpp/?view=msvc-170" target="_blank" rel="noreferrer"><img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/skills/cplusplus-colored.svg" width="36" height="36" alt="C++" /></a>
<a href="https://www.sqlite.org/index.html" target="_blank" rel="noreferrer"><img src="https://codigosql.top/wp-content/uploads/2020/02/base-de-datos-en-mysql-212x300.png" width="36" height="36" alt="sqlite" /></a>
<a href="https://es.wikipedia.org/wiki/Microsoft_Visual_Studio" target="_blank" rel="noreferrer"><img src="https://upload.wikimedia.org/wikipedia/commons/thumb/5/59/Visual_Studio_Icon_2019.svg/768px-Visual_Studio_Icon_2019.svg.png?20210214224138" width="36" height="36" alt="VisualStudio" /></a>
</p>

===========================
## PROGRAMA DE GESTIÓN VETERINARIA “VetPro”
===========================
### ¿En qué va a consistir nuestro programa? ¿Por qué elegimos un programa de gestión veterinaria?
La raíz de este proyecto es buscar una solución a un sistema ineficiente visto en muchas veterinarias, en especial en el aspecto de registro de clientes y mascotas. 

Por ejemplo, después de registrar a una mascota en una veterinaria, lo más común es que a un cliente se le entregue una cartilla en la que se recopilan los datos de sus mascotas. Generalmente datos como: Nombre, información del dueño, fechas de vacunas, fechas de desparasitación, etc. Todo ello registrado en una cartilla que en muchos casos termina siendo desechada o pérdida, ya sea por el **ajetreo** de la vida diaria de los dueños o a un sistema de registro de información antiguo y casi **obsoleto**.

Nosotros buscamos realizar un programa de escritorio que **solucione esta problemática**, un sistema que permita gestionar y mostrar mediante una interfaz interactiva e intuitiva: Datos de los clientes, datos de las mascotas de los clientes, registro de vacunas de las mascotas, facturas, citas, y muchas cosas más.

### ¿Qué lenguaje de programación y herramientas vamos a usar para desarrollar nuestro programa?
El lenguaje de programación usado para nuestro programa será C++, también usaremos una interfaz de programación de aplicación gráfica **(WinForms)** y una base de datos (en este caso **MySql Workbench**), la cual se encargará de almacenar y mantener seguros todos los datos de la aplicación en la nube.

===========================
## PROCESO SEGUIDO POR EL MOMENTO
===========================

Comenzamos diseñando un prototipo de nuestra aplicación, teniendo ya una idea del resultado deseado, procedimos a diseñar la arquitectura y distribución de la base de datos.

[![Prototipo](https://raw.githubusercontent.com/gaco123/Proyecto_Final_CCII/master/Extras/Prototipo.png "Prototipo")](https://www.figma.com/proto/ZjvRwTrsCjNgFQ0PgcXp4W/Vet_Proto?node-id=2%3A5&scaling=scale-down&page-id=0%3A1&starting-point-node-id=2%3A5 "Prototipo")

----------
**BASE DE DATOS**
----------
**Distribución**
<ul>
<li>Veterinarios</li>
<ul><dt>Almacena los datos de todos los veterinarios. Será de gran utilidad dentro del login, ya que los veterinarios serán quienes manejen la plataforma</dt></ul>
<li>Clientes</li>
<ul><dt>Contiene la información y datos de contacto sobre cada uno de los clientes.</dt></ul>
<li>Mascota</li>
<ul><dt>Maneja la información de todas las mascotas registradas. Se vincula cada mascota con su dueño con una ID (Así no sobrecargamos la base de datos del cliente)</dt></ul>
<li>Citas</li>
<ul><dt>Almacena las citas por fechas, asigando a cada cita una ID y vincula la información de la mascota y el cliente mediante ID's</dt></ul></ul>

### Diagrama de la base de datos
![Vet Arqui](https://raw.githubusercontent.com/gaco123/Proyecto_Final_CCII/master/Extras/Arqui_DB.png)

===========================
<h2 dir="auto">Instalacion de MySQL Workbench</h2>
<p><strong>Paso 1:</strong>&nbsp;Ve a la p&aacute;gina de MySQL Workbench en AcademicSoftware y haz clic en el bot&oacute;n 'Descargar MySQL Workbench' para descargar el archivo de instalaci&oacute;n.</p>

<p><strong>Paso 2</strong>:&nbsp;Abre el archivo de instalaci&oacute;n MSI de tu carpeta de descargas y haz clic en Next para iniciar la instalaci&oacute;n.</p>
<p></p>

![Vet logo](https://raw.githubusercontent.com/gaco123/Proyecto_Final_CCII/master/Extras/W.paso2.png)

<p><strong>Paso 3:</strong>&nbsp;Haz clic en Next para instalar el software en la ubicaci&oacute;n predeterminada. Tambi&eacute;n puedes cambiar la carpeta de destino.</p>

![Vet logo](https://raw.githubusercontent.com/gaco123/Proyecto_Final_CCII/master/Extras/W.paso3.png)

<p><strong>Paso 4:</strong>&nbsp;Haz clic en Next para instalar&nbsp;todas las funcionalidades del programa o elige Custom para los usuarios avanzados.</p>

![Vet logo](https://raw.githubusercontent.com/gaco123/Proyecto_Final_CCII/master/Extras/W.paso4.png)

<p><strong>Paso 5:</strong>&nbsp;Haz clic en Install para iniciar la instalaci&oacute;n.</p>

![Vet logo](https://raw.githubusercontent.com/gaco123/Proyecto_Final_CCII/master/Extras/W.paso5.png)

<p><strong>Paso 6:</strong>&nbsp;Una vez finalizada la instalaci&oacute;n, marca la casilla para lanzar el programa y haz clic en&nbsp;Finish.<br />El programa est&aacute; instalado y listo para usar.</p>

![Vet logo](https://raw.githubusercontent.com/gaco123/Proyecto_Final_CCII/master/Extras/W.paso6.png)

![Vet logo](https://raw.githubusercontent.com/gaco123/Proyecto_Final_CCII/master/Extras/W.paso6.2.png)


===========================
<h2 dir="auto">Instalación de Visual Studio</h2>
<p><strong>Paso 1:</strong> Asegurarse de que el equipo est&aacute; listo para Visual Studio</p>
<p>Antes de comenzar la instalaci&oacute;n de Visual Studio:</p>
<ol>
<li>Compruebe los&nbsp; requisitos del sistema Estos requisitos le permiten saber si el equipo es compatible con Visual&nbsp;Studio&nbsp;2022.</li>
<li>Aplique las actualizaciones de Windows m&aacute;s recientes. Estas actualizaciones garantizan que el equipo tiene las actualizaciones de seguridad m&aacute;s recientes y los componentes del sistema necesarios para Visual Studio.</li>
<li>Reinicie el equipo. El reinicio garantiza que cualquier actualizaci&oacute;n o instalaci&oacute;n pendiente no dificultar&aacute; la instalaci&oacute;n de Visual&nbsp;Studio.</li>
<li>Libere espacio. Quite los archivos y aplicaciones innecesarios de la unidad de sistema. Para ello ejecute, por ejemplo, la aplicaci&oacute;n para liberar espacio.</li>
</ol>
<p>&nbsp;</p>
<p><strong>Paso2:</strong> Descargar Visual Studio</p>
<p>A continuaci&oacute;n, descargue el archivo de programa previo de Visual Studio.</p>
<p>Para ello, seleccione el siguiente bot&oacute;n, elija la edici&oacute;n de Visual&nbsp;Studio que quiera instalar y gu&aacute;rdela en la carpeta&nbsp;Descargas.</p>
<p></p>
<p><strong>Paso&nbsp;3:</strong> Instalar el Instalador de Visual&nbsp;Studio</p>
<p>Ejecute el archivo de programa previo para instalar el Instalador de Visual&nbsp;Studio. Este nuevo instalador ligero incluye todo lo necesario para instalar y personalizar Visual&nbsp;Studio.</p>
<ol>
<li>Desde la carpeta&nbsp; Descargas, haga doble clic en el archivo de programa previo que coincida o sea similar a uno de los siguientes archivos:
<ul>
<li><strong>exe</strong>para Visual Studio Community</li>
<li><strong>exe</strong>para Visual Studio Professional</li>
<li><strong>exe</strong>para Visual Studio Enterprise</li>
</ul>
</li>
</ol>
<p>Si recibe un aviso de Control de cuentas de usuario, elija&nbsp;S&iacute;.</p>
<ol start="2">
<li>Le pediremos que acepte los&nbsp;T&eacute;rminos de licencia de Microsoft y la&nbsp;Declaraci&oacute;n de privacidad&nbsp;de Microsoft. Elija&nbsp;Continuar</li>
</ol>
<p></p>
<p><strong>Paso 4:</strong> Elegir las cargas de trabajo</p>
<p>Una vez instalado el Instalador, puede usarlo para personalizar la instalaci&oacute;n mediante la selecci&oacute;n de los conjuntos de caracter&iacute;sticas, o cargas de trabajo, que desee. A continuaci&oacute;n se muestra c&oacute;mo hacerlo.</p>
<ol>
<li>Seleccione la carga de trabajo que quiera en el&nbsp;Instalador de Visual&nbsp;Studio.</li>
<li>Revise los res&uacute;menes de las cargas de trabajo para decidir cu&aacute;l admite las caracter&iacute;sticas que necesita. Por ejemplo, elija la carga de trabajo&nbsp;NET y desarrollo webpara editar ASP.NET p&aacute;ginas web con Web Live Preview o compilar aplicaciones web con Blazor, o bien elija entre cargas de trabajo m&oacute;viles de&nbsp;escritorio &amp;&nbsp;para desarrollar aplicaciones multiplataforma con C#, o proyectos de C++ destinados a C++20.</li>
<li>Despu&eacute;s de elegir las cargas de trabajo que quiera, seleccione&nbsp;Instalar</li>
</ol>
<p>Despu&eacute;s, aparecer&aacute;n las pantallas de estado que muestran el progreso de su instalaci&oacute;n de Visual Studio.</p>
<p>&nbsp;</p>
<p><strong>Paso&nbsp;5:</strong> Elegir componentes individuales (opcional)</p>
<p>Si no quiere usar la caracter&iacute;stica Cargas de trabajo para personalizar la instalaci&oacute;n de Visual&nbsp;Studio o quiere agregar m&aacute;s componentes de los que instala una carga de trabajo, puede hacerlo instalando o agregando componentes individuales desde la pesta&ntilde;a&nbsp;Componentes individuales Elija los elementos que quiera y, luego, siga las indicaciones.</p>
<p></p>
<p><strong>Paso&nbsp;6:</strong> Instalar paquetes de idioma (opcional)</p>
<p>De manera predeterminada, el programa instalador intenta hacer coincidir el idioma del sistema operativo cuando se ejecuta por primera vez. Para instalar Visual&nbsp;Studio en un idioma de su elecci&oacute;n, elija la pesta&ntilde;a&nbsp;Paquetes de idioma&nbsp;del Instalador de Visual&nbsp;Studio y siga las indicaciones.</p>
<p>Cambio del idioma del instalador en la l&iacute;nea de comandos</p>
<p>Otra manera de cambiar el idioma predeterminado es mediante la ejecuci&oacute;n del instalador desde la l&iacute;nea de comandos. Por ejemplo, puede forzar al instalador a utilizar el ingl&eacute;s utilizando el comando siguiente:&nbsp;vs_installer.exe --locale en-US. El instalador recordar&aacute; esta configuraci&oacute;n cuando se ejecute la pr&oacute;xima vez. El instalador admite las siguientes&nbsp;configuraciones regionales de idioma: zh-cn, zh-tw, cs-cz, en-us, es-es, fr-fr, de-de, it-it, ja-jp, ko-kr, pl-pl, pt-br, ru-ru y tr-tr.</p>
<p>&nbsp;</p>
<p><strong>Paso&nbsp;7:</strong> Seleccionar la ubicaci&oacute;n de instalaci&oacute;n (opcional)</p>
<p>Puede reducir la superficie de memoria de instalaci&oacute;n de Visual&nbsp;Studio en la unidad del sistema. Para obtener m&aacute;s informaci&oacute;n, consulte&nbsp;Selecci&oacute;n de las ubicaciones de instalaci&oacute;n.</p>
<p><strong>Paso 8:</strong> Empezar a desarrollar</p>
<ol>
<li>Cuando la instalaci&oacute;n de Visual&nbsp;Studio haya finalizado, seleccione el bot&oacute;n&nbsp;Iniciar para empezar a desarrollar con Visual&nbsp;Studio.</li>
<li>En la ventana de inicio, elija&nbsp;Crear un proyecto nuevo.</li>
<li>En el cuadro de b&uacute;squeda de la plantilla, escriba el tipo de aplicaci&oacute;n que quiera crear para ver una lista de plantillas disponibles. La lista de plantillas depende de las cargas de trabajo que eligi&oacute; durante la instalaci&oacute;n. Para ver diferentes plantillas, elija diferentes cargas de trabajo.</li>
</ol>
<p>Tambi&eacute;n puede filtrar la b&uacute;squeda de un lenguaje de programaci&oacute;n espec&iacute;fico mediante la lista desplegable&nbsp;Lenguaje. Adem&aacute;s, puede filtrar mediante la lista&nbsp;Plataforma</strong>&nbsp;y la lista&nbsp;Tipo de proyecto.</p>
<ol start="4">
<li>Visual&nbsp;Studio abre el nuevo proyecto y ya se puede empezar programar.</li>
</ol>

