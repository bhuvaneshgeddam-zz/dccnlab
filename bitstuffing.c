#include<stdio.h>
int main()
{
	int a[20],b[30];
	int n,c,k,l=0;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter data:");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		c=0;
		if(a[i]==1)
		{
			for(int j=i;j<i+5 && j<n;j++)
			{
				if(a[j]==1)
				{
					b[l]=a[j];
					l++;
					c++;
					k=j;
				}
				else
				{
					b[l]=a[j];
					l++;
					k=j;
					break;
				}
			}
			if(c==5)
			{
				b[l]=0;
				l++;
			}
			i=k;
		}
		else
			printf("%d",a[i]);
	}
	for(int i=0;i<l;i++)
		printf("%d ",b[i]);
}
/*
enter n:10
enter data:1 0 1 1 1 1 1 1 1 1
1 0 1 1 1 1 1 0 1 1 1 
*/ 

