
#include<stdio.h>

void strrevX(char *str)
{
    char *Start = NULL;
    char *end = NULL;  
    char temp = '\0'; 
    Start = str;
    end = str;

    while (*end != '\0') 
    {
        end++;

    }
    end--;  

    while(Start < end) 
    {
        temp = *Start;
        *Start = *end;
        *end = temp;

        Start++;
        end--;
    }
    
    

}

int main()
{
    char Arr[20];

    printf("Enter String;\n");
    scanf("%[^\n']s",Arr);

    strrevX(Arr);

    printf("Revesrse String is :%s\n",Arr);


    return 0;
}
