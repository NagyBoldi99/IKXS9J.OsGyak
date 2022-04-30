#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>

int main()
{
	int child;
	mkfifo("IKXS9J", S_IRUSR | S_IWUSR);
	child = fork();
	if (child > 0){
		char s[1024];
		int fd;
		fd = open("IKXS9J", O_RDONLY);
		read(fd, s, sizeof(s));
		printf("%s", s);

		close(fd);
		unlink("IKXS9J");
	}
	else if (child == 0){
		int fd;
		fd = open("IKXS9J", O_WRONLY);
		write(fd, "NAGY BOLDIZSÁR\n", 100);
	}
	return 0;
}
