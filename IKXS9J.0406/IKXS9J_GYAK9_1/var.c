#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

void do_nothing();
int main(void)
{
    printf("PID=%d\n", getpid());
    signal(SIGTERM, do_nothing);
    printf("varok de meddig?\n");
    pause();
    printf("Vegre, itt az alarm \n");
}
void do_nothing()
{
    printf("do_nothing() fut\n");
}

