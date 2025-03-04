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

    //Moiemnto do Cavalo
    //Número de casas a serem movidas
    int casasBaixo = 2, casaEsquerda = 1;

    printf("Movimento do Cavalo:\n");

    //Loop for para movimento do cavalo para baixo
    for (int i = 0; i < casasBaixo; i++){
        printf("Baixo\n");
    }

    //Loop while para movimento para esquerda
    int j = 0;
    while (j < casaEsquerda){
        printf("Esquerda\n");
        j++;
    }

    return 0;
}