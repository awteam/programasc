#include <stdio.h>


float maior(float n1, float n2, float n3, float n4, float n5){
float omaior;

omaior=n1;
if(omaior<n2) omaior=n2;
if(omaior<n3) omaior=n3;
if(omaior<n4) omaior=n4;
if(omaior<n5) omaior=n5;
}

float menor(float n1, float n2, float n3, float n4, float n5){
float omenor;

omenor=n1;
if(omenor>n2) omenor=n2;
if(omenor>n3) omenor=n3;
if(omenor>n4) omenor=n4;
if(omenor>n5) omenor=n5;
}


main(){
float N[5];
scanf("%f %f %f %f %f",&N[0], &N[1],&N[2], &N[3],&N[4]);

for(int i=0; i<5; i++) if(N[i] < 5 || N[i] > 10) return 0; 

float maiorr;
maiorr=maior(N[0],N[1],N[2],N[3],N[4]);
float menorr;
menorr=menor(N[0],N[1],N[2],N[3],N[4]);


float soma;

int fmaior,fmenor;
for(int a=0;a<5;a++){
if(N[a]==maiorr && fmaior != 1) {
fmaior=1;
continue;
}

if(N[a]==menorr && fmenor != 1) {
fmenor=1;
continue;
}

soma=soma+N[a];


}

printf("%.1f",soma);




}
