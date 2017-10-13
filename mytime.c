#include<stdio.h>
#include<unistd.h>
#include<linux/unistd.h>
#include<linux/time.h>
int main(){
	int timeReceived;
	struct timespec receivedTime ;
	timeReceived = syscall(326,&receivedTime);
	if(timeReceived==0){
		printf("%ld\n",receivedTime.tv_sec);
		printf("%ld\n",receivedTime.tv_nsec);
	}
	else{
		printf("Error\n");
	}
		return 0;
}
