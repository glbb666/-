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
		//new Length-1是为了防止和'\0'交换产生逆序
		while(i<newLength-1&&num<=n){
			//从头开始找 
			//如果产生了逆序
			if(arr[i]>arr[i+1]){
				num++;
				//把数字往前移 
				for(int j = i;j<newLength;j++){
					arr[j] = arr[j+1];
				}
				//把长度减减 
				newLength--;
				i=-1;
			}
			i++;
		}
	}
	for(int i = 0;i<length-n;i++){
		printf("%c",arr[i]);
	}
	return 0;
}
