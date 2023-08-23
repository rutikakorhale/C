
// accept charater from user and cheakwhether letter is Digit or not. update
#include<stdio.h>
int StrlenX(char str[])
{
    


}


int main()
{
    char Arr[10]; // satic memory allocation
    int iRet = 0;
     
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);// special scanf.

    iRet = StrlenX(Arr);
    
    printf("Length of Sting is :%d\n",iRet);
    return 0;


}