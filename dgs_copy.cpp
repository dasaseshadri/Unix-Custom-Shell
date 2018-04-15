#include<sys/types.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
#include<errno.h>
#include<sys/stat.h>
#include<stdlib.h>
#define buf_size 20
using namespace std;
int main(int argc,char*argv[])
{
int fpr,fpw;
int total_size=0;
ssize_t nbyte_read,nbyte_write;
char buf[buf_size];
if(argc!=3)
{
cout<<"USAGE ERROR";
exit(0);
}

fpr=open(argv[1],O_RDONLY);
if(fpr<0)
{
perror("FAILED TO OPEN SOURCE FILE");
exit(0);
}
fpw=creat(argv[2],S_IRWXU);
if(fpw<0)
{
perror("FAILED TO OPEN DESTINATION FILE");
exit(0);
}
do{

nbyte_read=read(fpr,buf,buf_size);
if(nbyte_read<0)
{
perror("FAILED TO READ FROM FILE");
exit(0);
}
nbyte_write=write(fpw,buf,nbyte_read);
if(nbyte_write<0)
{
perror("FAILED TO WRITE TO FILE");
exit(0);
}
}while(nbyte_read>0);
close(fpr);
close(fpw);
}

