#include <stdio.h>
int main (){
    long long int a,b;
    scanf("%lld",&a);
    b= (a<<7)&1 ;
    if (b==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    
}
