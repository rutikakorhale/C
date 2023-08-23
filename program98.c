
// pattern printing
// input : ino
// output :0 1 2 3
#include<stdio.h>

void Display(int ino)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < ino; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    


}
int main()
{
    int iFrequency = 0;

    printf("Enetr the Frequency of Symbol ;\n");
    scanf("%d",&iFrequency);
    Display(iFrequency);
    return 0;
}