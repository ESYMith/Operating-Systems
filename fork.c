#include<stdio.h>
#include<unistd.h>
int main()
{
	int i;                   //Inter declaration
	i = fork();                   //fork for multiprocess
	for(int j=0;j<100;j++){
	if (i){
		printf("parent= %d process = %d\n",j,getpid());                 //Parent process on non zero fork 
		
	}
	else
		printf("child= %d process = %d\n",j,getpid());                     //Child process on zer fork 
	sleep(2);                          //Wait for 2 sec
}
return 0;
}
