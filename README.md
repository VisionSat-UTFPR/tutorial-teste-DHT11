# TUTORIAL TESTE DO SENSOR DE TEMPERATURA E UMIDADE DHT11

##  Bibliotecas Utilizadas:
DHT11: Deve-se possuir a biblioteca DHT11 instalada na IDE do arduino ou dentro da pasta de bibliotecas. Para obter a biblioteca acesse este link: http://hobbyist.co.nz/sites/default/files/WeatherStation/DHT.zip realize o download, após o download extraia e coloque o conteudo no caminho \Arduino\libraries

### Outro metodo de obtenção da Biblioteca caso não esteja funcionando esse link:
Para encontrar a biblioteca necessaria caso não funcione o link, (se forem bibliotecas de sensores muito comuns vão encontrar quase todos usando esse metodo caso contrario for algo meio fora do normal  joga no google que voces encontram la pra download ),  voces teram que entrar na opção sketch e ir em INCLUDE LIBRARY  e depois clicar em MANAGER LIBRARY


![](https://github.com/VisionSat-UTFPR/tutorial-teste-DHT11/blob/master/img/ONDE%20IR%20PRA%20BAIXAR%20OS%20ROLES%20de%20biblioteca.png) 

Depois que clicar la vai aparecer uma aba onde voce pode digitar o nome da biblioteca e caso encotre ela selecione e clique em instalar, (a opção de instalar so aparece quando seleciona a biblioteca). 

![](https://github.com/VisionSat-UTFPR/tutorial-teste-DHT11/blob/master/img/ONDE%20IR%20PRA%20BAIXAR%20OS%20ROLES%20de%20biblioteca2222.png)

## Materias a utilizar:
 * Arduino (caso não pegue tenta usar o modelo  UNO, (iremos testar em outros modelos e em outros dispositivos e quando isso ocorrer esse arquivo será atualizado))

 * Protoboard

 * Sensor de umidade e temperatura DHT11 (Datasheet sensor: http://robocraft.ru/files/datasheet/DHT11.pdf
cabo usb 
jumpers


## Esquematico do Circuito:


![](https://github.com/VisionSat-UTFPR/tutorial-teste-DHT11/blob/master/img/dht11%20esquematico.png)

Lembrando que o terceiro pino não é utilizado tanto que varios sensores DHT11 muitas vezes não sao vendidos sem esse pino em forma de modulo onde temos apenas 3 pinos : Vcc, Data e Gnd

![](https://github.com/VisionSat-UTFPR/tutorial-teste-DHT11/blob/master/img/unibus-digital-humiture-sensor-module-dht11-for-arduino_grsstl1348482540285.jpg)


### Codigo do Arduino pra fazer a bagaça funcionar:
* Está disponivel junto com esse manual no formato necessario para rodar no arduino, o formato do arquivo é .ino então so coloca-lo para rodar no arduino 

## OQUE TEM QUE APARECER QUANDO RODAR O ROLE:

![](https://github.com/VisionSat-UTFPR/tutorial-teste-DHT11/blob/master/img/COM4%20DHT11.png)

Caso não aparecer isso verificar se está com o serial em 9600  e se está no terminal serial correto(COM alguma coisa ,testa todas mas normalmente é os numeros mais altos 3 4 5 ....)

##  Informações uteis sobre o codigo:
AS COISAS DO CODIGO TÃO COMENTADAS NO CODIGO ENTÃO SÓ LER LA QUE VOCES VÃO ENTENDER.

* Temperatura: É calculada em graus Celcius mas voce pode convertela em Fahrenheit (F) colocando a seguinte equação no codigo F = C * 9/5 + 32 

* Umidade: Ela está dada em porcentagem ela é calculada através da variação da energia eletrica e dos calculos realizados na biblioteca DHT11 que passa pelo sensor 


Bom é isso o tutorial pra fazer o sensor rodar qualquer duvida entar em contato com a equipe do VisionSat, temos pagina no face então só botar la e pesquisar que voce acha vlw flwwwwwwwww  ^^^^^^. 




