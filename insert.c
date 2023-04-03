#include<stdio.h>

int main(){
    int n,k,v;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements: ");

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Current array: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("Enter the index and value: ");
    scanf("%d %d",&k,&v);

    if(k >=n){
        n++;
        arr[k] = v;
    }else{
        for(int i=n; i>=k; i--){
            if(i == k){
                n++;
                arr[i] = v;
            }else{
                arr[i] = arr[i-1];
            }
        }
    }

    printf("New array: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");


    return 0;
}