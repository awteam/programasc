#include <stdio.h>
#include <math.h>
main(){
int entrada;
printf("Digite um número: ");
scanf("%d",&entrada);

int divisao;
divisao=1;
int potencia;
potencia=0;
float nentrada;
nentrada=entrada;
while(divisao >= 1){
divisao = entrada/pow(10,potencia);
if(divisao >=1) potencia++;
}
potencia--;


int caracter[potencia*2];
int i;
int proximonumero;
proximonumero=entrada;
int soma;
for(i=0;i<=potencia;i++){
int pt;
pt=pow(10,potencia-i);
int resto;
resto=proximonumero%pt;
int numeromenosresto;
numeromenosresto=proximonumero-resto;

caracter[i]=numeromenosresto/pt;
proximonumero=proximonumero-(caracter[i]*pt);

printf("Caracter %d: %d\n",i,caracter[i]);
soma = soma+caracter[i];
}



printf("Resultado: %d\n",soma);


}
