

#include<stdio.h>
#include<stdbool.h>
bool CheakDigit(char cValue)
{
    if((cValue >= '0') && (cValue <= '9'))
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    char ch = '\0';
    bool bRet = false;
    printf("Enter charatcter :\n");
    scanf("%c",&ch);

    bRet = CheakDigit(ch);
    if(bRet == true)
    {
        printf("%c is a Digit \n",ch);
    }
    else
    {
        printf("%c is not a Digit \n",ch);
    }

     return 0;


}