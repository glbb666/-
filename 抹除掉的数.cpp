#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n;
	//num�����������ظ���2 
	int num = 0;
	//��¼Ĩȥ���� 
	int mo; 
	int flag = 1;
	int trues = 1;
	//����Ĩȥһ����֮��ʣ�µ����ָ��� 
	scanf("%d",&n);
	int a[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
	} 
	//��������
	//����һ���ǱȽϵ��ִ�,�����ǲ�������Ԫ�صĽ��� 
	for(int i = 0;i<n-1;i++){
		for(int j = i;j<n-1;j++){
			if(a[j]>a[j+1]){
				//��a[j]��a[i]����λ�� 
				int t = a[j+1];
				a[j+1] = a[j];
				a[j] = t;
			}
		}
	}
	for(int i = 0;i<n;i++){
		printf("%d\n",a[i]);
	}
	//������Ľ���ɸѡ 
	for(int i = 0;i<n;i++){
		if(a[i+1]-a[i]==2&&i!=n-1){
			//��ļ�С�ĵ���1������,���һֱ�������������,
			//��ô�����Ʋ������˵�ֵ��Ĩȥ�� 
			//��ļ�С�ĵ���2����©
			//��ļ�С�Ĵ���2�Ǵ��� 
			mo = a[i]+1; 
			flag = 0;
			num++;
		}else if(a[i+1]-a[i]>2&&i!=n-1){
			flag = 0;
			trues = 0;
			break;
		}else if(a[i+1]-a[i]==0&&i!=n-1){
			flag = 0;
			trues = 0;
			break;
		}else{
			;
		}
	}
	if(flag == 1){
		//һֱû������,ֻ�п������߱�Ĩȥ 
		if(a[0]-1>0){
			//��Ĩȥ��ֵҲ�Ǹ����� 
			printf("%d %d",a[0]-1,a[n-1]+1);
		}else{
			printf("%d",a[n-1]+1); 
		} 
	}else if(num == 1&&trues == 1){
		//ֻ����һ������,˵�����Ǳ�Ĩ������
		//���Ҳ���������Ϊ������������� 
		 printf("%d",mo);
	}else{
		//num == 0���ߴ���1
		printf("Mistake"); 
	}
	return 0;
}
