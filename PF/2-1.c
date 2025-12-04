#include <stdio.h>
#include <stdlib.h>
int main(){
    int **arr=calloc(3,sizeof(int*));
    int count=0,check=0;
    int index;
    for (int i = 0; i < 3; i++)
    {
        *(arr+i)=calloc(3,sizeof(int));
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter data for [%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j]==0)
            {
                count++;
            }
            
        }
        if (count>check)
        {
            check=count;
            index=i;

        }
        count=0;
        
    }
    
    printf("mx zero is %d in row %d",check,index);
    
}