#include <stdio.h>


unsigned long long factorial(unsigned long long input);
void imprimirEspacios(unsigned long long input);
void imprimirPiso(unsigned long long n);

int main(void){
    unsigned long long n = 0;

    printf(" ---------------------------\n");
    printf("|    Triangulo de pascal    |\n");
    printf(" ---------------------------\n\n");
    printf("Cuantos pisos deseas imprimir ?: ");
    scanf("%llu",&n);

    for(unsigned long long k = 0; k <=n; k++){
        imprimirEspacios(n -k);
        imprimirPiso(k);
    }



    return 0;
}

unsigned long long factorial(unsigned long long input){
    unsigned long long resultado = 1;
    for(unsigned long long i=1; i <=input; i++){
       resultado *= i; 
    }

    return resultado;
}

void imprimirEspacios(unsigned long long input){
    for(unsigned long long i = 0; i <= input; i++) printf(" ");
    return;
}

void imprimirPiso(unsigned long long n){
    unsigned long long k = 0;
    unsigned long long factorialK = 0;
    unsigned long long factorialNMenosK = 0;
    unsigned long long resultado = 0;
    unsigned long long factorialN = factorial(n);

    for(k = 0; k <= n; k++){
        factorialK = factorial(k);
        factorialNMenosK = factorial(n - k);
        resultado = factorialN / (factorialK * factorialNMenosK);
        printf("%llu ", resultado);
    } 
    
    printf("\n");
    return;
}
