
#include "calc_heranca.h"

class MyKeyboard: public Keyboard {
    private:
       CPU *cpu;
    public:
        void setCPU(CPU *cpu) { this->cpu = cpu; };
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
        void pressSum() {   this->cpu->receiveOperation(SUM); };
        void pressSub() {   this->cpu->receiveOperation(SUB); };
        void pressDiv() {   this->cpu->receiveOperation(DIV); };
        void pressMult() {  this->cpu->receiveOperation(MUL); };
        void pressRoot() {  this->cpu->receiveOperation(ROOT); };
        void pressEqual() { this->cpu->receiveOperation(EQUAL); };
        void pressPercentage() { this->cpu->receiveOperation(PERCENTAGE); };
        void pressClearMemory(){ this->cpu->receiveOperation(CLEAR)}
};