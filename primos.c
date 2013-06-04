#include <stdio.h>

int verificaprimo(int numero){

int somadivisores=0;
int divisor=2;
int neprimo=0;
while(divisor < numero){
if(numero%divisor == 0) neprimo=1;
divisor++;
if(neprimo == 1) divisor=numero;
}
if(neprimo==0) printf("%d\n",numero);
if(neprimo==0) return 1;
return 0;
}


main(){

int count=0;
for(int n=5000; n<7000; n++){
if(verificaprimo(n) == 1) count++;


}
printf("%d números primos encontrados!!!\n",count);
return 0;
}
