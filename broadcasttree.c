#include<stdio.h>
int p[10];
int t[10][3];
int l1=0,u,v;
void delmincostedg(int cost[][10],int n)
{
	int l2=99,i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i!=j)
			{
				if(cost[i][j]>l1 && cost[i][j]<l2)
				{
					l2=cost[i][j];
					u=i;
					v=j;
				}
			}
		}
	}
	l1=l2;
}
int find(int i)
{
	while(p[i]>0)
		i=p[i];
	return i;
}
void kruskal(int cost[][10],int n)
{
	int i,mincost,min=999;
	int j=0,k=0;
	for(i=1;i<=n;i++)
		p[i]=-1;
	i=0;
	mincost=0;
	while(i<n-1)
	{
		delmincostedg(cost,n);
		j=find(u);
		k=find(v);
		if(j!=k)
		{
			i++;
			t[i][1]=u;
			t[i][2]=v;
			mincost+=cost[u][v];
			p[j]=k;
		}
	}
	if(i!=n-1)
		printf("no spanning tree!!");
	else
	{
		for(i=1;i<=n-1;i++)
		{
			printf("%d  %d\n",t[i][1],t[i][2]);
		}
	
		printf("mincost:%d",mincost);
	}
		
}
int main()
{
	int n,i,j;
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
	kruskal(cost,n);
}

