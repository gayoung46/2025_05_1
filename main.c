#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b;
    char op;
    int result;
    
    printf("Enter the calculation : ");
    scanf("%i %c %i", &a, &op, &b);
    
    switch(op)
    {
              case '+':
                   result = a+b;
                   break;
              
              case '-':
                   result = a-b;
                   break;
                   
              default:
                   printf("지원하지 않는 연산자입니다.\n"); 
                   break; 
                   
    }
    
    printf(" = %i", result);
    
     
  system("PAUSE");	
  return 0;
}
