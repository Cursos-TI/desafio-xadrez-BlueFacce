#include <stdio.h>

int main(){
    //Movimento da torre
    printf("Movimento da Torre:\n");
    for(int i = 0; i < 5;i++){
        printf("Direita\n");
    }

    //Movimento do bispo
    printf("Movimento do Bispo:\n");
    int casas_bispo = 5;
    while (casas_bispo > 0){
        printf("Cima\n");
        printf("Direita\n");
        casas_bispo--;
    }

    //Movimento da rainha
    printf("Movimento da Rainha:\n");
    int casas_rainha = 8;
    do{
        printf("Esquerda\n");
        casas_rainha--;
    } while (casas_rainha > 0);

    return 0;
}