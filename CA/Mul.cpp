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
			if((i+1)%4==0) putchar(' ');
		}
	}
}

int main()
{
	unsigned int multiplicand = 15;
	unsigned int multiplier =11;
	unsigned int accumulator=0;
	unsigned int product=0;
	int i;
	
	printf("Multiplier: "); displayBits(multiplier,4);printf("\t");	
	printf("Multiplicand: "); displayBits(multiplicand,4);printf("\n");

	product=product| multiplier;
	printf("SC\t");printf("E A\tQ\t");printf(" Remarks");printf("\n");
	printf("4\t");displayBits(product,9);printf("\t Initialization");printf("\n");
	for(i=4;i>0;i--)
	{
		if(product & 0x01)  // Check LSB of Q
		{
			accumulator=accumulator + multiplicand;  //Add Multiplicand
			product=(product & 0xFF0F)|(accumulator<<4); //Update product EAQ, first clear accumulator bits then update
			printf("%d\t",i-1);displayBits(product,9);printf("\t A+M");printf("\n");
		}	
		product=product>>1; //Right Shift
		printf("%d\t",i-1);displayBits(product,9);printf("\t Shift Right");printf("\n");
		accumulator=(product>>4) & 0x000f; // Update Accumulator
	}
}