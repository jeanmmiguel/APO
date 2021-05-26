#include "calc_heranca.h"

class MyCalculator: public Calculator{
    public:
        MyCalculator(Display** display, CPU** cpu, Keyboard** keyboard){
        this->display = *display;
        this->cpu = *cpu;
        this->keyboard = *keyboard;

        this->cpu->setDisplay(this->display);
        this->keyboard->setCpu(this->cpu);
    }
};
