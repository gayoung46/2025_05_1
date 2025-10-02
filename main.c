#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    
    printf("Input an integer: "); 
    scanf("%d", &i);
    
    if(i>0)
    {
           printf("양수입니다.\n");
    }
    
    else if(i<0) 
    {
         printf("음수입니다.\n");
    }
    
    else
    {
        printf("0입니다.\n");
    } 
     
  
  system("PAUSE");	
  return 0;
}
