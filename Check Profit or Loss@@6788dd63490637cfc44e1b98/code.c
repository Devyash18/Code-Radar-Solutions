#include <stdio.h>
int main (){
    int a ,b ,c  ;
    scanf("%d %d",&a,&b);
    c = b-a;
    if (c>0){
        printf("Profit");
    }
    else if (c==0){
        printf("No Profit No Loss");
    }
    else if (c<0){
        printf("Loss");
    }

}