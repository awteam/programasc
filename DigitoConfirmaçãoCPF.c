#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int cpf[10];
int s1,s2,sum1=0,sum2=0,j=10,k=11,l,m,count,count2;
system("clear");
printf("==================================================\n");
printf(" Gerador de dígitos verificadores de CPF\n\n" );
TOP: {
j=10;
k=11;
sum1=0;
sum2=0;
printf("\nDigite o CPF para calcular o dígito de verificação. Digite um numero negativo para sair.\n");
for(count=0;count<9;count++) {
printf("Digite o %d dígito do CPF: ",count+1);
scanf("%d",&cpf[count]);
if(cpf[count]<0) {
goto END;
}
}
for(s1=0;s1<=8;s1++,j--) {
sum1=sum1+(cpf[s1]*j);
}

l=sum1%11;

if(l<2) {
cpf[9]=0;
}
else {
cpf[9]=11-l;
}
for(s2=0;s2<=9;s2++,k--) {
sum2=sum2+(cpf[s2]*k);
}
m=sum2%11;

if(m<2) {
cpf[10]=0;
}
else {
cpf[10]=11-m;
}

printf("\n%d\t%d",sum1,sum2);
printf("\n%d\t%d",l,m);

printf("\nO CPF com seus dígitos verificadores eh: ");
for(count2=0;count2<=8;count2++) {
printf("%d",cpf[count2]);
}
printf("-%d%d\n",cpf[9],cpf[10]);
goto TOP;
}
END: {
printf("\n\n  Software made by: Pedro Otávio \n");
printf("==================================================\n");
}
}
