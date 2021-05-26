#include "calc_heranca.h"

class MyCpu: public CPU{
    private:
        Display *display;       
        Operator op;          
        float num1, num2;
        double result;
    public:
        MyCpu(){
            display;       
            op;          
        }

  void calculateOperation(Operator op){
        switch (op){
        case SUM:
          result = num1 + num2;
        case SUB:
             result = num1 - num2;
            break;
        case DIV:
            if(num2 == 0){
               std::cout << "Não existe divisão por zero\n";
               break;
             }else{
                result = num1 / num2;
            }
            break;
        case MUL:
             result = num1 * num2;
            break;
        case ROOT:
             result = sqrt(num1);
            break;
        case PERCENTAGE:
             result = (num1 + num2) / 100;
            break;
        }
    }


void setDisplay(Display *display){
        this->display = display;
    }