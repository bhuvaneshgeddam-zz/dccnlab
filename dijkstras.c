#include<stdio.h>
int d[10];
int s[10];
void shrtpath(int v,int cost[][10],int n)
{
	int u=v,min=999;
	int i,j,k,l,w;
	for(i=1;i<=n;i++)
	{
		s[i]=0;
		d[i]=cost[v][i];	
	}
	s[v]=1;
	printf("selected:%d\n",v);
	d[v]=0;
	for(j=2;j<=n;j++)
	{
		for(k=1;k<=n;k++)
		{
			if(s[k]==0)
			{
				min=d[k];
				u=k;
				break;
			}
		}
		for(l=1;l<=n;l++)
		{
			if(s[l]==0 && d[l]<=min)
			{
				min=d[l];
				u=l;
			}
		}
		printf("selected : %d\n",u);
		s[u]=1;
		for(w=1;w<=n;w++)
		{
			if((cost[w][u]!=99 || cost[w][u]!=0) && s[w]==0)
			{
				if(d[w]>d[u]+cost[w][u])
				{
					d[w]=d[u]+cost[w][u];
				}
			}
		}
	}
}
int main()
{
	int n,i,j,v;
	printf("enter n:");
	scanf("%d",&n);
	int cost[10][10];
	printf("enter cost matrix details:\n");
	for(i=1;i<=n;i++)
	{
		printf("enter %d row ele:",i);
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
		}
	}
	printf("enter source router:");
	scanf("%d",&v);
	shrtpath(v,cost,n);
}

