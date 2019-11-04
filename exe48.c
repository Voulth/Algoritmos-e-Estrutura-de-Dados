#include <stdio.h>

int rev(int r){
/*Dividir e usar o resto para separar os numeros e para cada valor da divisão associar um valor que irá multiplicar a divisão e somar para formar o novo inteiroo*/
int resto=r, conta=1, nInt;
while(1){
    resto= r%10;
    conta++;
    if(resto == 0) break;
}
resto = r;

while(1){
resto= resto % 10;
nInt= resto * conta;
conta--;
if(resto == 0) break;
}

    return printf("%d",nInt);
};


int main(){
    int num;
    printf("Insira um numero: \n");
    scanf("%d", &num);
    rev(num);

}