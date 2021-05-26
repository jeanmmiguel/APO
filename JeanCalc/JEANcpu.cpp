#include "calculator.h"

class MyCpu: public Cpu{
    private:
        Display *display;       
         Operation op;          
        float num1, num2;
        double result;
    public:
        MyCpu(){
            display;       
            op;          
        }

  void calculateOperation(Operation op){
        switch (op){
        case ADDITION:
          result = num1 + num2;
        case SUBTRACTION:
             result = num1 - num2;
            break;
        case DIVISION:
            if(num2 == 0){
               std::cout << "Não existe divisão por zero\n";
               break;
             }else{
                result = num1 / num2;
            }
            break;
        case MULTIPLICATION:
             result = num1 * num2;
            break;
      
        }
    }


void setDisplay(Display *display){
        this->display = display;
    }
