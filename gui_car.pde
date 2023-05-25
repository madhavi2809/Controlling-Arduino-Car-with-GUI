import controlP5.*;
import processing.serial.*;

Serial port;

ControlP5 cp5;
PFont font;
PFont heading;

void setup(){
  size(1210, 370);
  
  printArray(Serial.list());  //prints all available serial ports
  
  port = new Serial(this, "COM7", 9600);  //connected arduino to COM7 according to my laptop
  
  //adding buttons
  cp5 = new ControlP5(this);
  heading = createFont("calibri light bold", 21);
  font = createFont("calibri light bold", 15);
  //ControlFont defaultFont = cp5.getDefaultControlFont();
  
  //ControlFont customFont = new ControlFont(createFont("calibri light", 15));
  
  cp5.addButton("Forward")
  .setPosition(230, 90)
  .setSize(110, 60);
  cp5.getController("Forward").getCaptionLabel().setFont(font);
  
  cp5 = new ControlP5(this);
  cp5.addButton("Backward")
  .setPosition(230, 230)
  .setSize(110, 60);
  cp5.getController("Backward").getCaptionLabel().setFont(font);
  
  cp5 = new ControlP5(this);
  cp5.addButton("Left")
  .setPosition(100, 160)
  .setSize(110, 60);
  cp5.getController("Left").getCaptionLabel().setFont(font);
  
  cp5 = new ControlP5(this);
  cp5.addButton("Right")
  .setPosition(360, 160)
  .setSize(110, 60);
  cp5.getController("Right").getCaptionLabel().setFont(font);
    
  cp5 = new ControlP5(this);
  cp5.addButton("Stop")
  .setPosition(235, 165)
  .setSize(100, 50);
  cp5.getController("Stop").getCaptionLabel().setFont(font);

  cp5 = new ControlP5(this);
  cp5.addButton("sec_1")
  .setPosition(600, 90)
  .setSize(90, 50);
  cp5.getController("sec_1").getCaptionLabel().setFont(font);
  
  cp5 = new ControlP5(this);
  cp5.addButton("sec_2")
  .setPosition(700, 90)
  .setSize(90, 50);
  cp5.getController("sec_2").getCaptionLabel().setFont(font);
  
  cp5 = new ControlP5(this);
  cp5.addButton("sec_3")
  .setPosition(800, 90)
  .setSize(90, 50);
  cp5.getController("sec_3").getCaptionLabel().setFont(font);
  
  cp5 = new ControlP5(this);
  cp5.addButton("sec_4")
  .setPosition(900, 90)
  .setSize(90, 50);
  cp5.getController("sec_4").getCaptionLabel().setFont(font);
  
  cp5 = new ControlP5(this);
  cp5.addButton("sec_5")
  .setPosition(1000, 90)
  .setSize(90, 50);
  cp5.getController("sec_5").getCaptionLabel().setFont(font);
  
  cp5 = new ControlP5(this);
  cp5.addButton("sec_6")
  .setPosition(600, 150)
  .setSize(90, 50);
  cp5.getController("sec_6").getCaptionLabel().setFont(font);
  
  cp5 = new ControlP5(this);
  cp5.addButton("sec_7")
  .setPosition(700, 150)
  .setSize(90, 50);
  cp5.getController("sec_7").getCaptionLabel().setFont(font);
  
  cp5 = new ControlP5(this);
  cp5.addButton("sec_8")
  .setPosition(800, 150)
  .setSize(90, 50);
  cp5.getController("sec_8").getCaptionLabel().setFont(font);
  
  cp5 = new ControlP5(this);
  cp5.addButton("sec_9")
  .setPosition(900, 150)
  .setSize(90, 50);
  cp5.getController("sec_9").getCaptionLabel().setFont(font);
  
  cp5 = new ControlP5(this);
  cp5.addButton("sec_10")
  .setPosition(1000, 150)
  .setSize(90, 50);
  cp5.getController("sec_10").getCaptionLabel().setFont(font);
}

void draw(){
  background(150, 0, 150);
  
  //Giving title to window
  fill(0, 255, 0);
  textFont(heading);
  text("ARDUINO ROVER CONTROL", 410, 30);
  textFont(font);
  text("CHOOSE DIRECTION", 210, 70);
  text("CHOOSE TIME IN SECONDS", 730, 70);
}

//adding functions to buttons, so that when any button is pressed, 
//the corresponding character is sent over serial port

void Forward(){
  port.write('f');
}

void Backward(){
  port.write('b');
}

void Right(){
  port.write('r');
}

void Left(){
  port.write('l');
}

void Stop(){
  port.write('s');
}

void sec_1(){
  port.write('1');
}

void sec_2(){
  port.write('2');
}

void sec_3(){
  port.write('3');
}

void sec_4(){
  port.write('4');
}

void sec_5(){
  port.write('5');
}

void sec_6(){
  port.write('6');
}

void sec_7(){
  port.write('7');
}

void sec_8(){
  port.write('8');
}

void sec_9(){
  port.write('9');
}

void sec_10(){
  port.write('a');
}
