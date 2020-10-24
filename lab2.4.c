#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int name;
int main(void)
{
  for(int i = 0; i < 4; i++)
  {
     if(fork() == 0)
     {
          printf("PLease enter your name? >");
          scanf("%d", &name);
          exit(0);
     }
     else   {
          printf("Job is done\n");
          wait(NULL);
          
     }
  }
  return EXIT_SUCCESS;
}
