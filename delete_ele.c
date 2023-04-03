#include<stdio.h>

int main(){

    int n,k;

    printf("Enter number of the elements: ");    
    scanf("%d",&n);
    
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
        printf("i = %d, %d\n", i, arr[i]);
    }

    printf("Enter index of the element: ");
    scanf("%d",&k);

    if(k < n){
        for(int j = k; j <n; j++){
            arr[j] = arr[j+1];
        }

        for(int i=0; i<n-1; i++){
            printf("i = %d, %d\n", i, arr[i]);
        }
    }else{
        printf("Delete position invalid\n");
    }

    return 0;
}