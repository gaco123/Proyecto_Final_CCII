![Vet logo](https://raw.githubusercontent.com/gaco123/Proyecto_Final_CCII/master/Extras/logo.png)

===========================

Proyecto Final del Curso de CCII
-------------
Integrantes:

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

<h3>PROGRAMA DE GESTIÓN VETERINARIA “VetPro”</h3>
<p>===========================</p>
<h4>¿En qué va a consistir nuestro programa? ¿Por qué elegimos un programa de gestión veterinaria?</h4>
<p>La raíz de este proyecto es buscar una solución a un sistema ineficiente visto en muchas veterinarias, en especial en el aspecto de registro de clientes y mascotas. 

Por ejemplo, después de registrar a una mascota en una veterinaria, lo más común es que a un cliente se le entregue una cartilla en la que se recopilan los datos de sus mascotas. Generalmente datos como: Nombre, información del dueño, fechas de vacunas, fechas de desparasitación, etc. Todo ello registrado en una cartilla que en muchos casos termina siendo desechada o pérdida, <b>ya sea por el ajetreo de la vida diaria de los dueños o a un sistema de registro de información antiguo y casi obsoleto.</b>

Nosotros buscamos realizar un programa de escritorio que solucione esta problemática, un sistema que permita gestionar y mostrar mediante una interfaz interactiva e intuitiva: <b>Datos de los clientes, datos de las mascotas de los clientes, registro de vacunas de las mascotas, facturas, citas, y muchas cosas más.</b></p>
<p>----------------------------------------------</p>
<h4>¿Qué lenguaje de programación y herramientas vamos a usar para desarrollar nuestro programa?</h4>
<p>El lenguaje de programación usado para nuestro programa será C++, también usaremos una interfaz de programación de aplicación gráfica <i>(WinForms)</i> y una base de datos <i>(en este caso MySql Workbench)</i>, la cual se encargará de almacenar y mantener seguros todos los datos de la aplicación en la nube.</p>
<p>===========================</p>
<h3>PROCESO SEGUIDO POR EL MOMENTO</h3>
<p>===========================</p>
<p>Comenzamos diseñando un prototipo de nuestra aplicación</p>

<iframe src="https://www.figma.com/embed?embed_host=share&url=https%3A%2F%2Fwww.figma.com%2Fproto%2FZjvRwTrsCjNgFQ0PgcXp4W%2FUntitled%3Fnode-id%3D2%253A5%26starting-point-node-id%3D2%253A5" allowfullscreen></iframe>
<br>
<p>Teniendo ya una idea del resultado deseado, procedimos a diseñar la arquitectura y distribución de la base de datos.</p>
<p>----------</p>
<p><i>BASE DE DATOS</i></p>
<p>----------</p>
<ul><h4>Distribución</h4>
<li>Veterinarios</li>
<ul><li>Almacena los datos de todos los veterinarios. Será de gran utilidad dentro del login, ya que los veterinarios serán quienes manejen la plataforma</li></ul>
<li>Clientes</li>
<ul><li>Contiene la información y datos de contacto sobre cada uno de los clientes.</li></ul>
<li>Mascota</li>
<ul><li>Maneja la información de todas las mascotas registradas. Se vincula cada mascota con su dueño con una ID (Así no sobrecargamos la base de datos del cliente)</li></ul>
<li>Citas</li>
<ul><li>Almacena las citas por fechas, asigando a cada cita una ID y vincula la información de la mascota y el cliente mediante ID's</li></ul>
</ul>
<br>
<h4>Diagrama de la base de datos</h4>
===========================
![Vet Arqui](https://raw.githubusercontent.com/gaco123/Proyecto_Final_CCII/master/Extras/Arqui_DB.png)