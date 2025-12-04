#include <stdio.h>
#include <stdlib.h>
int main(){
    int **arr=calloc(3,sizeof(int*));
    for (int i = 0; i < 3; i++)
    {
        *(arr+i)=calloc(3,sizeof(int));
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("Enter element for row %d\n\n",i+1);
        for (int j = 0; j < 3; j++)
        {
            printf("Enter colomn %d : ",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    
    // for (int i = 0; i < 3; i++)
    // {
    //     if (i%2==0)
    //     {
    //     for (int j = 0; j < 3; j++)
    //         {
    //             printf("%d ",arr[i][j]);
    //         }
    //     }
    //     else{
    //         for (int j = 2; j >= 0; j--)
    //         {
    //             printf("%d ",arr[i][j]);
    //         }
            
    //     }
        
    //     printf("\n");
    // }
    int sum=0;
    for (int i = 0; i < 3; i++)
    {
        if (i==0||i==2)
        {
            for (int j = 0; j < 3; j++)
            {
                sum+=arr[i][j];
            }
            
        }

        for (int j = 0; j<3; j++)
        {
            if(j==0||j==2){
                sum+=arr[j][i];
            }
        }
        
        
        
    }
    
    printf("%d" ,sum);
    

}

