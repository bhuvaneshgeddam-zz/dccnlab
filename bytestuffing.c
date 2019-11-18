#include<stdio.h>
#include<string.h>
int main()
{
	char d[20];
	char d1[40];
	int i,j=0;
	printf("enter data:");
	scanf("%s",d);
	d1[j]='f';
	j++;
	d1[j]='l';
	j++;
	d1[j]='a';
	j++;
	d1[j]='g';
	j++;
	for(i=0;i<strlen(d);i++)
	{
		if(d[i]=='e' && d[i+1]=='s' && d[i+2]=='c')
		{
			d1[j]='e';
			d1[j+1]='s';
			d1[j+2]='c';
			d1[j+3]='e';
			d1[j+4]='s';
			d1[j+5]='c';
			j=j+6;
			i=i+2;
		}
		else if(d[i]=='f' && d[i+1]=='l' && d[i+2]=='a' && d[i+3]=='g')
		{
			d1[j]='e';
			d1[j+1]='s';
			d1[j+2]='c';
			d1[j+3]='f';
			d1[j+4]='l';
			d1[j+5]='a';
			d1[j+6]='g';
			j=j+7;
			i=i+3;
		}
		else
		{
			d1[j]=d[i];
			j++;
		}	
	}
	d1[j]='f';
	j++;
	d1[j]='l';
	j++;
	d1[j]='a';
	j++;
	d1[j]='g';
	j++;
	printf("after byte stuffing:");
	for(i=0;i<j;i++)
		printf(" %c",d1[i]);
	printf("\n");
}
/*enter data:aafflagesc
after byte stuffing: a a f f l a g f l a g e s c e s c
*/
