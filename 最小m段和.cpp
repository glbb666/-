#include <stdio.h>
#define MAX(a,b) a>b?a:b 
 
int a[100];
int dp[1000][1000];
 
int main()
{
	int n,m,maxvalue=0;
	scanf("%d %d",&n,&m); 
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		//没赋值的数组默认值为0
		//当只有一段的情况,数组的一段和就是输入的元素累计起来的和 
		dp[i][1]=dp[i-1][1]+a[i];
	}
	for(int i=1;i<=n;i++)//i是元素的个数 
	{
		for(int j=2;j<=m;j++)//j是划分的段数 
		{
			int minvalue=99999;
			for(int k=1;k<i;k++){//k是数与数中间的空隙，表示从哪个数背后进行划分 
				//把新加的1种数段和 与之前的j-1段数段和的最大值进行比较 
				int temp=MAX(dp[i][1]-dp[k][1],dp[k][j-1]);
				if(temp<minvalue)
				{
					//在n个数的m次划分的最大值中选出最小值 
					minvalue=temp;
				}
			}
			dp[i][j]=minvalue;
		}
	 }
	 printf("%d\n",dp[n][m]); 
	
	return 0;
} 
