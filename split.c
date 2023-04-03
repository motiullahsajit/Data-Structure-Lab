#include<stdio.h>

int main(){

    int n,j=-1,k=-1;

    scanf("%d",&n);

    int a[n],b[n],c[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int l = 0;l<n;l++){
        if(a[l]%2==0){
            j++;
            b[j]=a[l];
        }else {
            k++;
            c[k]=a[l];
        }
    }

    printf("Evens\n");

    for(int i=0; i<=j; i++){
        printf("%d ",b[i]);
    }

    printf("\nOdds\n");

    for(int i=0; i<=k; i++){
        printf("%d ",c[i]);
    }

    printf("\n");


    return 0;
}