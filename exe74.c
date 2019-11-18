/*7.4 Crie um registro que representa os dados de um terreno de forma retangular. Depois de
escolher como representar o terreno, declare um vetor de 100 terrenos e apresente algoritmos
para:
(a) Listar os terrenos que são quadrados.
(b) Encontrar o terreno de maior perímetro.
(c) Encontrar o terreno que mais se assemelha a um quadrado.
(d) Encontrar o terreno que menos se assemelha a um quadrado.
*/
#include <stdio.h>



struct terreno{//Terreno tem base e altura e angulos internos
int base, altura;

};

void pegaTerreno(struct terreno *t){
printf("Insira as caracteristicas de um terreno em metros: Altura e Base \n");
scanf("%d %d",&t->altura,&t->base);
}

int TerrenoQuadrado(struct terreno *t){
    if(t->altura == t->base) return 1;

    return 0;
}

void main(){

struct terreno t[5];

for(int i=0;i<=4;i++){
    pegaTerreno(&t[i]);
}

for(int j=0;j<=4;j++){

    if(TerrenoQuadrado(&t[j])==1) printf("%d e %d é quadrado\n",t[j].altura,t[j].base);
}


}