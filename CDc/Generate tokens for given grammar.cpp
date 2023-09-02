#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	int i=0;
	char str[20];
	printf("\n Input the string::");
	gets(str);
	printf("Corresponding tokens are::");
	while (str[i]!='\0')
	{
		if((str[i]=='(')||(str[i]=='{'))
		{
			printf("4");
		}
		if((str[i]==')')||(str[i]=='}'))
		{
			printf("5");
		}
		if(isdigit(str[i]))
		{
			while(isdigit(str[i]))
			{
				i++;
			}
			i--;
			printf("1");
		}
		if(str[i]=='+')
		{
			printf("2");
		}
		if(str[i]=='*')
		{
			printf("3");
		}
		i++;
	}
	getch();
}
