#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
using namespace std;
#define SIZE 1
int main(int argc,char* argv[])
{
int fd,byte;
char buff[1];
if(argc!=2)
{
cout<<"USAGE ERROR";
exit(0);
}

fd = open(argv[1], O_RDONLY, 0777 );
if(fd==-1)
{
perror("can't open file");
exit(0);
}
do
{
byte=read(fd,buff,SIZE);
cout<<buff;
}while(byte>0);
close(fd);
}
