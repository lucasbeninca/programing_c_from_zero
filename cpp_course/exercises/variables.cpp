#include <cstdio>

int main(){
    double valor_final_venda = 0;
    const double price = 100.0;
    const double tax = 10;

    valor_final_venda = price - (price * (tax * 0.01))  ;

    printf("Valor final da venda %.4f\n", valor_final_venda);
    return 0;
}

