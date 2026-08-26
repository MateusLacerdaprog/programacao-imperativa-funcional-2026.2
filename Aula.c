#include <stdio.h>
#include <stdlib.h>
int main(){

    float tempC, tempF;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &tempF);
    tempC = (tempF - 32) * 5/9;
    printf("A temperatura em Celsius é: %.2f\n", tempC);
    system("pause");        
    return 0;
}