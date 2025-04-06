// Your code here...
#include<stdio.h>
int palindrome(int arr[],int size ){
    int start = 0;
    int end = size-1;
    while (start<end){
        
        if(arr[start]!=arr[end]){
            return -1;
        }
        start++;
        end--;

    }
    return 1;
}
int main (){
    int size;
    int arr[100];
    scanf("%d",&size);
    for (int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int result = palindrome(arr,size);
    if (result ==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}