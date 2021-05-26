#include "calculator.h"
class JeanOperationKeyBoard : public OperationKeyBoard {
  private:
    Cpu *cpu;

  public:
    JeanOperationKeyBoard(Cpu *cpu);

    void setCpu(Cpu *cpu);
    
    void pressAddition();
    void pressDivision();
    void pressMultiplication();
    void pressSubtraction();
    void pressEquals();
};

JeanOperationKeyBoard::JeanOperationKeyBoard(Cpu *cpu) {
  this->cpu = cpu;
}

void JeanOperationKeyBoard::setCpu (Cpu* cpu) {
  this->cpu = cpu;
}
    
void JeanOperationKeyBoard::pressAddition () {
  this->cpu->receiveOperation(ADDITION);
}

void JeanOperationKeyBoard::pressDivision () {
  this->cpu->receiveOperation(DIVISION);
}
void JeanOperationKeyBoard::pressSubtraction () {
  this->cpu->receiveOperation(SUBTRACTION);
}

void JeanOperationKeyBoard::pressEquals () {
  this->cpu->receiveOperation(EQUAL);
}
void JeanOperationKeyBoard::pressMultiplication () {
  this->cpu->receiveOperation(MULTIPLICATION);
}

