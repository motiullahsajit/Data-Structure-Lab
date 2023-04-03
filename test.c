#include<stdio.h>

int main(){
    int k, v,n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("i = %d, %d\n",i,arr[i]);
    }

    scanf("%d %d",&k, &v);

    if( k < n){
        for(int i = n+1; i > k; i--){
            arr[i] = arr[i-1];
        }
        arr[k] = v;
        n++;

    }else{
        n = k+1;
        arr[k] = v;
    }

    for(int i=0;i<n;i++){
        printf("i = %d, %d\n",i,arr[i]);
    }
}

