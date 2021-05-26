#include "calculatoor.cpp"
#include "cpu.cpp"
#include "calc_heranca.h"
#include "keyboard.cpp"
#include "display.cpp"

int main(){
    Keyboard *keyboard = new MyKeyboard();

    Display *display = new MyDisplay();
    CPU *cpu = new MyCpu();

    Calculator *calculator = new MyCalculator(&display, &cpu, &keyboard);

    keyboard->pressOne();
    keyboard->pressPercentage();
    keyboard->pressOne();
    keyboard->pressSum();
    keyboard->pressFour();
    keyboard->pressClearMemory();
    
   
}