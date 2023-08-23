// problem on number (factors)
#include<stdio.h>
void DisplayFactor(int iNO)   // fuction name should be meaningfull.
{
    int iCnt = 0; 
    for(iCnt = 1; iCnt <= iNO; iCnt++)
    {
        printf("%d\n",iCnt);  //icnt value la ++ karle printf 
    }


}

int main()    // for input output device
{ 
    int iValue = 0; //code madhya interger tayar karycha ahe with the name value//

    printf("Enter Number :\n");  //je kahi problem statement del ahe te mnje ky display karycha ahe secreenvar
    scanf("%d",&iValue);//i nav chya variable madhya & ch meaning int ivalue madhya val takychi ahe .

    DisplayFactor(iValue); //funnction call directly ivalue fkta hya fun payat avaliable ahe local var 



    return 0;
}
/*
#innclude<stdio.h>
void displayfunction(int iNo)
{
    iCnt = 0;
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("%d\n",icnt)
    }





}

int main()
{
    int iValue 0;

    printf("dispaly number on screen\n");
    scanf("%d",&iValue);

    display(iValue);
    return 0;
}


















*/
