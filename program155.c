

#include<stdio.h>
#include<stdbool.h>
bool CheakSmall(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
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

    bRet = CheakSmall(ch);
    if(bRet == true)
    {
        printf("%c is a Small letter\n",ch);
    }
    else
    {
        printf("%c is not a Small letter\n",ch);
    }

     return 0;


}