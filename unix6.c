#include<stdio.h>
#include<unistd.h>
int main(){
pid_t p;
int a,b;
p=fork();
if(p<0)
  printf("ERROR");
else if (p==0)
{
printf("child process PID = %d\n",getpid());
printf("Enter a & b value for addition \n");
scanf("%d %d ",&a,&b);
printf("call by child = %d\n",a+b);
}
else
{
printf("Enter a & b for mul \n");
scanf("%d %d",&a,&b);
printf("Call by parent = %d\n",a*b);
printf("parent process PID = %d\n",getpid());
}
}
