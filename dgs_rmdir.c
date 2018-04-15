//#include<iostream>
#include<string.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
//using namespace std;
int main(int argc,char*argv[])
{
int n;
if(argc!=2){
printf("usage error");
exit(0);}
n=rmdir(argv[1]);
if(n==-1)
perror("FAIL TO CREATE DIRECTORY FILE");
}
