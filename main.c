#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int number;
    printf("Input an integer: \n");
    scanf("%d", &number);
    
    if(number>0)
    {
                number = -number;
    }
    
    printf("절대값은 %d 입니다.\n", number); 
  
  system("PAUSE");	
  return 0;
}
