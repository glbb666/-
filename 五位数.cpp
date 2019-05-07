#include <stdio.h>
int main(void){
	int K,m,n;
	int num = 0;
	scanf("%d %d %d",&K,&m,&n);
	for(int i = m;i<=n;i++){
		int sub1 = i / 100;
		int sub2 = (i-10000*(i/10000))/10;
		int sub3 = (i-1000*(i/1000));
		if(sub1%15==0&&sub2%15==0&&sub3%15==0){
			num++;
			printf("%d\n",i);
		}
	}
	if(num == 0){
		printf("No"); 
	}
	return 0;
} 
