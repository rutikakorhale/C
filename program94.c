
// pattern printing
// input : 7
// output : # # # # # # #
#include<stdio.h>

void Display(int ino)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <=ino; iCnt++)
    {
        printf("#\t");
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