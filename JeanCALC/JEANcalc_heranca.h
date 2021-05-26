#include <iostream>
#include <cmath>


enum Digit {ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE};
enum Operator {SUB,SUM,DIV,MUL,EQUAL,ROOT,CLEAR,PERCENTAGE,EQUAL};


class Display{
 public:
  virtual void displayDigit(Digit digit) = 0;
  virtual void clearScreen() = 0;


};

class CPU{
    public:
    virtual void receiveDigit(Digit d) = 0;
    virtual char receiveOperation(Operator o) = 0;
    virtual void resetMemory() = 0;
    virtual void setDisplay(Display *display) = 0;
    virtual void calculateOperation();
    virtual void setOperation() = 0;
    



};

class Keyboard{
    public:
    virtual void setCpu(CPU *cpu) = 0;
    virtual void pressZero() = 0;
    virtual void pressOne();
    virtual void pressTwo();
    virtual void pressThree();
    virtual void pressFour();
    virtual void pressFive();
    virtual void pressSix();
    virtual void pressSeven();
    virtual void pressEight();
    virtual void pressNine();
    virtual void pressDot();
    virtual void pressMinus();
    virtual void pressTimes();
    virtual void pressSlash();
    virtual void pressEqual();
    virtual void pressRoot();
    virtual void pressPercentage();
    virtual void pressClearMemory();

};

class Calculator{
public:
float numero1, numero2, result;
 private:
 Display *display;
 CPU *cpu;
 Keyboard *keyboard;
};