#include <stdio.h>
#include <string.h>
#define M 100
int main(void){
	int n,length;
	//����Ҫɾ�����ĸ��� 
	char arr[M]; 
	scanf("%d",&n);
	scanf("%s",arr);
	length = strlen(arr);
	if(n == 0){
		return 0;
	}else if(n>=length){
		return 0;
	}else{
		int i = 0;//��¼�±꣬������û���ߵ���� 
		int num = 0;//��¼ɾ���ĸ��� 
		int newLength = length; 
		while(i<newLength&&num<=n){
			//��ͷ��ʼ�� 
			//�������������
			if(arr[i]>arr[i+1]){
				num++;
				//��������ǰ�� 
				for(int j = i;j<newLength;j++){
					arr[j] = arr[j+1];
				}
				//�ѳ��ȼ��� 
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
