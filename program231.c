//unable to open
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char Fname[30];
    printf("Enter File That You Want to open\n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
       printf("File is Sucessfully opend with FD %d\n",fd);
    }

    close(fd);

    return 0;
}