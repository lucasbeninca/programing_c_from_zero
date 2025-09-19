#include <cstdio>

int main(){
    double valor_final_venda = 0;
    double preco = 100.0;
    double imposto = 10;

    valor_final_venda = preco - (preco * (imposto * 0.01))  ;

    printf("%.2f\n", valor_final_venda);
    return 0;
}

