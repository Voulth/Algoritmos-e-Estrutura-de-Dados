#include <stdio.h>
//Função que multiplica o A x B
int mistery( int a, int b ) {
int r = 0;
while ( b > 0 ) {
if ( b % 2 ) r += a;
b /= 2;
a *= 2;
}
return r;
}

int main(){

printf("%d\n",mistery(5, 3));



}