#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    char Name[30];
    int FD = 0;
    char Data[] = "india is my country";

    printf("Enter file name that you want to open :\n");
    scanf("%s",Name);

    FD = open(Name,O_RDWR);
    if (FD == -1)
    {
        printf("unable to open file\n");
        return -1;

    }
    else
    {
        printf("file is sucessfully opened\n");
    }
    write(FD,Data,19);
    return 0;
}