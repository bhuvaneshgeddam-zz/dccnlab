#include<stdio.h>
#include<math.h>
int numofbits(int n)
{
	int nob=0;
	while(n>0)
	{
		n=n/2;
		nob++;
	}
	return nob;
}
int fun1(int a[],int n,int cs)
{
	int max=0,s=0,nobmax,nobs;
	int t[10],i,j,k,num=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		s+=a[i];
	}
	s+=cs;
	nobmax=numofbits(max);
	nobs=numofbits(s);
	j=nobs-nobmax-1;
	k=nobs-1;
	while(s>0)
	{
		t[k]=s%2;
		k--;
		s/=2;
	}
	k=nobs-1;
	int x,y,c=0,p=0;
	while(k>nobs-nobmax)
	{
	
		x=t[k];
		y=t[j];
		if(x==1 && y==1)
			c=1;
		else
			c=0;
		if(j<0)
		{
			t[k]=t[k]|c;
		}
		else
		{
			t[k]|=(c|t[j]);
		}
		j--;	
		k--;
	}
	for(i=nobs-1;i>=nobs-nobmax;i--)
	{
		num+=(!(t[i]) * pow(2,p));
		p++; 
	}
	return num;
	
	
	
}
int main()
{	
	int i,n,cs=0;
	int a[10],b[10];
	printf("enter no of nums:");
	scanf("%d",&n);
	printf("enter sender side nums:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	cs=fun1(a,n,cs);
	printf("enter receiver side nums");
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	if(!fun1(b,n,cs))
	{
		printf("no error in data\n");
	}
	else
	{
		printf("error in data");
	}
}
/*
enter no of nums:5
enter sender side nums:7 11 12 0 6
enter receiver side nums7 11 12 1 6
error in data
------------------
enter no of nums:5
enter sender side nums:7 11 12 0 6
enter receiver side nums7 11 12 0 6
noerror in data
*/
