#include <stdio.h>
#include <stdlib.h>


int  main(){

    int **arr=calloc(3,sizeof(int*));

    for (int i = 0; i < 3; i++){
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
        for(int j=i;j<3;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int j=0;
        int k=2;
        while (j<k)
        {
            int temp =arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++; k--;
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    
    
    


}