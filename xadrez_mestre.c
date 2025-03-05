#include <stdio.h>

//Recursivo para torre
void moverTorre(int y, int casas){
    if(casas == 0){
        return;
    }
    if(y < 7){
    printf("Direita\n");
    moverTorre(y + 1, casas - 1);
    }
}   

//Recursivo para bispo com loop aninhado
void moverBispo(int x, int y, int casas){
    if(casas == 0){
        return;
    }
    for(int i =0; i < casas; i++){
    if(x - i >=0 && y + i < 5){
        printf("Direita\n");
        printf("Baixo\n");
        }
    }

    moverBispo(x,y, casas - 1);

}

//Recursivo para rainha
void moverRainha(int casas){
    for(int i = 0; i < casas; i++){
       printf("Esquerda\n"); 
    }   
} 

//Recrusivo para Cavalo com loop aninhado
void moverCavalo(int x, int y){
    for(int i = 0; i < 2; i++){
        printf("Baixo\n");
    }
    for(int j = 0; j < 1; j++){
        printf("Esquerda\n");
    }
}

int main(){
    //Posição inicial
    int y = 4, x = 4;

    //Mover torre
    printf("Movimento da Torre:\n");
    moverTorre(y,5);
    printf("\n");
    
    //Mover Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(x,y,5);
    printf("\n");

    //Mover Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    //Mover Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo(x,y);
    printf("\n");

    return 0;
}