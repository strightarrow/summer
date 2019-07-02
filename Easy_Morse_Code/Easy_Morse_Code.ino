

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
}

//Change this value to set speed of Morse Code. Smaller values = faster, larger values = slower, 1000 = 1 second
int dot = 600;



int dash = dot * 3;
//Simple Morse Code program allows easy use of morse code through a blinking light on pin 13 and ground.
//Program is capable of using all letters, numbers 0-9, and question and exclamation marks.
//All letters are capitals except for "f" which is lowercase. Ex: A(); , f();
//All numbers begin with "Num" the the number. Ex: Num6();
//Question and exclamation marks first letter of the name, then "mark". Ex: Qmark(); , Emark();
void loop() {
//after each word, insert a "delay(dash);" command.
//After each sentence, insert a "delay(dash + dash)" command.
A();
R();
D();
U();
I();
N();
O();
S();
delay(dash);
A();
R();
E();
delay(dash);
A();
W();
E();
S();
O();
M();
E();
Emark();
delay(dash + dash);
}

void A(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void B(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void C(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void D(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void E(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void f(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void G(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot + dash);
}

 void H(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void I(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void J(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void K(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void L(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void M(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void N(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void O(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void P(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void Q(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void R(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void S(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void T(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void U(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void V(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void W(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void X(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void Y(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void Z(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void Num1(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void Num2(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void Num3(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void Num4(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void Num5(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void Num6(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void Num7(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void Num8(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void Num9(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void Num0(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void Qmark(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void Emark(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
}
