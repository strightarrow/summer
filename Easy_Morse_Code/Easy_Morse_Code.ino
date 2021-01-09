

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
}

//Change this value to set speed of Morse Code. Smaller values = faster, larger values = slower, 1000 = 1 second
int dot = 600;



int dash = dot * 3;
//This simple Morse Code program allows easy use of morse code through a blinking light on pin 13 and ground.
//Program is capable of using all 40 base Morse Code characters: All letters, numbers 0-9, period, comma, question and exclamation marks.
//All letters are s lowercase. Ex: a(); , f(); , x();
//All numbers begin with "Num" followed by the number. Ex: Num6();
//Punctuation marks start with the a capitalized first letter of the name of the mark followed by "mark". Ex: Pmark(); , Cmark(); , Qmark(); , Emark(); 
void loop() {
//after each word, insert a "delay(dash);" command.
//After each sentence, insert a "delay(dash + dash)" command.
a();
r();
d();
u();
i();
n();
o();
s();
delay(dash);
a();
r();
e();
delay(dash);
a();
w();
e();
s();
o();
m();
e();
Emark();
delay(dash + dash);
}

void a(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void b(){
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

void c(){
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

void d(){
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

void e(){
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

void g(){
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

void h(){
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

void i(){
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void j(){
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

void k(){
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

void l(){
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

void m(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void n(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dot);
digitalWrite(13, LOW);
delay(dot + dash);
}

void o(){
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

void p(){
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

void q(){
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

void r(){
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

void s(){
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

void t(){
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void u(){
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

void v(){
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

void w(){
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

void x(){
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

void y(){
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

void z(){
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

void num1(){
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

void num2(){
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

void num3(){
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

void num4(){
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

void num5(){
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

void num6(){
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

void num7(){
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

void num8(){
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

void num9(){
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

void num0(){
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

void Pmark(){
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
delay(dot);
digitalWrite(13, LOW);
delay(dot);
digitalWrite(13, HIGH);
delay(dash);
digitalWrite(13, LOW);
delay(dot + dash);
}

void Cmark(){
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
