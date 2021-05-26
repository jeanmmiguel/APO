
#include "calculator.h"

class JeanKeyboard: public OperationKeyBoard {
    private:
       Cpu *cpu;
    public:
        void setCPU(Cpu *cpu) { this->cpu = cpu; };
        void pressZero() {  this->cpu->receiveDigit(ZERO); };
        void pressOne() {   this->cpu->receiveDigit(ONE); };
        void pressTwo() {   this->cpu->receiveDigit(TWO); };
        void pressThree() { this->cpu->receiveDigit(THREE); };
        void pressFour() {  this->cpu->receiveDigit(FOUR); };
        void pressFive() {  this->cpu->receiveDigit(FIVE); };
        void pressSix() {   this->cpu->receiveDigit(SIX); };
        void pressSeven() { this->cpu->receiveDigit(SEVEN); };
        void pressEight() { this->cpu->receiveDigit(EIGHT); };
        void pressNine() {  this->cpu->receiveDigit(NINE); };
        void pressSum() {   this->cpu->receiveOperation(ADDITION); };
        void pressSub() {   this->cpu->receiveOperation(SUBTRACTION); };
        void pressDiv() {   this->cpu->receiveOperation(DIVISION); };
        void pressMult() {  this->cpu->receiveOperation(MULTIPLICATION); };
        void pressEqual() { this->cpu->receiveOperation(EQUAL); };
        
};
