#include<stdio.h>
struct rt
{
	int d[10];
	int nh[10];
};
int main()
{
	int n,cost[10][10];
	struct rt node[10];
	printf("enter n:");
	scanf("%d",&n);
	printf("enter touting tables info :\n");
	for(int i=1;i<=n;i++)
	{
		printf("enter router %d details(dist):",i);
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&node[i].d[j]);
			node[i].nh[j]=j;
		}
	}
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(node[i].d[j]>node[i].d[k]+node[k].d[j])
				{
					node[i].d[j]=node[i].d[k]+node[k].d[j];
					node[i].nh[j]=k;
				}
			}
		}
	}
	printf("after routing:\n");
	for(int i=1;i<=n;i++)
	{
		printf("node %d routing table:\n",i);
		for(int j=1;j<=n;j++)
		{
			printf("%d  %d  %d\n",j,node[i].d[j],node[i].nh[j]);
		}
	}	
}
/*
enter n:4
enter touting tables info :
enter router 1 details(dist):0 3 2 7
enter router 2 details(dist):3 0 99 11
enter router 3 details(dist):2 99 0 1
enter router 4 details(dist):7 11 1 0
after routing:
node 1 routing table:
1  0  1
2  3  2
3  2  3
4  3  3
node 2 routing table:
1  3  1
2  0  2
3  5  1
4  6  3
node 3 routing table:
1  2  1
2  5  1
3  0  3
4  1  4
node 4 routing table:
1  3  3
2  6  3
3  1  3
4  0  4
*/

