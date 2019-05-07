#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n;
	//num是用来计算重复的2 
	int num = 0;
	//记录抹去的数 
	int mo; 
	int flag = 1;
	int trues = 1;
	//输入抹去一个数之后剩下的数字个数 
	scanf("%d",&n);
	int a[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
	} 
	//进行排序
	//外面一层是比较的轮次,里面那层是相邻元素的交换 
	for(int i = 0;i<n-1;i++){
		for(int j = i;j<n-1;j++){
			if(a[j]>a[j+1]){
				//把a[j]和a[i]交换位置 
				int t = a[j+1];
				a[j+1] = a[j];
				a[j] = t;
			}
		}
	}
	for(int i = 0;i<n;i++){
		printf("%d\n",a[i]);
	}
	//把排序的进行筛选 
	for(int i = 0;i<n;i++){
		if(a[i+1]-a[i]==2&&i!=n-1){
			//大的减小的等于1是正常,如果一直都是正常的情况,
			//那么可以推测是两端的值被抹去了 
			//大的减小的等于2是遗漏
			//大的减小的大于2是错误 
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
		//一直没出问题,只有可能两边被抹去 
		if(a[0]-1>0){
			//被抹去的值也是个正数 
			printf("%d %d",a[0]-1,a[n-1]+1);
		}else{
			printf("%d",a[n-1]+1); 
		} 
	}else if(num == 1&&trues == 1){
		//只出了一次问题,说明就是被抹除的数
		//而且并不存在因为错误跳出的情况 
		 printf("%d",mo);
	}else{
		//num == 0或者大于1
		printf("Mistake"); 
	}
	return 0;
}
