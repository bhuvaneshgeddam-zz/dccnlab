#include<stdio.h>
#include<string.h>
int main()
{
	char d[20];
	int i;
	printf("enter data:");
	scanf("%s",d);
	printf(" f l a g");
	for(i=0;i<strlen(d);i++)
	{
		if(d[i]=='e' && d[i+1]=='s' && d[i+2]=='c')
		{
			printf(" e s c e s c");
			i=i+2;
		}
		else if(d[i]=='f' && d[i+1]=='l' && d[i+2]=='a' && d[i+3]=='g')
		{
			printf(" e s c f l a g");
			i=i+3;
		}
		else
		{
			printf(" %c",d[i]);
		}	
	}
	printf(" f l a g");
	printf("\n");
}
/*enter data:aafflagesc
after byte stuffing: a a f f l a g f l a g e s c e s c
*/
