Ultrasonick
===========

*Biblioteca Arduino minimalista para o módulo ultrassom HC-SR04.*

Trabalhar com o módulo ultrassônico HC-SR04 é bastante simples, mas pode ser ainda mais prático de você abstrair o controle de algumas funcionalidades. Esta biblioteca visa a economia de recursos e a simplicidade no acesso aos dados.

Quando necessário usar o módulo ultrassônico HC-SR04 (um dos mais comuns no mercado), há centenas de bibliotecas que se propõem a disponibilizar as mais diversas funções para o usuário, porem, a grande maioria das vezes, necessitamos apenas descobrir a distância e é isso que esta biblioteca faz.

Carinhosamente chamada de Ultrasonick, ela é minimalista, reduz a execução de códigos, validações desnecessárias e o uso de variáveis globais. Ainda prioriza tipos de dados menores e é compatível com versões antigas da IDE do Arduino.



Ultrasonick de EricK Simões de Matos está licenciado com uma Licença Creative Commons – Atribuição-CompartilhaIgual 4.0 Internacional.
Baseado no trabalho disponível em http://wiki.tetrasys-design.net/HCSR04Ultrasonic.
Pode ser possível adquirir autorizações adicionais às concedidas no âmbito desta licença entrando em contato com o desenvolvedor através dos links em http://ericksimoes.com.br/sobre/.

Como usar:
---------------
A ideia é fornecer um ambiente mais simples possível. Para isto, basta seguir os requintes passos:

1. **Instalando**

    Primeiro é necessário importar a biblioteca de forma que a IDE a reconheça. Para isso você deve fazer o download neste link. Com o arquivo .zip da biblioteca Ultrasonick, instale a biblioteca desta forma.
2. **Importando**

    Para importar a biblioteca, basta escrever no início do código  #include ou, na IDE Arduino, clique em ```Sketch > Importar biblioteca > Ultrasonick``` (terá o mesmo resultado).
3. **Inicializando** (a parte mais emocionante)

    Agora é basta criar uma variável do tipo Ultrasonick passando como parâmetros dois números inteiros que representam, respectivamente, os pinos Trig (emissor) e Echo (receptor). Desta forma:
    ```
    Ultrasonick ultrasonick(12, 13);
    ```
4. **Descobrindo a distancia**

    Tendo inicializado uma variável, é possível executar a partir dela o método que retorna a distância lida pelo módulo Ultrassônico:  ```distanceRead()```
    ```
    ultrasonick.distanceRead()
    ```
5. **Só isso?**

    É. Só isso. Por padrão, o valor retornado da função  ```distanceRead()``` representa a distância em centímetros.

6. **Sério mesmo?**

    Você ainda pode fazer mais um pouco, com imprimir na tela a distância lida pelo sensor ou definir a unidade de medida que será retornada (centímetros ou polegadas).


Licença
----

Ultrasonick de EricK Simões de Matos está licenciado com uma Licença Creative Commons – Atribuição-CompartilhaIgual 4.0 Internacional.
Baseado no trabalho disponível em http://wiki.tetrasys-design.net/HCSR04Ultrasonic.
Podem estar disponíveis autorizações adicionais às concedidas no âmbito desta licença em http://ericksimoes.com.br/sobre/.
