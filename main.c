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
    
    printf("���밪�� %d �Դϴ�.\n", number); 
  
  system("PAUSE");	
  return 0;
}
