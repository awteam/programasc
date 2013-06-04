#include <stdio.h>

int verificaperfeito(int numero){

int somadivisores=0;
int divisor=1;
while(divisor < numero){
if(numero%divisor == 0) somadivisores=somadivisores+divisor;
divisor++;
}
if(numero==somadivisores) printf("%d\n",numero);
return 0;
}


main(){


for(int n=1; n<1000; n++){
verificaperfeito(n);


}
return 0;
}
