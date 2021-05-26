#include "calculator.h"
#include "calculatorTest.cpp"
#include "JEANcpu.cpp"
#include "operacoesKey.cpp"
#include "keyboardNumeric.cpp"


int main(){
    Display* display = new JeanDisplay();
    Cpu* cpu = new JeanCpu();
    JeanNumericKeyBoard* JeanNumericKeyBoard= new JeanNumericKeyBoard(); 
    JeanOperationKeyBoard* OperationKeyBoard = new JeanOperationKeyBoard();

    Calculator* calculator = new Calculator(cpu, display, JeanNumericKeyBoard, OperationKeyBoard);
    
    DisplayTest::run(display);
    CpuTest::run(cpu, display);
    CalculatorTest::run(calculator);

    delete display;
    delete cpu;
    delete JeanNumericKeyBoard;
    delete JeanOperationKeyBoard;

    return 0;
}