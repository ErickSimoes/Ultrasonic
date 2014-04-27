Ultrasonick
===========

*Minimalist library for ultrasound module HC-SR04 to Arduino.*

Work with the ultrasonic module HC-SR04 is fairly simple, but can be even more practical if you abstract the control of some features. This library aims to resource efficiency and to simplify access to data.

Where necessary use the ultrasonic module HC-SR04 (one of the most common on the market), there are hundreds of libraries that purport to provide the most diverse roles for the user, however, the vast majority of the time, we just need to find out the distance and is that's what does this library.

Lovingly called Ultrasonick, it is minimalist, reduces code execution, validation and unnecessary use of global variables. Still prioritizes smaller data types and is compatible with older versions of the Arduino IDE.

How to use:
---------------
The idea is to provide a simpler environment possible. To do this, simply follow the steps:

1. **Installing**

    First need to import the library so that the IDE recognizes it. For that you should download and with the .zip file Ultrasonick library, import it into the IDE.
2. **Importing**

    To import the library, just write at the beginning of the code #include or, in the Arduino IDE, click in ```Sketch > Import library > Ultrasonick``` (will have the same result).
3. **Starting** (the most exciting part)

    Now is simply create a variable of type Ultrasonick passing as parameters two integers representing, respectively, the Trig (emitter) and Echo (receiver) pins. Like this:
    ```
    Ultrasonick ultrasonick(12, 13);
    ```
4. **Discovering the distance**

    Having initialized a variable, you can run hers from the method that returns the distance read by module Ultrasonic: ```distanceRead()```
    ```
    ultrasonick.distanceRead()
    ```
5. **Only this?**

    Yes. That's it. By default, the value returned from the function  ```distanceRead()``` is the distance in centimeters.

6. **Seriously?**

    You can still do a little more determining the unit of measurement that will be returned (centimeters (CM) or inches (INC)).
    ```
    ultrasonick.distanceRead()    // distance in CM
    ultrasonick.distanceRead(CM)  // distance in CM
    ultrasonick.distanceRead(INC) // distance in INC
    ```


License
----

Ultrasonick by [EricK Simões de Matos](http://ericksimoes.com.br/ "EricK Simões") is licensed under a Creative Commons Attribution-ShareAlike 4.0 International License.
Based on a work at http://wiki.tetrasys-design.net/HCSR04Ultrasonic.
Permissions beyond the scope of this license may be available at [http://ericksimoes.com.br/sobre/](http://ericksimoes.com.br/sobre/ "About EricK Simões").
