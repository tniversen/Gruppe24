#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>

int main()
{
  int n = 11; // setter verdien til 11

  pid_t pid;

  pid = fork();

  // Opprett foreldreprosessen
  if(pid > 0)
  {
     wait();
  }

  // Opprett barneprosessen
  else if (pid == 0)
  while(n > 1){
    if(n % 2 == 0){ //for partall
      n = n / 2;
      printf("%d\n", n);
    }
    else{ //for oddetall
      n = n * 3 + 1;
      printf("%d\n", n);
    }
  }
  return 0;
}
