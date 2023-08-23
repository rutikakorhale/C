

#include<stdio.h>
#include<stdbool.h>
bool CheakCapital(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
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

    bRet = CheakCapital(ch);
    if(bRet == true)
    {
        printf("%c is a capital letter\n",ch);
    }
    else
    {
        printf("%c is not a capital letter\n",ch);
    }

     return 0;


}