
// pattern printing
// input : 7
// output :abcdefg
#include<stdio.h>

void Display(int ino)
{
    int iCnt = 0; char ch = 'A';
    for(iCnt = 1; iCnt <= ino; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
    printf("\n");
    


}
int main()
{
    int iFrequency = 0;

    printf("Enetr the Frequency of Symbol :\n");
    scanf("%d",&iFrequency);
    Display(iFrequency);
    return 0;
}