#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char *arr=malloc(20*sizeof(char));
    strcpy(arr,"sarim");
    int i=0,j=strlen(arr)-1;
    printf(" %s",arr);

    while (i<j)
    {
        char temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

        i++;
        j--;
    }
    
    printf(" %s",arr);
    free(arr);
}