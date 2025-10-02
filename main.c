#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int answer = 59;
    int trial = 0;
    int num;
    
    do
    {
         printf("Guess a number : ");
         scanf("%d", &num);
         
         if(num>answer)
         {
                       printf("high!\n");
         }
         
         else if(num<answer)
         {
                       printf("low!\n");
         }
         
         //else
         //{
             //printf("congratulation! trials : %d\n",trial+1);
         //}
         
         trial = trial + 1;
         
    }
    
    while(num != answer); 
    
   
   printf("congratulation! trials : %d\n",trial);
    
     
  system("PAUSE");	
  return 0;
}
