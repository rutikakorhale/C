
// pattern printing    // linear 
// input : row - 3, colum -5
//
// output :- a b c d e
//           a b c d e
//           a b c d e


#include<stdio.h>

void Display(int iRow,int iCol)
{ 
    int i = 0;  int j =  0; char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'a'; j <= iCol; j++,ch++)
        {
            printf("%c\t",ch);
            
        }
        printf("\n");
    }

}    
    
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);

    printf("Enter number of colums\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);


    return 0;
}