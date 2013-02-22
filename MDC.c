#include <stdio.h>

#include <stdlib.h>



int mdc3 (int a, int b, int c)
{

    int n1,n2,n3,r1,r2,r3,count,aux;

    if ((a==0) || (b==0) || (c==0))
    {
        return 0;
    }

    if ((a < b) && (b < c))
    {
        n1=a;
        n2=b;
        n3=c;
        aux=n3;
    }

    else if ((a < c) && (c < b))
    {
        n1=a;
        n2=c;
        n3=b;
        aux=n3;
    }
    
    else if ((c < a) && (a < b))
    {
        n1=c;
        n2=a;
        n3=b;
        aux=n3;
    }
    
    else if ((c < b) && (b < a))
    {
        n1=c;
        n2=b;
        n3=a;
        aux=n3;
    }
        
    else if ((b < c) && (c < a))
    {
        n1=b;
        n2=c;
        n3=a;
        aux=n3;
    }
      
    else if ((b < a) && (a < c))
    {
        n1=b;
        n2=a;
        n3=c;
        aux=n3;
    }

    for (count=aux;count>=1;count--)
    {
        r1=n1%count;
        r2=n2%count;
        r3=n3%count;

        if ((r1==0) && (r2==0) && (r3==0))
        {
            return count;
        }
    }
}

int main()
{
    int a,b,c;
    printf("Digite o 1 numero: ");
    scanf("%d",&a);
    printf("Digite o 2 numero: ");
    scanf("%d",&b);
    printf("Digite o 3 numero: ");
    scanf("%d",&c);
    printf("\nMDC de %d,%d e %d >> %d\n\n",a,b,c,mdc3(a,b,c));
    return 0;
}
