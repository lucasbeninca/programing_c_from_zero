#include  <iostream>
using namespace std;

int main (){
// O TIPO PRIMITIVO BOOL, RECEBE APENAS TRUE OU FALSE
    bool isAdmin = false;
    cout << isAdmin << endl;
// CHAR É USADO PARA ARMAZENAR UM UNICO VALOR
    char symbol = '#';
    cout << symbol << endl;
// MODIFICADORES DO TIPO PRIMITIVO INT SHORT E UNSIGNED (NUMERO SEM SINAL +/-)
   unsigned short int age = 30;
    cout << age << endl;
    short int n1 = 1;
    long int n2 = 2;
    unsigned int n3 = 3;
    long long int n4 = 4;

    cout << sizeof(char) << " bytes: " << endl;
    cout << sizeof(short) << " bytes: " << endl;
    cout << sizeof(int) << " bytes: " << endl;
    cout << sizeof(long) << " bytes: " << endl;
    cout << sizeof(long long) << " bytes: " << endl;
    cout << sizeof(double) << " bytes: " << endl;

    return 0;

}