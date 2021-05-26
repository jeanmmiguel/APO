#include "calculator.h"

class JeanCalculator: public Calculator{
    public:
        JeanCalculator(Display** display, JeanCpu** cpu, JeanKeyboard** keyboard){
        this->display = *display;
        this->cpu = *cpu;
        this->keyboard = *keyboard;

        this->cpu->setDisplay(this->display);
        this->keyboard->setCpu(this->cpu);
    }
};
