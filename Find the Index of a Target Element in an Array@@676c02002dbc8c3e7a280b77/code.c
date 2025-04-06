// Your code here...
#include<stdio.h>
int arrr(int size , int arr[],int key){
    for (int i =0;i<size;i++){
        if (arr[i]==key){
            return i;
        }
        }
        return -1;
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
    int result = arrr(size,arr,key);
    if (result!=-1){
        printf("%d",result);
    }
    else {
        printf("%d",result);
    }
}