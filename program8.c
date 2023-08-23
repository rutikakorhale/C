////////////////////////////////////////////////////////////////////////////////
// write a program which accept the marks and displya the class accordigly
// 0 - 34    Fail
// 35 - 49   pass class
// 50 - 59   second class
// 60 - 74    frist class
// 75 - 100   frist class with destinction

#include<stdio.h>  // for printf and scanf 

void DisplayClass(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.00f)) // filter 
    {
        printf("Invalid Input\n");
        printf("Please enter the marks in between the rang 0 to 100");
        return;
    }
    else if((fMarks >= 0.0f) && (fMarks < 35.00f))
    {
        printf("you are fail\n");

    }
    else if((fMarks >= 35.00f) && (fMarks < 50.00f))
    {
        printf("you got pass class\n");
    }
    else if((fMarks >= 50.00f) && (fMarks < 60.00f))
    {
        printf("you got second class\n");
    }
    else if((fMarks >= 60.00f) && (fMarks < 75.00f))
    {
        printf("you got a frist class\n");
    }
    else if((fMarks >= 75.00f) && (fMarks <= 100.0f))
    {
        printf("you got a frist class with Distinction\n");
    }
    
}

int main()
{
    float fValue = 0.0f;

    printf("please enter you percentage : \n");

    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}    




