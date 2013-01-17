#include <stdio.h>
#include <math.h>
int main(){

    int valora=0,valorb=0,valorc=0,deseja=0;
    printf("Digite o valor de a: ");
    scanf("%d", &valora);	
    printf("Digite o valor de b: ");
    scanf("%d", &valorb);
    printf("Digite o valor de c: ");
    scanf("%d", &valorc);	
    printf("Calculando...");
    int delta=valorb*valorb-4*valora*valorc;
    float raizdelta=sqrt(delta);
    printf("O valor de delta é: %d e sua raíz é %f \n",delta,raizdelta);
    printf("Calculando os valores de x...\n");
    int x=(-valorb+raizdelta)/2*valora;
    int xx=(-valorb-raizdelta)/2*valora;
    printf("Os 2 valores de x são %d e %d...\n",x,xx);
    printf("Deseja calcular novamente(0=NAO/1=SIM)? ");
    scanf("%d", &deseja);  
   if(deseja == 1) main();
    printf("\n");	 
}
