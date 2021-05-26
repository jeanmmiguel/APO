#include "calculator.h"

class JeanNumericKeyBoard : public NumericKeyBoard {
  private:
   
   
    Cpu *cpu;

  public:
    JeanNumericKeyBoard(Cpu *cpu);

    void setCpu(Cpu *cpu);

    void pressZero();
    void pressOne();
    void pressTwo();
    void pressThree();
    void pressFour();
    void pressFive();
    void pressSix();
    void pressSeven();
    void pressEight();
    void pressNine();
};
JeanNumericKeyBoard::JeanNumericKeyBoard(Cpu *cpu) {
  this->cpu = cpu;
}

void JeanNumericKeyBoard::setCpu (Cpu *cpu) {
  this->cpu = cpu;
}

void JeanNumericKeyBoard::pressZero () {
  this->cpu->receiveDigit(ZERO);
}

void JeanNumericKeyBoard::pressOne () {
  this->cpu->receiveDigit(ONE);
}

void JeanNumericKeyBoard::pressTwo () {
  this->cpu->receiveDigit(TWO);
}

void JeanNumericKeyBoard::pressThree () {
  this->cpu->receiveDigit(THREE);
}

void JeanNumericKeyBoard::pressFour () {
  this->cpu->receiveDigit(FOUR);
}

void JeanNumericKeyBoard::pressFive () {
  this->cpu->receiveDigit(FIVE);
}

void JeanNumericKeyBoard::pressSix () {
  this->cpu->receiveDigit(SIX);
}

void JeanNumericKeyBoard::pressSeven () {
  this->cpu->receiveDigit(SEVEN);
}

void JeanNumericKeyBoard::pressEight () {
  this->cpu->receiveDigit(EIGHT);
}

void JeanNumericKeyBoard::pressNine () {
  this->cpu->receiveDigit(NINE);
}