/*7.3 Planeje registros para armazenar os dados de ligações telefônicas e os dados de usuários de
telefones. Depois faça o algoritmo para listar todas as chamadas feitas por um usuário em
um mês de uso do telefone. Não esqueça de justicar quaisquer decisões importantes que
você tenha tomado ao planejar os registros.*/
#include <stdio.h>

struct duracao{
 int horas, minutos, segundos;

};

struct hora
{
    int hora,minuto;
};


struct chamada //Uma chamada ira ter duração de quanto tempo durou, que horas ligaram, o num da ligação e o nome do usuario que estou pegando as informaçôes 
{
   struct duracao D; 
   struct hora H;
   int  NumLigacao;
   char usuario[10];
};

void imprimedados(struct chamada Chamad){
// %s Imprime uma serie de characters
printf("Usuario: %s\n",Chamad.usuario);
printf("Ligacao Numero: %d\n",Chamad.NumLigacao);
printf("Hora: %d:%d\n",Chamad.H.hora,Chamad.H.minuto);
printf("Duracao: %d:%d:%d \n",Chamad.D.horas,Chamad.D.minutos,Chamad.D.segundos);

}


void recebedados(struct chamada Chamad){
scanf("%s",&Chamad.usuario);
scanf(" %d",&Chamad.NumLigacao);
scanf("%d %d",&Chamad.H.hora,&Chamad.H.minuto);
scanf("%d %d %d",&Chamad.D.horas,&Chamad.D.minutos,&Chamad.D.segundos);



}


void main(){

    struct chamada c = {2,20,50,14,10,1,"Joao"};
    struct chamada d[2];
    imprimedados(c);
    //Tenho que usar ponteiros, Todo o processo so esta ocorrendo dentro da função e não fora dela por isso os dados estão corrompidos
    for(int i=0;i<=1;i++){
        recebedados(d[i]);

    }

    for(int j=0;j<=1;j++){
        imprimedados(d[j]);

    }

}
