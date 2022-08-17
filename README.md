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


