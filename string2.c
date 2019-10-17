#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char a[100],b[100];
	printf("enter a string\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			b[i]=a[i]-32;
		}
		if(a[i]>='A'&&a[i]<='Z')
		{
			b[i]=a[i]+32;
		}
		
	}
	puts(b);
}
