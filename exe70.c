#include <stdio.h>
/* 7.0 Crie uma struct chamada fraction que representa uma fração. Você pode escolher entre
duas alternativas:
(a) Apenas com numerador e denominador.
(b) Com numerador, denominador e sinal da fração.
Depois de escolher como quer fazer sua struct, dena também as funções que operam sobre
ela:
(a) struct fraction mult(struct fraction a, struct fraction b);
(b) struct fraction add(struct fraction a, struct fraction b);
(c) struct fraction reduce(struct fraction a);
O funcionamento das duas primeiras funções deve ser evidente. A terceira função recebe
uma fração e a reduz até que numerador e denominador não tenham divisores em comum.
(Para isso, você deve achar útil ter feito o exercício 3.15). Depois de programar as três
funções, teste-as e tenha certeza de que elas funcionam corretamente. Existe alguma diferença
signicativa em guardar-se o sinal separadamente ou isso não tem importância? */

//http://clubes.obmep.org.br/blog/sala-de-estudos-algoritmo-de-euclides-para-determinacao-de-mdc/diagramas/ 



struct fraction{
int num, den;

};

float  mult(struct fraction *a, struct fraction *b){
    float A,B,A1,B1;
    A=a->den;
    A1=a->num;
    B=b->den;
    B1=b->num;

    return  (A1/A)*(B1/B);

}

float add(struct fraction *a, struct fraction *b){
    float A,B,A1,B1;
    A=a->den;
    A1=a->num;
    B=b->den;
    B1=b->num;

    return (A1/A)+(B1/B);
}


void reduce(struct fraction *a){
//Fazer MDC
int temp, orNUM, orDEN;
orNUM = a->num;
orDEN = a->den;
while(a->den != 0){
    temp = a->num;
    a->num = a->den;
    a->den = temp % a->den;
    
    
}
int div = a->num;

a->num = orNUM / div;
a->den = orDEN / div;

}

int main(void){
struct fraction a, b;
a.num=1320;
a.den=35;
b.num=15;
b.den=40;
printf("%f\n",mult(&a,&b));
printf("%f\n",add(&a,&b));

reduce(&a);

printf("Num: %d Den: %d \n",a.num,a.den);
}
