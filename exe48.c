#include <stdio.h>

int rev(int r){
/*Dividir e usar o resto para separar os numeros e para cada valor da divisão associar um valor que irá multiplicar a divisão e somar para formar o novo inteiroo*/
int resto, conta=1, nInt=0, div=r;
while(1){
    resto= div % 10;
    div = div / 10;
    //printf("Conta: %d\n", conta);
    if(div <= 0) break;
    conta=conta*10;

}
div = r;

while(1){
 resto= div % 10;
 div = div / 10;
//printf("Nint: %d\n",nInt);
nInt= nInt + (resto * conta);
//printf("Resto: %d\n",resto);
//printf("%d\n", nInt);
conta=conta/10;
if(div <= 0) break;
}

    return printf("%d\n",nInt);
};


int main(){
    int num;
    printf("Insira um numero: \n");
    scanf("%d", &num);
    rev(num);

}