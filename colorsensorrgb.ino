int OutPut= 10;
int red_light_pin= 11;
int green_light_pin = 9;
int blue_light_pin = 6;
int s0=2;
int s1=3;
int s2=4;
int s3=5;
unsigned int frequency1 = 0;
unsigned int frequency2 = 0;
unsigned int frequency3 = 0;

void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}


void setup()

{     Serial.begin(9600);
                pinMode(s0, OUTPUT);
                pinMode(s1, OUTPUT);
                pinMode(s2, OUTPUT);
                pinMode(s3, OUTPUT);
                pinMode(OutPut, INPUT);
                digitalWrite(2,HIGH);
                digitalWrite(3,LOW);
                 pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);

}
void loop()

{ RGB_color(frequency1,frequency2,frequency3);
//RGB_color(0,0,255); 
          Serial.println("R=");
                digitalWrite(4,LOW);
                digitalWrite(5,LOW);
                frequency1 = pulseIn(OutPut, LOW);
                //frequency1=map(frequency1,25,72,255,0);
                Serial.println(frequency1);
                delay(1500);
               Serial.println("B=");
                digitalWrite(4,LOW);
                digitalWrite(5,HIGH);
                frequency2 = pulseIn(OutPut, LOW);
                //frequency2=map(frequency2,30,90,255,0);
                Serial.println(frequency2);
                delay(1500);

               Serial.println("g=");
                digitalWrite(4,HIGH);
                digitalWrite(5,HIGH);// setting for GREEN color sensor
                frequency3 = pulseIn(OutPut, LOW);
                //frequency3=map(frequency3,25,70,0,255);// reading frequency
                Serial.println(frequency3);
                delay(1500);   
                     

}    
