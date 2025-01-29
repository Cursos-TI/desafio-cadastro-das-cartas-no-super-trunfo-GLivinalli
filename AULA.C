#include <stdio.h>

int main(){
    int nota1, nota2, nota3;
    int media;

    printf("*** Progama de Cálculo de Média ***\n");
    printf("Insira a Primeira nota: \n");
    scanf("%d", &nota1);

    printf("Insira a Segunda nota: \n");
    scanf("%d", &nota2);

    nota3 = nota1 / nota2;
    
    printf("A Média é de: %d", nota3)
    return 0;
}
// mensagem do primeiro dado
// receber o primeiro dado
// mensagem do segundo dado
// recever o segundo dado
// fazer a media
// mostrar a media