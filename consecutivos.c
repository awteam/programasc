#include <stdio.h>


int main(){
int N;
scanf("%d",&N);

int V[N+1];
int count;
int counta;
count=0;
counta=0;
for(int i=0; i<N; i++) scanf("%d",&V[i]);

for(int a=0; a<N; a++){
if(a == 0){
count++;
continue;
}

if((V[a] == V[a-1]))
{
count++;
} else {
if(count > counta) counta=count;
count=1;
}

if(a == N-1){
if(count > counta) counta=count;
}

}

printf("%d",counta);
}
