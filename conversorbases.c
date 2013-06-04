#include <stdio.h>
#include <math.h>

//Programa desenvolvido por: Gabriel Dutra

main(){
int valordecimal;
int base;

Perguntas:{
printf("Digite o valor decimal: ");
scanf("%d",&valordecimal);

printf("Digite a base: ");
scanf("%d",&base);

}

if(base > 9 || base < 2){
printf("Base entre 2 e 9 !!!!");
goto Perguntas;

}



int valoraa=valordecimal;
int n=0;
int binario=0;
while(valoraa != 0){
int quadrado=pow(10,n);
binario=binario+((valoraa%base)*quadrado);
valoraa=(valoraa-(valoraa%base))/base;
n=n+1;
}

printf("Valor decimal: %d, Valor na base %d: %d\n",valordecimal, base, binario);
}
