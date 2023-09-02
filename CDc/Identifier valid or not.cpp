#include<stdio.h> 
#include<conio.h> 
#include<ctype.h> 
#include<string.h>
int isKeyword(const char *);
int main() 
{ 
char a[10]; 
int flag, i=1; 

printf("\n Enter an identifier:");
gets(a); 
if ((isalpha(a[0]) || a[0] =='_')&& !isKeyword(a))
  {
  	flag=1;
  }
else
 {
  printf("\n Invalid Identifier");
}
  while(a[i]!='\0') 
{ 
if(!isdigit(a[i])&&!isalpha(a[i])&&a[i]!='_') 
 { 
 flag=0; 
 break; 
 } 
 i++; 
 }
 
 if(flag==1) 
 printf("\n Valid identifier"); 
  else
  printf("\n invalid identifier");
    getch(); 
 } 
 
 
int isKeyword(const char *input) {
    const char *keywords[] = {
        "auto", "break", "case", "char", "const", "continue", "default", "do", "double",
        "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register",
        "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef",
        "union", "unsigned", "void", "volatile", "while"
    };

int numKeywords = sizeof(keywords) / sizeof(keywords[0]);

    for (int i = 0; i < numKeywords; i++) {
        if (strcmp(input, keywords[i]) == 0) {
            return 1; 
        }
    }

    return 0;
}
