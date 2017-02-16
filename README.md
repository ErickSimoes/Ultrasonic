Ultrasonic
===========

_Minimalist library for ultrasound module **HC-SR04** to Arduino_

Work with the **ultrasonic module HC-SR04** is fairly simple, but can be even more practical if you abstract the control of some features. This library aims to resource efficiency and to simplify access to data.

Where necessary use the ultrasonic module HC-SR04 (one of the most common on the market), there are hundreds of libraries that purport to provide the most diverse roles for the user, however, the vast majority of the time, we just need to find out the distance and is that's what does this library.

This library is minimalist, reduces code execution, validation and unnecessary use of global variables, prioritizing smaller data types.

Wiring:
---------------
It is very easy to connect the HC-SR04 module to the Arduino. For this example, we will connect the **trigger** and echo pin module on pin **12** and **13** of the Arduino, respectively. As in the picture:
![HC-SR04 with Arduino](extras/HC-SR04-with-Arduino.jpg?raw=true "HC-SR04 with Arduino")

How to use:
---------------
The idea is to provide a simpler environment possible. To do this, simply follow the steps:

1. **Installing**

    First need to import the library so that the IDE recognizes it. For that you should download (click [here](https://github.com/ErickSimoes/Ultrasonic/archive/v1.0.1.zip)) and with the .zip file Ultrasonic library, import it into the IDE (see how to import a library [here](https://www.arduino.cc/en/Guide/Libraries#toc4)).
2. **Importing on code**

    To import the library to your code, just write at the beginning of the code ```#include <Ultrasonic.h>``` or, in the Arduino IDE, click in ```Sketch > Import library > Ultrasonic``` (_will have the same result_).
3. **Starting** (the most exciting part)

    Now is simply create a variable of type Ultrasonic passing as parameters two values representing, respectively, the Trig (emitter) and Echo (receiver) pins. Like this:
    ```c++
    Ultrasonic Ultrasonic(12, 13);
    ```
4. **Discovering the distance**

    Having initialized a variable, you can run hers from the method that returns the distance read by module Ultrasonic: ```distanceRead()```
    ```c++
    Ultrasonic.distanceRead()
    ```
5. **Only this?**

    Yes. That's it. By default, the value returned from the function  ```distanceRead()``` is the distance in centimeters.

6. **Seriously?**

    You can still do a little more determining the unit of measurement that will be returned (centimeters (CM) or inches (INC)).
    ```c++
    Ultrasonic.distanceRead()    // distance in CM
    Ultrasonic.distanceRead(CM)  // distance in CM
    Ultrasonic.distanceRead(INC) // distance in INC
    ```
    You can also use more than one ultrasound module:
    ```c++
    Ultrasonic ultrasound1(12, 13);
    Ultrasonic ultrasound2(10, 11);
    Ultrasonic ultrasound3(4, 5);
    ```

License
----
Ultrasonic by [Erick Simões](http://ericksimoes.com.br/ "Erick Simões") is licensed under a MIT License.
Based on the work of Carl John Nobile available [here](http://wiki.tetrasys-design.net/HCSR04Ultrasonic).
Feel free to contact the author on Twitter: [@AloErickSimoes](https://twitter.com/AloErickSimoes)

See [LICENSE](https://github.com/ErickSimoes/Ultrasonic/blob/master/LICENSE) for details.
