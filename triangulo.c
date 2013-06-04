#include <stdio.h>
int IsTriangulo(int a, int b, int c){
int negar=0;
if(a >= b+c) negar=1;
if(b >= a+c) negar=1;
if(c >= a+b) negar=1;
if(a <= modulo(b-c)) negar=1;
if(b <= modulo(a-c)) negar=1;
if(c <= modulo(a-b)) negar=1;

if(negar == 1){
return 0;
} else {

return 1;
}

}

int modulo(int valor){
int resp;
if(valor < 0){
resp = valor*-1;
} else {
resp=valor;
}
return resp;
}

main(){
int medidaX,medidaY,medidaZ;
printf("Diga as 3 medidas do triângulo: ");
scanf("%d %d %d",&medidaX,&medidaY,&medidaZ);

if(IsTriangulo(medidaX,medidaY,medidaZ) == 1){
	if (medidaX == medidaY && medidaX == medidaZ){
	printf("As medidas (%d, %d, %d) formam um triângulo equilátero e isósceles!\n",medidaX,medidaY,medidaZ);
	} else 	if (medidaX == medidaY || medidaX==medidaZ){
	printf("As medidas (%d, %d, %d) formam um triângulo isósceles!\n",medidaX,medidaY,medidaZ);
	} else printf("As medidas (%d, %d, %d) formam um triângulo escaleno!\n",medidaX,medidaY,medidaZ);
} else {
printf("As medidas (%d, %d, %d) não formam um triângulo!\n",medidaX,medidaY,medidaZ);
}


}
