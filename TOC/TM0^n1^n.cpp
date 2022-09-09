//TM accepting language o^n1^n over alphabet{0,1}//
#include<stdio.h>
#include<string.h>
enum states{q0,q1,q2,q3,q4,qr};
int main()
{
	char input[100];
	enum states curr_state=q0;
	int i;
	for(i=0;i<100;i++)
	{
		input[i]='\0';
	}
	printf("\n Enter a binary string");
	gets(input);
	i=0;
	while(1)
	{
		switch(curr_state)
		{
			case q0:
				if(input[i]=='0')
				{
					curr_state=q1;
					input[i]='X';
					i++;
				}
				else if(input[i]=='Y')
				{
					curr_state=q3;
					i++;
				}
				else
				{
					curr_state=qr;// qr for invalid  transition
				}
				break;
			case q1:
				if(input[i]=='0')
				{
					curr_state=q1;
					i++;
				}
				else if(input[i]=='Y')
				{
					curr_state=q1;
					i++;
				}
				else if(input[i]=='1')
				{
					curr_state=q2;
					input[i]='Y';
					i--;
				}
				else
				{
					curr_state=qr;// qr for invalid  transition
				}
				break;
			case q2:
				if(input[i]=='0')
				{
					curr_state=q2;
					i--;
				}
				else if(input[i]=='Y')
				{
					curr_state=q2;
					i--;
				}
				else if(input[i]=='X')
				{
					curr_state=q0;
					i++;
				}
				else
				{
					curr_state=qr;
				}
				break;	
			case q3:
				if(input[i]=='Y')
				{
					curr_state=q3;
					i++;
				}
				else if(input[i]=='\0')
				{
					curr_state=q4;
					i++;
				}
				else
				{
					curr_state=qr;
				}
				break;
		}
		if(curr_state==qr||curr_state==q4)
		{
			break;
		}
	}
	if(curr_state==q4)
	{
		printf("\n The string is accepted");
	}
	else
	{
		printf("\n The string is not accepted");
	}
	return 0;
}

