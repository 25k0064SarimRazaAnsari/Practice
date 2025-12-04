#include <stdio.h>
#include <string.h>
typedef struct cricket{

    char name[20];
    int age;
    int matcehs;
    float avg;

} cricket;

int main(){

    cricket c[20];
    int players;
    printf("Enter no . player :");
    scanf("%d",&players);
    getchar();
    for (int i = 0; i < players; i++)
    {   
        printf("Enter for player %d\n",i+1);
        
        printf("Enter name :");
        fgets(c[i].name,20,stdin);// %[^\n]s
        c[i].name[strcspn(c[i].name,"\n")]='\0';
        printf("Enter age :");
        scanf("%d",&c[i].age);
        printf("Enter matches :");
        scanf("%d",&c[i].matcehs);
        printf("Enter avg :");
        scanf("%f",&c[i].avg);

        getchar();
    }

    for (int i = 0; i < players; i++)
    {
        printf("Player name : %s\n",c[i].name);
        printf("Player age : %d\n",c[i].age);
        printf("Player matches : %d\n",c[i].matcehs);
        printf("Player avg : %.2f\n",c[i].avg);
    }
    
    


}