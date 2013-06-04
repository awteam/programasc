#include <stdio.h>
#include <string.h>
main(){
int numero;
char romano[100];
printf("Digite um número: ");
scanf("%d",&numero);

int n = numero;

n=numero;
while(n >= 1000){
n = n-1000;
strcat(romano,"M");
}
while(n >= 900){
n = n-900;
strcat(romano,"CM");
}
while(n >= 500){
n = n-500;
strcat(romano,"D");
}
while(n >= 500){
n = n-500;
strcat(romano,"D");
}
while(n >= 400){
n = n-400;
strcat(romano,"CD");
}
while(n >= 100){
n = n-100;
strcat(romano,"C");
}
while(n >= 90){
n = n-90;
strcat(romano,"XC");
}
while(n >= 50){
n = n-50;
strcat(romano,"L");
}
while(n >= 40){
n = n-40;
strcat(romano,"XL");
}
while(n >= 10){
n = n-10;
strcat(romano,"X");
}
while(n >= 9){
n = n-9;
strcat(romano,"IX");
}
while(n >= 5){
n = n-5;
strcat(romano,"V");
}
while(n >= 1){
n = n-1;
strcat(romano,"I");
}

printf("%d em romano: %s\n",numero,romano);

}
