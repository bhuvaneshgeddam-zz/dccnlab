#include<stdio.h>
#include<string.h>
char exor(char a,char b)
{
	if(a==b)
		return '0';
	else
		return '1';
}
char* check(char d[],char g[],char crc[])
{
	char tmp[30];
	strcpy(tmp,d);
	strcat(tmp,crc);
	int i=0,j,k;
	while(i<strlen(d))
	{
		if(tmp[i]=='1')
		{
			k=i+1;
			j=0;
			while(j<strlen(g))
			{
				tmp[i]=exor(tmp[i],g[j]);
				j++;
				i++;
			}
			printf("tmp:%s\n",tmp);
			i=k;
		}
		else
			i++;
	}
	char*p=tmp+strlen(d);
	return p;
}
int main()
{
	char sd[15],rd[15],g[10],crc[10];
	char *ptr1,*ptr2;
	int j,flag=0;
	printf("\nenter sender side data:");
	scanf("%s",sd);
	printf("\nenter gen:");
	scanf("%s",g);
	for(int i=0;i<strlen(g)-1;i++)
		crc[i]='0';
	crc[strlen(g)-1]='\0';
	ptr1=check(sd,g,crc);
	j=0;
	while(*ptr1!='\0')
	{
		crc[j]=*ptr1;
		j++;
		ptr1++;
	}
	crc[j]='\0';
	printf("crc:%s",crc);
	printf("\nenter  receiver side data:");
	scanf("%s",rd);
	ptr2=check(rd,g,crc);
	j=0;
	while(*ptr2!='\0')
	{
		if((*ptr2)!='0')
		{
			printf("\nno error in data!!");
			flag=1;
			break;
		}
		else
		{
			ptr2++;
		}
	}
	if(flag==0)
		printf("\n oops! there is an error in data received!");	
}
/*
enter sender side data:10011

enter gen:110
tmp:0101100
tmp:0011100
tmp:0000100
tmp:0000010
10
enter  receiver side data:10010
tmp:0101010
tmp:0011010
tmp:0000010
unsucess!! 
*/
