/*7.2 Apresente uma struct para guardar uma data (dia, mês, ano). Depois apresente uma função
que recebe duas datas e imprime a data mais antiga.*/
#include <stdio.h>

struct data{
    int dia, mes, ano;

};
//Começar recebendo duas structs depois mudar para receber uma só e por ponteiros e arrumar o esquema dos IF's para ficar mais dinamico 
void DataAntiga(struct data b, struct data c){
    if(b.ano<c.ano){
        printf("A Data %d/%d/%d é mais antiga\n",b.dia,b.mes,b.ano);
    }
    else{
            if(b.mes<c.mes){
                 printf("A data: %d/%d/%d e mais antiga\n",b.dia,b.mes,b.ano);

            }
            else{
                if(b.dia<c.dia){
                    printf("A data: %d/%d/%d e mais antiga\n",b.dia,b.mes,b.ano);
                }
                else{
                printf("A data: %d/%d/%d e mais antiga\n",c.dia,c.mes,c.ano);
                }

            }
        }
    if(b.ano==c.ano && b.mes==c.mes && b.dia == c.dia) printf("As Datas são iguais\n");

}




int main(){
    
    struct data d={11,12,2017};
    struct data a={11,12,2017};
    printf("%d/%d/%d\n",d.dia,d.mes,d.ano);
    DataAntiga(d,a);

}