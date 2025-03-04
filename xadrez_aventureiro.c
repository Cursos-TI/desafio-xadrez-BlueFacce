#include <stdio.h>

int main(){

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