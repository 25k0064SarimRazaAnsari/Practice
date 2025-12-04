#include <stdio.h>

typedef struct player{
    int teamID;
    char name[20];
    int win;
    int loss;
}player;


void add(player *p,int *index){
    getchar();

    printf("Enter name :");
    scanf(" %[^\n]",&p[*index].name);

    printf("Enter ID :");
    scanf("%d",&p[*index].teamID);

    printf("Enter win :");
    scanf("%d",&p[*index].win);

    printf("Enter loss :");
    scanf("%d",&p[*index].loss);
    
    (*index)++;
}

int search(player *p,int *index){
    int tempID;
    printf("Enter ID :");
    scanf("%d",&tempID);

    for (int i = 0; i < *index; i++)
    {
        if(p[i].teamID==tempID) return i;
    }
    
}

void upd(player *p,int * index){
    int update=search(p,index);
    
    getchar();
    printf("Enter new name :");
    scanf(" %[^\n]",p[update].name);
    printf("Enter new id :");
    scanf("%d",&p[update].teamID);
    printf("Enter new win :");
    scanf("%d",&p[update].win);
    printf("Enter new loss :");
    scanf("%d",&p[update].loss);


}

int main(){
    int choice ,index=0;
    player p[10];
    while (1)
    {
        printf("Enter choice :");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            add(p,&index);
            break;
        case 2:
            upd(p,&index);
            break;
        case 3:
            for (int i = 0; i < index; i++)
            {
                printf("Name : %s",p[i].name);
                printf("id : %d",p[i].teamID);
                printf("win : %d",p[i].win);
                printf("loss : %d",p[i].loss);
            }
            
            break;
        
        default:
            break;
        }
    }
    

}