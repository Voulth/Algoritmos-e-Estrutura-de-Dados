/*7.4 Crie um registro que representa os dados de um terreno de forma retangular. Depois de
escolher como representar o terreno, declare um vetor de 100 terrenos e apresente algoritmos
para:
(a) Listar os terrenos que são quadrados. OK
(b) Encontrar o terreno de maior perímetro.
(c) Encontrar o terreno que mais se assemelha a um quadrado. +- Pronto
(d) Encontrar o terreno que menos se assemelha a um quadrado.
*/
#include <stdio.h>
#include <stdlib.h>

int peri=0, bas=0, alt=0, identificador=0;//Variaveis não locais, para trabalhar com o calculo do Perimetro

struct terreno{//Terreno tem base e altura e angulos internos
int base, altura, angulo, IDT;//Caracteristicas do Terreno + o seu numero identificador 

};

int perimetro(struct terreno *t){//Calculo do Perimetro do Terreno
    int *per;//Ponteiro que ira apontar o local do perimetro salvo
    *per = 2*(t->base+t->altura);//Calcula perimetro
    if(*per>=peri){ //Associa o maior perimetro a variavel global peri 
        peri = *per;
        return 1;
    }
    return 0;
}

void pegaTerreno(struct terreno *t){//Função para receber terrenos, usa ponteiro para permitir o envio de seus dados para fora dela 
printf("Insira as caracteristicas de um terreno em metros: Altura, Base, angulo e numero do terreno\n");
scanf("%d %d %d %d",&t->altura,&t->base, &t->angulo, &t->IDT);
}

int TerrenoQuadeRet(struct terreno *t){//Função para ver se um Terreno é quadrado ou retangulo
    if(t->altura == t->base && t->angulo == 90){//Testa se é um quadrado
         printf("O Terrono  de numero %d é quadrado\n",t->IDT);// Printa o identificador do terrno
         if(perimetro(t)==1){// Se já disse que a função iria receber um ponteiro eu não preciso dizer que ela é um ponteiro de novo 
         //Associa os valores do meu terreno atual para as variaveis globais para serem realizados os testes 
             bas = t->base;
             alt = t->altura;
             identificador = t->IDT;
            }
         return 2;//Isso é usado para formar o vetor de lista dos terrenos quadrados 
         }
    if(t->altura != t->base && t->angulo == 90){
         printf("O Terrono  de numero %d é retangulo\n",t->IDT);
         if(perimetro(t)==1){// Se já disse que a função iria receber um ponteiro eu não preciso dizer que ela é um ponteiro de novo 
         //Associa os valores do meu terreno atual para as variaveis globais para serem realizados os testes
             bas = t->base;
             alt = t->altura;
             identificador = t->IDT;
            }
         return 3;//Isso é usado para formar o vetor de lista dos terrenos retangulares
         }
   return 0;
}

void VetTe(int *tam){//Função que faz as operações que quero com o Vetor
struct terreno t[*tam];

for(int i=0;i<=*tam;i++){
    pegaTerreno(&t[i]);
    }
for(int j=0;j<=*tam;j++){
    TerrenoQuadeRet(&t[j]);
    }

printf("Terreno %d Base: %d Altura: %d Maior Perimetro: %d\n",identificador,bas,alt,peri);

}



void main()
{
int *tamanho;
printf("Insira o Tamanho de quantos terrenos tem de ter no vetor \n");
scanf("%d",tamanho);

VetTe(tamanho);
/*for(int j=0;j<=4;j++){
    TerrenoQuadeRet(&t[j]); 
    //if(TerrenoQuadeRet(&t[j])==2) quad++;
    //if(TerrenoQuadeRet(&t[j])==3) ret++;
    }


int *x, *y;
x = (int*)malloc(quad * sizeof(int));
y = (int*)malloc(ret * sizeof(int));
struct terreno VeTQ[*x], VetR[*y];    


for(int j=0;j<=4;j++){
    TerrenoQuadeRet(&t[j]); 
    if(TerrenoQuadeRet(&t[j])==2) VeTQ[j];
    if(TerrenoQuadeRet(&t[j])==3) ret++;
    }


printf("%d",VeTQ[0].);
printf("Terreno %d Base: %d Altura: %d Maior Perimetro: %d\n",identificador,bas,alt,peri);*/

}