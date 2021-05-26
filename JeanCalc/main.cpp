#include "calculator.h"
#include "calculator.cpp"
#include "calculatorTest.cpp"

int main(){
    Display* display = new MyDisplay();
    Cpu* cpu = new MyCpu();
    NumericKeyBoard* numericKeyBoard = new MyNumericKeyBoard(); 
    OperationKeyBoard* operationKeyBoard = new MyOperationKeyBoard();

    Calculator* calculator = new MyCalculator(cpu, display, numericKeyBoard, operationKeyBoard);
    
    DisplayTest::run(display);
    CpuTest::run(cpu, display);
    CalculatorTest::run(calculator);

    delete display;
    delete cpu;
    delete numericKeyBoard;
    delete operationKeyBoard;

    return 0;
}