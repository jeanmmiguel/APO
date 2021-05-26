
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class calculadora{
public:
float numero1, numero2, result;
int escolha;
char op;
int getOperacao(int op);
int getNumeros(float num1, float num2);
void somarNumeros(float num1, float num2);
void subtrairNumeros(float num1, float num2);
void dividirNumeros(float num1, float num2);
void multiplicarNumeros(float num1, float num2);
void moduloEntreNumeros(int num1,int num2);
void menu();
void opcoesDeEscolha();
void opcoesDeContinuacao();
};



void calculadora::menu() {
    cout<<"===============================================================\n";
    cout<<"                         MENU                                  \n";
    cout<<"===============================================================\n";
    cout<<"     1. Adição\n";
    cout<<"     2. Subtração\n";
    cout<<"     3. Multiplicação\n";
    cout<<"     4. Divisão\n";
    cout<<"     5. Modulo\n";
    cout<<"===============================================================\n\n";
    cout<<"===============================================================\n\n\n";
}

void calculadora::opcoesDeEscolha() {
    cout << "Entre com sua escolha" << endl;
    cin >> escolha;
        cout << "Enter first number" << endl;
        cin >> numero1;
        cout << "Enter second number" << endl;
        cin >> numero2;
    switch(escolha){
        case 1: somarNumeros(numero1,numero2); break;
        case 2: subtrairNumeros(numero1,numero2); break;
        case 3: multiplicarNumeros(numero1,numero2); break;
        case 4: dividirNumeros(numero1,numero2); break;
        case 5: moduloEntreNumeros(numero1,numero2); break;
    default: cout << "Entrada Inválida. Tente novamente!" << endl;
    }

}


void calculadora::opcoesDeContinuacao() {
    do {
        opcoesDeEscolha();

    cout << "Você quer continuar? S/N" << endl;
    cin >> op;
    }
    while(op == 'S' || op == 's');
}




class display: public calculadora{
public:
float resultado;
void mostrarResultado(float result);
};

void display:: mostrarResultado(float result){
        cout << "Result:" << result << endl;

}

void calculadora:: somarNumeros(float num1, float num2){
    result = num1 + num2;
    display d;
    d.mostrarResultado(result);

   

}
void calculadora:: subtrairNumeros(float num1, float num2){
        result = num1 - num2;
        display d;
        d.mostrarResultado(result);


}
void calculadora:: dividirNumeros(float num1, float num2){
         result = num1 / num2;
        display d;
        d.mostrarResultado(result);


    
}

void calculadora :: multiplicarNumeros(float num1, float num2){
    result = num1 * num2;
    display d;
    d.mostrarResultado(result);



}

void calculadora :: moduloEntreNumeros(int num1, int num2){
    result = num1 % num2;
    display d;
    d.mostrarResultado(result);



}



int main(){

calculadora c1;
c1.menu();
c1.opcoesDeEscolha();

}

