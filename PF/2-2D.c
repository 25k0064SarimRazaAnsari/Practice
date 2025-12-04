#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr1=calloc(10,sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        arr1[i]=i;
    }

    printf("%d",arr1[3]);

    int **arr2=calloc(3,sizeof(int*));

    for (int i = 0; i < 3; i++)
    {
        *(arr2+i)=calloc(3,sizeof(int));
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2[i][j]=i;
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d | ",arr2[i][j]);
        }
        
    }

    free(arr2);
    
}