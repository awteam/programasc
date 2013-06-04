#include <stdio.h>


main(){
int L;
scanf("%d",&L);
int N[L+1][L+1];
int nequadrado;
nequadrado=0;
// N[linha][coluna]
for(int l=0; l<L; l++){
for(int c=0; c<L;c++) scanf("%d",&N[l][c]);
}

int soma;

for(int l=0; l<L; l++){
int somat;
somat=0;
for(int c=0; c<L; c++){
somat=somat+N[l][c];
}
if(l==0) soma=somat;
if(somat != soma) nequadrado=1;
}

for(int c=0; c<L; c++){
int somat;
somat=0;
for(int l=0; l<L; l++){
somat=somat+N[l][c];
}
if(somat != soma) nequadrado=1;
}

int somad;
somad=0;
for(int n=0; n<L; n++){
somad=somad+N[n][n];
}
if(somad != soma) nequadrado=1;

somad=0;
for(int n=0; n<L; n++){
somad=somad+N[n][(L-1)-n];
}
if(somad != soma) nequadrado=1;

if(nequadrado == 1){
printf("-1");
} else printf("%d",soma);

}
