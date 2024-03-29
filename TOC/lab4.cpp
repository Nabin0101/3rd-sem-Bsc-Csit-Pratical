// DFA to accepts the string which have substring 001//
#include<stdio.h>
#include<string.h>
enum states{q0,q1,q2,qf};
enum states delta(enum states,char);
int main()
{
	char input[20];
	enum states curr_state=q0;
	int i=0;
	printf("\n Enter a binary string\t");
	gets(input);
	char ch=input[i];
	while(ch!='\0')
	{
		curr_state=delta(curr_state,ch);
		ch=input[++i];
	}
	if (curr_state==qf)
	{
		printf("\n The string %s is accepted",input);
	}
	else
	{
		printf("\n The string %s is not accepted",input);
	}
	return 0;
}
//Transition function//
enum states delta(enum states s,char ch)
{
	enum states curr_state;
	switch(s)
	{
		case q0:
			if(ch=='0')
			{
				curr_state=q1;
			}
			else
			{
				curr_state=q0;
			}
			break;
		case q1:
			if(ch=='0')
			{
				curr_state=q2;
			}
			else
			{
				curr_state=q0;
			}
			break;
		case q2:
			if(ch=='0')
			{
				curr_state=q2;
			}
			else
			{
				curr_state=qf;
			}
			break;
		case qf:
			if(ch=='0'||ch=='1')
			{
				curr_state=qf;
			}
	}
	return curr_state;
}