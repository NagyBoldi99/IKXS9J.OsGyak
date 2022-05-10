#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
//#include<sys/wait.h>
#include<time.h>
int main()
{
	
	int gy;
	int st;
	gy=fork();
	if(gy==0){
	
		system("/bin/ls -R");
		sleep(3);
		exit(1);
	}
	else{
	
		WaitForSingleObject(&st);
		printf("visszatert: %d",gy);
		
	}

	return 0;
}

