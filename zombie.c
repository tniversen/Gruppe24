#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main()
{
    pid_t pid;
    // Lag en barneprosess og lagre den returnerte PIDen
    pid = fork();
    //Dersom PIDen er større enn 0 blir koden inne hvis setningen utføres av foreldreprosessen
    if(pid > 0)
    {
        printf(" Dette er foreldre prosessen ");
        sleep(10);
    }
    else if (pid == 0)
    // Denne koden blir utført av en barneprosess
    {

        printf(" Dette er barneprosessen ");
        // Avslutt barneprosessen
        exit(0);
    }
    return 0;
}
