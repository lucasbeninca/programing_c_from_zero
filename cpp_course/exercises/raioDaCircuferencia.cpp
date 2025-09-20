#include <iostream>
using namespace std;

int main (){
    const double valorDePi = 3.14159;
    double raio = 0;
    double area = 0;

    cout << "Digite o Raio da circuferencia: ";
    cin >> raio;

    area = raio * raio * valorDePi;
    printf("O valor da area é %.5f:", area);



}