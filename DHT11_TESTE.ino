//Biblioteca utilizada para realizar a medição dos dados.
#include <dht.h>

#define dht_dpin A1 //Pino DATA do Sensor ligado na porta Analogica A1 se quiser trocar a entrada só substituir no codigo a porta A1 por outra como A0, A2, A3 ETC....

dht DHT; //Inicializa o sensor

void setup()
{
  Serial.begin(9600);
  delay(1000);//Aguarda 1 seg antes de acessar as informações do sensor
}

void loop()
{
  DHT.read11(dht_dpin); //Lê as informações do sensor
  // printa a palavra umidade =
  Serial.print("Umidade = ");
  // printa os dados com relação a umidade
  Serial.print(DHT.humidity);
  // printa o sinal de porcentagem 
  Serial.print(" %  ");
  // printa a palavra temperatura =
  Serial.print("Temperatura = ");
  //printa o valor da temperatura
  Serial.print(DHT.temperature); 
  //printa a palavra celcius
  Serial.println(" Celsius  ");

  //Não diminuir o valor abaixo. O ideal é a leitura a cada 2 segundos 
  delay(2000);  
}
