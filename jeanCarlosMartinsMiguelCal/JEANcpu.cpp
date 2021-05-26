
#include <string>
#include "calculator.h"


JeanCpu::JeanCpu(){
  this->Firstcount = 0;
  this->SecondCount = 0;
 
}

void JeanCpu::setDisplay(Display *display){
  this->display = display;
}



void JeanCpu::receiveOperation(Operation operation){
  
  this->display->clear();

  if(operation == EQUAL) {
    this->calculate();
    return;
  }

  this->operation = operation;
}


void JeanCpu::ReceiveDigit(Digit digit){

    
    this->display->addDigit(digit);
    
    if(this->operation == NONE){
      this->FirstCount[this->Firstcount] = digit;
      this->Firstcount++;
    }else{
      this->SecondCount[this->SecondCOunt] = digit;
      this->++;
    }
  

}

void JeanCpu::cancel(){
  this->display->clear();

  if(this->operation == NONE){
    this->Firstcount = 0;
  }else{
    this->SecondCount = 0;
  }
}

void JeanCpu::reset(){

  this->Firstcount = 0;
  this->SecondCount = 0;
  this->operation = NONE;
}


void JeanCpu::calculate(){
 float total;
 float number1, number2;
  switch (this->operation){
  case ADDITION:
    total = number1 + number2;
    break;
  case SUBTRACTION:
    total = number1 - number2;
    break;
  case DIVISION:
    total = number1 / number2;
    break;
  case MULTIPLICATION:
    total = number1 * number2;
    break;
  }

  

}