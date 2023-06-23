#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float gramas;
    int segundos= 0 ;
    printf("A cada 50 segundos, o elemento perde meia vida!\n");

    printf("Digite um valor para massa em kg: ");
    scanf("%f",&gramas);

    while(gramas >= 0.05){

        gramas= gramas * 0.5;
        printf("%.2f\n",gramas);
        segundos = segundos + 50;
    }
    printf("O tempo total em segundos é de %d", segundos);


    return 0;
}
