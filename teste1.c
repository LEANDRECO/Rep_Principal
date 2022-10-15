#include <stdio.h>

void main(){
    int n;
    printf("Digite um número maioir que 7:");
    scanf("%d", &n);
    if(n>7){
        printf("%d é maior do que 7.", n);
    }
    else{
        printf("Eu disse um maior que 7!!!");
    }
}