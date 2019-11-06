#include <stdio.h>
/*0 Escreva um algoritmo que imprime uma matriz de inteiros de tamanho 15 × 15 em duas
versões:
(a) Toda a matriz é impressa;
(b) Só os elementos diferentes de zero são impressos e os zeros saem como espaços em
branco.*/


int main(){
 int MAT[15][15] = {{3,4,5,6,7,8,7,6,5,4,3,2,1,3,5},{2,3,4,5,6,7,8,7,6,5,4,3,2,23,14}};;
 int tam=sizeof(MAT)/sizeof(MAT[0]);
 //Printa a matriz antes de mudar ela
/*for(int k=0;k<tam;k++){
    for(int f=0;f<tam;f++){
        if(MAT[k][f] != 0) printf("%d\t",MAT[k][f]);
        else printf(" \t");
    }printf("\n");

}*/



//Adiciona valores na matriz que são a soma da linha e da coluna
for(int i=0;i<tam;i++){
    for(int j=0;j<tam;j++){
        MAT[i][j] = i + j;
    }
}

//MAT[1][1]=0;
//Imprime os valores em tabela e ignora os zeros colocando um espço vazio no lugar
for(int k=0;k<tam;k++){
    for(int f=0;f<tam;f++){
        if(MAT[k][f] != 0) printf("%d\t",MAT[k][f]);
        else printf(" \t");
    }printf("\n");

}





}

