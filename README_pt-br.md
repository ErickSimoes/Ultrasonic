[![Open Source badge](https://img.shields.io/badge/Open%20Source-❤-red.svg)](https://opensource.org/)
[![GitHub](https://img.shields.io/github/license/ErickSimoes/Ultrasonic)](https://github.com/ErickSimoes/Ultrasonic/blob/master/LICENSE)
[![GitHub release (latest by date)](https://img.shields.io/github/v/release/ErickSimoes/Ultrasonic)](https://github.com/ErickSimoes/Ultrasonic/releases/latest)
![Arduino Lint](https://github.com/ErickSimoes/Ultrasonic/workflows/Arduino%20Lint/badge.svg)

Ultrasonic
===========

_Biblioteca minimalista para módulos de ultrassom para Arduino_

### Compatível com **HC-SR04**, **Ping)))** e **Seeed SEN136B5B** (_from Seeed Studio_)

Trabalhar com  **módulos de ultrassom** relativamente simples, mas pode ser ainda mais prático se você abstrair o controle de alguns recursos. Essa biblioteca visa a eficiência dos recursos e o simples acesso de dados.

Quando precisar usar um módulo de ultrassom **HC-SR04** (um dos mais comuns no mercado), **Ping)))** e/ou **Seed SEN136B5B** (_da Seed Studios_), existem centenas de bibliotecas com a proposta de fornecer as mais diversas funções para o usuário, entretanto, na maior parte do tempo, nós precisamos apenas encontrar a distância e é exatamente isso que essa biblioteca faz.

Essa biblioteca é minimalista, reduz a execução do código, validação e uso desnecessário de variáveis globais, priorizando tipos de dados menores.

Circuito:
---------------
É muito fácil conectar o módulo de ultrassom ao Arduino. Por exemplo, se você estiver usando **HC-SR04**, conecte o pino `trigger` e `echo` do módulo nos pinos `12` e `13` do Arduino, respectivamente. Como na imagem:

![HC-SR04 com Arduino](extras/HC-SR04-with-Arduino.jpg?raw=true "HC-SR04 com Arduino")

Se você estiver usando um módulo com três pino (como **Ping)))** ou **Seed SEN136B5B**), você pode conectar o módulo de pino `sig` ao pino `13` do Arduino.

>Você pode usar os arquivos [Fritzing](http://fritzing.org/home/)(_.fzz_) dentro de [extras](https://github.com/ErickSimoes/Ultrasonic/tree/master/extras) para desenhar seus protótipos.

Como usar:
---------------
A ideia é proporcionar um ambiente mais simples possível. Para fazer isso, basta seguir as etapas:

1. **Intalando**

    Primeiro você precisa importar a biblioteca para que a IDE o reconheça. A forma mais simples é importar pela própria IDE. 
    -Clique em ```Sketch > Incluir Biblioteca > Gerenciar Bibliotecas...```;
    - No campo de pesquisa digite ```ultrasonic```;
    - Na lista, procure por ```Ultrasonic by Erick Simões```;
    - Clique em ```Instalar```.
    
    > Alternativamente, você pode baixar a biblioteca [aqui](https://github.com/ErickSimoes/Ultrasonic/archive/master.zip) e importar o arquivo ```.zip``` na IDE (veja como importar a biblioteca [aqui](https://www.arduino.cc/en/Guide/Libraries#toc4)).
    
2. **Importando o código**

    Para importar a biblioteca dentro do seu código, basta escrever no início do código ```#include  <Ultrasonic.h>``` ou, na IDE do Arduino, clique em ```Sketch > Incluir Biblioteca > Ultrasonic``` (_você vai obter o mesmo resultado_).
    
3. **Iniciando** (a melhor parte)

    Agora é simplesmente criar uma variável do tipo Ultrasonic passando como parâmetros dois valores representando, respectivamente, os pinos Trig (emissor) e Echo (receptor). Assim:
    ```c++
    Ultrasonic ultrasonic(12, 13);
    ```
    Se você estiver usando o módulo com três pinos (como o **Ping)))** ou **Seeed SEN136B5B**), passe como parâmetro apenas o pino de sinal. Assim:
    ```c++
    Ultrasonic ultrasonic(13);
    ```
4. **Descobrindo a distância**

    Tendo inicializado uma variável, você pode executar ela a partir do método que retorna a distância lida pelo módulo Ultrasonic: ```read()```:
    ```c++
    ultrasonic.read();
    ```
5. **Apenas isso?**

    Sim. É isso. Por padrão, o valor retornado pela função ```read()``` é a distância em centímetros. Veja um código completo de exemplo [aqui](/examples/UltrasonicSimple/UltrasonicSimple.ino).
    
6. **Sério?**

    Você ainda pode ser um pouco mais específico, determinando qual a unidade de medida que será retornada (centímetro(`CM`) ou polegada(`INC`)).
    ```c++
    ultrasonic.read()    // distância em CM
    ultrasonic.read(CM)  // distância em CM
    ultrasonic.read(INC) // distância em INC
    ```
    Você também pode usar mais um módulo de ultrassom:
    ```c++
    Ultrasonic ultrasound1(12, 13);
    Ultrasonic ultrasound2(10, 11);
    Ultrasonic ultrasound3(5);
    ```

7. **Tempo de Espera**

    Se não houver nenhum objeto ao alcance, a biblioteca vai "travar" enquanto aguarda o pulso de retorno. Você pode alterar o tempo de espera definindo um tempo limite (em microssegundos) no construtor:
    ```c++
    Ultrasonic ultrasonic(12, 13, 40000UL);
    ```
    Ou durante o tempo de execução:
    ```c++
    ultrasonic.setTimeout(40000UL);
    ```
    > O valor padrão é de `20000UL` (_Unsigned Long_).
    
    Usando um tempo de limite de 40ms deve dar a você um alcande máximo de aproximadamente 6,8m. Você pode precisar ajustar este parâmetro.

#### Veja mais exemplos [aqui](https://github.com/ErickSimoes/Ultrasonic/tree/master/examples).

Licença
----
Ultrasonic feito por [Erick Simões](http://ericksimoes.com.br/ "Erick Simões") é licenciado sob uma Licença MIT.
Baseado no trabalho de Carl John Nobile disponível [aqui](http://wiki.tetrasys-design.net/HCSR04Ultrasonic). 
Sinta-se à vontade para entrar em contato com o autor pelo Twitter: [@AloErickSimoes](https://twitter.com/AloErickSimoes) 

Veja mais detalhes sobre a [Licença](https://github.com/ErickSimoes/Ultrasonic/blob/master/LICENSE).
