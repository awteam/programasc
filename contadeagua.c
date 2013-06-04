#include <stdio.h>


main(){
int valor;
int N;
scanf("%d",&N);
if(N < 0 || N > 103) return 0;

valor=7;
int Nf;
Nf=N;

if(N > 100){
Nf=N;
Nf=Nf-100;
valor=valor+20;
valor=valor+140;
valor=valor+(3*Nf);
} else if(N > 30){
Nf=N;
Nf=Nf-30;
valor=valor+20;
valor=valor+(2*Nf);
} else if(N > 10){
Nf=N;
Nf=Nf-10;
valor=valor+(1*Nf);
}
printf("%d",valor);
}
 
