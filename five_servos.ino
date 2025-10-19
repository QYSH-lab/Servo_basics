#include <Servo.h> // подключаем библиотеку для работы с сервоприводом

Servo servo1,servo2,servo3,servo4; // объявляем переменную servo типа "servo1"

void setup() {servo1.attach(7);  servo2.attach(6); servo3.attach(5); servo4.attach(4);}

void loop() {servo2.write(59); delay(2000); /*servo2.write(10); delay(2000); servo3.write(15); delay(2000); servo4.write(20); delay(2000); */   }
    