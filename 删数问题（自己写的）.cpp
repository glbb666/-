#include <stdio.h>
#include <string.h>
#define M 100
int main(void){
	int n,length;
	//输入要删的数的个数 
	char arr[M]; 
	scanf("%d",&n);
	scanf("%s",arr);
	length = strlen(arr);
	if(n == 0){
		return 0;
	}else if(n>=length){
		return 0;
	}else{
		int i = 0;//记录下标，看看有没有走到最后 
		int num = 0;//记录删数的个数 
		int newLength = length; 
		while(i<newLength&&num<=n){
			//从头开始找 
			//如果产生了逆序
			if(arr[i]>arr[i+1]){
				num++;
				//把数字往前移 
				for(int j = i;j<newLength;j++){
					arr[j] = arr[j+1];
				}
				//把长度减减 
				for(int j = 0;j<newLength;j++){
					printf("%c",arr[j]);
				}
				printf("\n");
				newLength--;
				i=-1;
			}
			i++;
		}
	}
//	printf("%d %d %d\n",length,n,length-n);
	for(int i = 0;i<length-n;i++){
		printf("%c",arr[i]);
	}
	return 0;
}
