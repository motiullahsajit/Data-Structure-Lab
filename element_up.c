#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
        printf("i = %d, %d\n", i, arr[i]);
    }

    int k, v;
    scanf("%d %d",&k, &v);

    if(k<n){
        arr[k] = v;

    for(int i=0; i<n; i++){
        printf("i = %d, %d\n", i, arr[i]);
    }
    }else{
        printf("Update not possible\n");
    }

    return 0;
}