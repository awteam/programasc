#include<stdio.h>

int main()
{
int a,nb,c,b,k,l,m;
int bin[32];

printf("Digite o numero na base 10(maximo 5 algarismos):");
scanf("%d",&nb);

printf("\nVoce digitou o numero:%d\n",nb);

for (c=0;c<=32;c++)
{
  a=nb%2;
	nb=nb/2;
	
    if (nb==1)
    {
    l=c+1;
    m=l+1;
    bin[c]=a;
    bin[l]=nb;
    bin[m]='\0';
    break;
    }	
       
    if (nb>1)
	{
    bin[c]=a;	
    }
}
printf("\nCorrespondente em binario:");
	for(k=l;k>=0;k--)
	printf("%d",bin[k]); 
printf("\n");
system("pause");
return 0;
}
