# Proyecto02

## Organizador de centro comercial

### Idea

Tuve esta idea ya que se requieren varias clases en este proyecto, y aquí puedo utilizar ese concepto, ya que en un centro comercial hay diferentes tipos de negocios (como tiendas de ropa, restaurantes y cines, entre otros), y cada tipo sería una clase diferente aquí.

### Diagrama UML

En el diagrama UML representando en este documento se visualizan las clases que compondrán mi proyecto. Primero, se crea la clase Negocio, con las características que cualquier negocio en un centro comercial tiene, incluida la planta del edificio donde está ubicado. Estos atributos son heredados por tres tipos diferentes de negocios, las tiendas de ropa, los restaurantes y los cines. Cada uno de estos negocios tiene atributos particulares, como el tipo de ropa vendida, el tipo de comida de un restaurante, si este tiene o no licencia para vender alcohol o el número de salas que tiene un cine. Estas clases se asocian con el centro comercial, ya que dependen de él para existir.
Casos en que el programa puede presentar errores serían negocios ubicados en más de una planta, algo que no permite la clase Negocio o negocios que no tienen el mismo horario todos los días que funcionan. Esto se podría evitar creando dos objetos de tipo Negocio para un mismo negocio si están en más de una planta o tienen horarios irregulares.

![image](https://github.com/mzapata25/proyecto_segundo_semestre/assets/142268986/4e095789-1f19-460b-a48c-f7e1eddcb1c3)
