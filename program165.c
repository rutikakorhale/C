

#include<stdio.h>
int CountVowels(char *str) 
{
    int iCount = 0; 
    while(*str != '\0')
    {
        if((*str == 'A') ||(*str == 'E')||(*str == 'I')||(*str == 'O')||(*str == 'U')||(*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
        {
          iCount++;
        }
        str++;
    }
    return iCount;
    


}


int main()
{
    char Arr[10]; // satic memory allocation
    int iRet = 0;
     
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);// special scanf.

    iRet =CountVowels(Arr); // strelenx(100)
    
    printf("Vowels are :%d\n",iRet);
    return 0;


}