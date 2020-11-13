# AliceLED - зажигание светодиода на esp8266 с по

[//]: <> ( [**▶SWITCH TO ENGLISH◀**](https://github.com/petrpk01/AliceLED/blob/main/README_eng.md)

* [О проекте](#chapter-0)
* [Оборудование](#chapter-1)
* [Программное обеспечение](#chapter-2)
* [План](#chapter-3)
* [Cсылки](#chapter-4)

<a id="chapter-0"></a>
## О проекте
![Diagram](https://github.com/petrpk01/AliceLED/blob/main/diagrams/AliceLED.png)

<a id="chapter-1"></a>
## Оборудование`
1. Микроконтроллер
   1. esp8266 nodemcu v3 CH340 (esp8266 NodeMCU v1.0)
   
   ![esp8266](https://github.com/petrpk01/AliceLED/blob/main/manuals/NodeMCU/esp8266_01.png)

2. Индикаторы

![LED](https://github.com/petrpk01/AliceLED/blob/main/manuals/Amperka/LED/LED.png) 

3. Прочее

![Yandex.Station](https://github.com/petrpk01/AliceLED/blob/main/manuals/Yandex/Station/Yandex.Station.jpg) 

<a id="chapter-2"></a>   
## Программное обеспечение
1. Код
   1. Microsoft Visual Studio Code
   2. Python
   3. PlatformIO

<a id="chapter-3"></a>
## План
- [x] Собрать схему
- [x] Создать проект Blynk и получить Auth Token
- [x] В приложении Blynk создать кнопку (Button) и назначить ее на виртуальный PIN V4 
- [x] Включать и выключать светодиод с помощью команд http://blynk-cloud.com/auth_token/update/V1?value=1 	Включить V1
http://blynk-cloud.com/auth_token/update/V1?value=0 	Выключить V1 (команды в виде комментариев прописаны в lib\wifi\wifi_config.h)
- [x] Включать и выключать светодиод с помощью приложения Blynk
- [x] Настроить работу с Алисой 


<a id="chapter-4"></a>
## Ссылки 
[побудительное видео][1]
[Алиса, Ардуино и Blynk - делаем собственное устройство][2]


[1]: https://www.youtube.com/watch?v=9rQ1yl00WwE "побудительное видео"
[2]: https://wiki.yaboard.com/w/%D0%90%D0%BB%D0%B8%D1%81%D0%B0,_%D0%90%D1%80%D0%B4%D1%83%D0%B8%D0%BD%D0%BE_%D0%B8_Blynk_-_%D0%B4%D0%B5%D0%BB%D0%B0%D0%B5%D0%BC_%D1%81%D0%BE%D0%B1%D1%81%D1%82%D0%B2%D0%B5%D0%BD%D0%BD%D0%BE%D0%B5_%D1%83%D1%81%D1%82%D1%80%D0%BE%D0%B9%D1%81%D1%82%D0%B2%D0%BE "Алиса, Ардуино и Blynk - делаем собственное устройство"
