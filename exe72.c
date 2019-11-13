/*7.2 Apresente uma struct para guardar uma data (dia, mês, ano). Depois apresente uma função
que recebe duas datas e imprime a data mais antiga.*/
#include <stdio.h>

struct data{
    int dia, mes, ano;

};
//Começar recebendo duas structs depois mudar para receber uma só e por ponteiros e arrumar o esquema dos IF's 
void DataAntiga(struct data b, struct data c){
    if(b.ano<c.ano){
        if(b.mes<c.mes){
            if(b.dia<c.dia) printf("A data: %d/%d/%d\n é mais antiga",b.dia,b.mes,b.ano);
            else printf("A data: %d/%d/%d\n é mais antiga",c.dia,c.mes,c.ano);
        }
        else{
             printf("A data: %d/%d/%d\n é mais antiga",c.dia,c.mes,c.ano);
             }
    }
    else{
             printf("A data: %d/%d/%d\n é mais antiga",c.dia,c.mes,c.ano);
        }


}



int main(){
    
    


}