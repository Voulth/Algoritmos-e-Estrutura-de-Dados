/*7.4 Crie um registro que representa os dados de um terreno de forma retangular. Depois de
escolher como representar o terreno, declare um vetor de 100 terrenos e apresente algoritmos
para:
(a) Listar os terrenos que são quadrados. OK
(b) Encontrar o terreno de maior perímetro. OK
(c) Encontrar o terreno que mais se assemelha a um quadrado. Ok
(d) Encontrar o terreno que menos se assemelha a um quadrado. Ok 
*/
#include <stdio.h>
#include <stdlib.h>

int peri=0, bas=0, alt=0, identificador=0;//Variaveis não locais, para trabalhar com o calculo do Perimetro
int quad=0, retan=0;
int menQ=0, maiQ=1000000,idMa,idMe;
struct terreno{//Terreno tem base e altura e angulos internos
int base, altura, angulo, IDT;//Caracteristicas do Terreno + o seu numero identificador 

};

int perimetro(struct terreno *t){//Calculo do Perimetro do Terreno
    int per=0;//Ponteiro que ira apontar o local do perimetro salvo
    per = 2*(t->base+t->altura);//Calcula perimetro
    if(per>=peri){ //Associa o maior perimetro a variavel global peri 
        peri = per;
        
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
         printf("O Terreno  de numero %d e quadrado\n",t->IDT);// Printa o identificador do terrno
         quad++;
         
         if(perimetro(t)==1){// Se já disse que a função iria receber um ponteiro eu não preciso dizer que ela é um ponteiro de novo 
         //Associa os valores do meu terreno atual para as variaveis globais para serem realizados os testes 
             bas = t->base;
             alt = t->altura;
             identificador = t->IDT;
            }
         return 1;
         }
    if(t->altura != t->base && t->angulo == 90){
         printf("O Terreno  de numero %d e retangulo\n",t->IDT);
         retan++;
         
         if(perimetro(t)==1){// Se já disse que a função iria receber um ponteiro eu não preciso dizer que ela é um ponteiro de novo 
         //Associa os valores do meu terreno atual para as variaveis globais para serem realizados os testes
             bas = t->base;
             alt = t->altura;
             identificador = t->IDT;
            }
         return 2;
         }
   //return 0;
}

int Ret_Quad(struct terreno t){
if(t.altura == t.base && t.angulo == 90){
    return 1;
    }
    else{
        return 0;
    }
}

void maisQ(struct terreno *t){
 //Função que ira receber um vetor struct de quadrados e ver quais mais se assemelham a um e menos se assemelham a um
int dif=0;
dif=t->base-t->altura;
//Checo para ver se se aproxima de um quadrado ideal 1x1
if(dif==0){
    
    if((t->base-1)<=maiQ){
        maiQ=t->base-1;
        idMa=t->IDT;

    }

    if((t->base-1)>=menQ){
        
        menQ=t->base-1;
        idMa=t->IDT;

    }
}
if(dif!=0)printf("O Terreno não é quadrado");


}


void main()
{
int tamanho;
printf("Insira o Tamanho de quantos terrenos tem de ter no vetor \n");
scanf("%d",&tamanho);
struct terreno t[tamanho];


for(int i=0;i<tamanho;i++){
    pegaTerreno(&t[i]);
    }
for(int j=0;j<tamanho;j++){
    
    TerrenoQuadeRet(&t[j]);
    
    
    }

struct terreno *q = malloc(quad*sizeof(q));

int NQ=0;
for (int k=0;k<tamanho;k++){
    if(Ret_Quad(t[k])==1){
        q[k-NQ]=t[k];
        printf("KQ:%d\n",t[k].IDT);
    
        printf("Valor de Q: %d\n",q[k].IDT);
    }
    if(Ret_Quad(t[k])==0){
        NQ++;
    }
    
}


for(int l=0;l<quad;l++){

    printf("Q:%d\n",q[l].IDT);
    
}

for(int l=0;l<quad;l++){

    maisQ(&q[l]);
    
}



printf("Terreno %d Base: %d Altura: %d Maior Perimetro: %d\n",identificador,bas,alt,peri);
printf("Mais Quadrado: %d Menos Quadrado: %d",idMa,idMe);

free(q);
}

