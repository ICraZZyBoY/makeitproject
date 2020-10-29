 #include<AccelStepper.h>

   // создаем экземпляр AccelStepper

   #define IN1 D4

   #define IN2 D3

   #define IN3 D2

   #define IN4 D1

   AccelStepper s28BYJ48(8, IN1, IN3, IN2, IN4);



   void setup(){

   s28BYJ48.setMaxSpeed(900.0);

   s28BYJ48.setAcceleration(300.0);

   s28BYJ48.setSpeed(500);

   s28BYJ48.moveTo(2000);

   }



   void loop(){

   // Изменяем направление, если пройдено заданное число шагов

   if(s28BYJ48.distanceToGo()==0)
       s28BYJ48.moveTo(-s28BYJ48.currentPosition());
   s28BYJ48.run();

   }
