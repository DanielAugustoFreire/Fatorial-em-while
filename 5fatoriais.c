#include <stdio.h>
/*A função fatorial é usada com freqüência em problemas de probabilidade.
O fatorial de um número positivo n (escrito n! e pronunciado "fatorial de n")
é igual ao produto dos inteiros positivos de 1 a n. Escreva um programa que calcule
os fatoriais dos inteiros de 1 a 5. Imprima o resultado no formato de uma tabela.
Que problema pode evitar que você possa calcular o fatorial de 20?*/
//R: colocar fatN como double evita estourar o escopo do int
main (){
    int i, j=5;
    double fatN=1;


    for(i=1;i<=j;i++){
        fatN*=i;
        printf("Fatorial de %d \t%.f\n",i, fatN);
    }
}
