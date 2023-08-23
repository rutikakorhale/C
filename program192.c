
#include<stdio.h>

void StrncatX(char *src, char *dest,int iLength)
{
    // 1
    while(*dest != '\0')
    {
        dest++;
    }

    //2
    while((*src != '\0')&&(iLength != 0))
    {
        *dest = *src;
        dest++;
        src++;
        
        iLength--;
    }

    // 3
    *dest = '\0';
}
int main()
{
    
    char Arr[20];
    char Brr[20] = "Demo";
    int iNo = 0;
    

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Number of Letter that you want to concate:\n");
    scanf("%d",&iNo);

    StrncatX(Arr,Brr,iNo);
    printf("String after Copy is :%s\n",Brr);

    return 0;
}