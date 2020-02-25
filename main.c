#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  
  char string[101][101];
  
  int i=0;
  int j=0;
  int count=0;                   
  int max=0;                        /*max string length*/
  int temp;                         /*how many string*/
  while(gets(string[i]))
  {
    i++; 
  }
  for(j=0;j<i;j++)
  {
    if(strlen(string[j])>max)
    {
       max=strlen(string[j]);
    }
  }
  for(j=0;j<max;j++)
  {
    for(temp=i-1;temp>=0;temp--)
    {
      if(string[temp][j]!='\0')
      {
        while(count!=0)
        {
          printf(" ");
          count--;
        }
        printf("%c",string[temp][j]);
      }
      else
      {
        count++;
      }
      
    }
    count=0;
    printf("\n");
  }


return 0;
}
