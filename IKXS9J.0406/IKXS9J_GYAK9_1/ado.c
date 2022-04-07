#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

int main(int argc, char **argv)
{
    int pid;
    if(argc < 1)
    {
        perror("nincs kinek");
        exit(1);
    }
    pid = atoi(argv[i]);
    kill(pid.SIGTERM);
}
