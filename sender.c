#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
int fd;
char*myfifo = "/tmp/myfifo";
mkfifo(myfifo,0666);
char arr1[8],arr2[80];
while(1)
{
fd=open(myfifo,O_WRONLY);
fgets(arr2,80,stdin);
write(fd,arr2,strlen(arr2)+1);
close(fd);
}
return 0;
}
