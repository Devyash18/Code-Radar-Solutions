#include <stdio.h>
int main (){
    int a,b;
    scanf("%d",&a);
    b= (a>>7)&1 ;
    if (b==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    
}
