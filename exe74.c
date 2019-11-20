/*7.4 Crie um registro que representa os dados de um terreno de forma retangular. Depois de
escolher como representar o terreno, declare um vetor de 100 terrenos e apresente algoritmos
para:
(a) Listar os terrenos que são quadrados. OK
(b) Encontrar o terreno de maior perímetro.
(c) Encontrar o terreno que mais se assemelha a um quadrado. +- Pronto
(d) Encontrar o terreno que menos se assemelha a um quadrado.
*/
#include <stdio.h>

int *peri = 0;

struct terreno{//Terreno tem base e altura e angulos internos
int base, altura, angulo;

};

int perimetro(struct terreno *t){
    int per;
    per = 2*(t->base+t->altura);
    if(per>=*peri) *peri = per;

    return 0;
}

void pegaTerreno(struct terreno *t){
printf("Insira as caracteristicas de um terreno em metros: Altura, Base e angulo\n");
scanf("%d %d %d",&t->altura,&t->base, &t->angulo);
}

int TerrenoQuadeRet(struct terreno *t){
    if(t->altura == t->base && t->angulo == 90){
         printf("%d  %d  %d é quadrado\n",t->altura,t->base, t->angulo);
         perimetro(t);// Se já disse que a função iria receber um ponteiro eu não preciso dizer que ela é um ponteiro de novo 
         }
    if(t->altura != t->base && t->angulo == 90){
         printf("%d  %d  %d é um retangulo\n",t->altura,t->base, t->angulo);
         perimetro(t);// Se já disse que a função iria receber um ponteiro eu não preciso dizer que ela é um ponteiro de novo 
         }
   return 0;
}



void main(){

struct terreno t[5];

for(int i=0;i<=4;i++){
    pegaTerreno(&t[i]);
}

for(int j=0;j<=4;j++){
    TerrenoQuadeRet(&t[j]); 
}


printf("%ls",peri);

}