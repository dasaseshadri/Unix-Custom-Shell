#include<iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main(int argc,char*argv[])
{
int fp;
if(argc!=2)
{
cout<<"USAGE ERROR";
exit(0);
}

fp=remove(argv[1]);
if(fp==-1)
{
perror("can't remove file");
exit(0);
}

}


