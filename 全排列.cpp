#include <stdio.h>
#include <stdlib.h>
#define N 100
void Swap(char *a,char *b){
	char t;
	t = *a;
	*a = *b;
	*b = t;
}
void Perm(char list[],int k,int m)
{
	if(k==m){
		for(int i = 0;i<=m;i++){
			printf("%c",list[i]);
		}
		printf("\n");
	}else{
		for(int i = k;i<=m;i++){
			Swap(&list[k],&list[i]);
			Perm(list,k+1,m);
			Swap(&list[k],&list[i]);
		}
	}
}

int main(void)
{
	char list[N];
	int num = 0;
	int i = 0;
	char ch;
	while((ch = getchar())!='\n'){
		list[i] = ch;
		i++;
	}
    Perm(list,0,i);
}
