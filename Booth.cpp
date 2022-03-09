#include<stdio.h>
void displayBits(unsigned int value, int size)
{
	int i=0;
	for(i=0; i<16; i++){
		if(i<(16-size))
			value<<=1;
		else{
			putchar((value&0x8000)?'1':'0');
			value<<=1;
			if((i)%5==0) putchar(' ');
		}
	}
}

int main()
{
	unsigned int multiplicand = -5;
	unsigned int multiplier =-10;
	unsigned int accumulator=0;
	unsigned int product=0;
	unsigned int Qnm=0;
	unsigned int Qn=0;
	int i;
	
	printf("Multiplier: "); displayBits(multiplier,5);printf("\t");	
	printf("Multiplicand: "); displayBits(multiplicand,5);printf("\n");

	product=product| (multiplier&0x1F);
	printf("SC\t");printf("A\tQ   Qnm");printf("    Remarks");printf("\n");
	printf("5\t");displayBits(product,10);printf("%d",Qnm);printf("\t Initialization");printf("\n");
	
	Qn=(product & 0x01);
	for(i=5;i>0;i--)
	{
		if(Qn==1 && Qnm==0)  
		{
			accumulator=accumulator - multiplicand;  
			product= (product & 0x1F)|((accumulator & 0x1F)<<5); 
			printf("%d\t",i-1);displayBits(product,10);printf("%d",Qnm);printf("\t A-M");printf("\n");
		}
		else if(Qn==0 && Qnm==1)
		{
			accumulator=accumulator + multiplicand;  //Add Multiplicand
			product= (product & 0x1F)|((accumulator & 0x1F)<<5); //Update product EAQ, first clear accumulator bits then update
			printf("%d\t",i-1);displayBits(product,10);printf("%d",Qnm);printf("\t A+M");printf("\n");
		}	
		Qnm=(product & 0x01);
		product=(product & 0x01<<9)|(product>>1); //Arithmetic Right Shift
		printf("%d\t",i-1);displayBits(product,10);printf("%d",Qnm);printf("\t Arithmetic Right Shift");printf("\n");
		accumulator=(product>>5) & 0x001f; // Update Accumulator
		Qn=(product & 0x01);
	}
}