#include <stdio.h>

int main()
{
	char *buf;
	int status;
	int pid;
	printf("Hello, world!!\n");
	
	if( (pid=fork()) == 0 )
	{
		buf = (char*)malloc(128);
		if( buf != NULL )
		{
			printf("Allocate memory success!\r\n");
			free(buf);
		}
		else
			printf("Failed!\r\n");
	}
	else
	{
		printf("Create pid=%d\r\n", pid);
		wait(&status);
	}
	return 0;
}
