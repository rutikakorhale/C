
#include<stdio.h> 
#include<stdlib.h> 


int main()
{ 
    int iSize = 0;
    int*ptr = NULL;


    printf("Enter the Number of Elements :\n");  
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
    if(ptr == NULL) 
    {
        printf("unable to allocate memory\n");
        return -1; 
    }
    printf("memory allocated succesfully\n");
    return 0;
}