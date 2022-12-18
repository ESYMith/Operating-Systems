#include<stdio.h>
#include<unistd.h>
int main()
{
	int i;                   //Inter declaration
	i = fork();                   //fork for multiprocess
	for(int j=0;j<10;j++){
	if (i){
		printf("parent= %d\n",j);                 //Parent process on non zero fork 
	}
	else
		printf("child = %d\n",j);                    //Child process on zer fork 
	sleep(2);                          //Wait for 2 sec
}
return 0;
}
