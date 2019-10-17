#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int i,j,pos;
	char a;
	char name[50],s1[50],s2[50];
	printf("enter a string");
	gets(name);
	printf("\nenter a character from string");
	scanf("%c",&a);
	for(i=0;name[i]!=a;i++)
	{
		s1[i]=name[i];
		
	}
	puts(s1);
	for(j=0;name[j]!='\0';i++,j++)
	{
		s2[j]=name[i];
	}
	puts(s2);
}
