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



struct fraction{
float num, den;

};

float  mult(struct fraction *a, struct fraction *b){
    return  (a->num/a->den)*(b->num/b->den);

}

void add(struct fraction a, struct fraction b){


}

void reduce(struct fraction a){


}

int main(void){
struct fraction a, b;
a.num=1;
a.den=2;
b.num=1;
b.den=2;
printf("%f\n",mult(&a,&b));
}
