#include<stdio.h>
#include<conio.h>
int main(){
	int c,i,a[10];
	printf("enter any number");
	for(i=0;i<10;i++){
	scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		for(int j=0;j<10;j++){
		if(a[j]>a[j+1]){
		c=a[j+1];
		a[j+1]=a[j];
		a[j]=c;
		}
	}
}
	printf("the sorted number is");
	for(i=0;i<10;i++){
	printf("%d\t",a[i]);
		}
getch();
}