#include <stdio.h>
#define M 100
/*
 * 思想：
 * 将逆序的前面的值删掉，使得最终的序列尽量为正序有序序列，再在前面挑剩余个数的对应的个数输出，
 * */
int main(void){
	int length = 0;
	int n;
	int arr[M];
	scanf("%d",&n);
	while(length<M){
		scanf("%d",&arr[length]);
		length++;
	}
	if(n == 0) {
		for(int i = 0;i<length;i++){
			printf("%d",arr[i]);
		}
	}
		if(length < n) {
			printf("�ַ������Ȳ���");
		}else if(length == n) {
			printf("ɾ����");
		}else {
			int t = n;
			int i = 0;
			while(t > 0&&i<length-1) {
				if(arr[i]>arr[i+1]) {
					for(int j = i;j<length-1;j++) {
						arr[j] = arr[j+1];	
					}
					i = -1;
					t--;
				}
			i++;
			}
			for(int j = 0;j < length-n;j++) {			
				printf("%d",arr[j]);
			}
		}
	return 0;
}

