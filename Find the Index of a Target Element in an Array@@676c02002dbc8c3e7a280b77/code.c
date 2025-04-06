// Your code here...
#include<stdio.h>
void arrr(int size , int arr[],int key){
    for (int i =0;i<size;i++){
        if (arr[i]==key){
            printf("%d",i);
        }
        else {
            printf("-1");
        }
    }
}
int main (){
    int arr[100];
    int key ;
    int size ;
    scanf("%d",&size);
    for (int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    arrr(size,arr,key);
}