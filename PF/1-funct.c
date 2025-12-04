#include <stdio.h>
#include <string.h>
typedef struct student{
    int roll;
    char name[20];
    int marks;
}student;

void add(student *s){
    for (int i = 0; i < 3; i++)
    {
        printf("Enter for %d\n\n",i+1);
        printf("Enter roll no. :");
        scanf("%d",&s[i].roll);
        getchar();
        printf("Enter name :");
        fgets(s[i].name,20,stdin);
        s[i].name[strcspn(s[i].name,"\n")]='\0';
        printf("Enter marks :");
        scanf("%d",&s[i].marks);

        
    }
    
}
void show(student *s){
    for (int i = 0; i < 3; i++)
    {
        printf("name :%s\n",s[i].name);
        printf("roll :%d\n",s[i].roll);
        printf("marks :%d\n",s[i].marks);
    }
    
}
int main(){
    student s[3];

    add(s);
    show(s);
}

