// string copy recive
#include<stdio.h>
void StrcpyrevX(char *src, char *dest)// Arr mnje *src, Brr mnje *dest
{
    int iLength = 0;
    while(*src != '\0')
    {
        src++; // Value ch add ++
        iLength++; // array chi size pn count keli
    }
    src--;// string recive gaychi ahem src ch add 104 ahe mahnu s-- ek ghar maghe yencysathi

    while(iLength != 0)
    {
        *dest = *src;
        src--;
        dest++;
        iLength--;
    }
    *dest = '\0';


    
    
}
int main()
{
    
    char Arr[20];
    char Brr[20];
    

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    StrcpyrevX(Arr,Brr);
    printf("String after Copy is :%s\n",Brr);

    return 0;
}