#include <stdio.h>


main(){
int C,N;
scanf("%d %d",&C,&N);

if((C >= 1 && C <= 100000000) && (N >= 1 && N <= 100 )){
printf("%d",C%N);
}
}
