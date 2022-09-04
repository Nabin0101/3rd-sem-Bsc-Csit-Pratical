// To find substring suffix and prefix of a string//
#include<stdio.h>
#include<string.h>
void find_prefix(char str[]);
void find_suffix(char str[]);
void find_substring(char str[],int,int);
int main()
{
	char str[20];
	int i,j;
	printf("\nEnter a string\n");
	gets(str);
	printf("\nPrefixes:");
	find_prefix(str);
	printf("\nSuffixes:");
	find_suffix(str);
	printf("\nEnter i and j for substring");
	scanf("%d%d",&i,&j);
	find_substring(str,i,j);
	return 0;
}

void find_prefix(char str[])
{
	int i,j;
	char prefix[20];
	for(i=strlen(str);i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			prefix[j]=str[j];
		}
		prefix[j]='\0';
		printf("\n%s",prefix);
	}
}

void find_suffix(char str[])
{
	int i,j,k;
	char suffix[20];
	for(i=0;i<=strlen(str);i++)
	{
		k=i;
		for(j=0;j<strlen(str);j++)
		{
			suffix[j]=str[k];
			k++;
		}
		suffix[j]='\0';
		printf("\n%s",suffix);
	}
}
void find_substring(char str[],int x,int y)
{
	char substr[20];
	int k=0;
	for(int i=x-1;i<y;i++)
	{
		substr[k]=str[i];
		k++;
	}
	substr[k]='\0';
	printf("\n Substring:\n%s",substr);
}
