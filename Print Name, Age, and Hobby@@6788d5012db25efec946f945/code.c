#include <stdio.h>
int main(){
    char name[20];
    char age[20];
    char hobby[20];
    scanf("%s",&name);
    scanf("%s",&age);
    scanf("%s",&hobby);
    scanf("%s %s %s",&name , &age , &hobby);
    printf("Name: %s\n" ,name);
    printf("Age: %s\n" ,age);
    printf("Hobby: %s\n" ,hobby);


    return 0;
}