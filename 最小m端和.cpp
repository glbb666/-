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
		//û��ֵ������Ĭ��ֵΪ0
		//��ֻ��һ�ε����,�����һ�κ;��������Ԫ���ۼ������ĺ� 
		dp[i][1]=dp[i-1][1]+a[i];
	}
	for(int i=1;i<=n;i++)//i��Ԫ�صĸ��� 
	{
		for(int j=2;j<=m;j++)//j�ǻ��ֵĶ��� 
		{
			int minvalue=99999;
			for(int k=1;k<i;k++){//k���������м�Ŀ�϶����ʾ���ĸ���������л��� 
				//���¼ӵ�1�����κ� ��֮ǰ��j-1�����κ͵����ֵ���бȽ� 
				int temp=MAX(dp[i][1]-dp[k][1],dp[k][j-1]);
				if(temp<minvalue)
				{
					//��n������m�λ��ֵ����ֵ��ѡ����Сֵ 
					minvalue=temp;
				}
			}
			dp[i][j]=minvalue;
		}
	 }
	 printf("%d\n",dp[n][m]); 
	
	return 0;
} 
