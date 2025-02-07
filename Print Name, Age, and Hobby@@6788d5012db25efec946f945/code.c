#include <stdio.h>
int main(){
    char name[20];
    char age[20];
    char hobby[20];
    scanf("%s",&name);
    scanf("%s",&age);
    scanf("%s",&hobby);
    scanf("%s %s %s",&name , &age , &hobby);
    printf("name: %s" ,name);
    printf("Age: %s" ,age);
    printf("Hobby: %s" ,hobby);


    return 0;
}