#include<stdio.h>

int main(){
    int n1,n2;

    printf("Enter the number of elements array 1: ");
    scanf("%d",&n1);

    printf("Enter the number of elements of array 2: ");
    scanf("%d",&n2);

    int arr1[n1], arr2[n2];

    printf("\nEnter the elements of array 1: ");

    for(int i=0; i<n1; i++){
        scanf("%d",&arr1[i]);
    }

    printf("\nEnter the elements of array 2: ");

    for(int i=0; i<n2; i++){
        scanf("%d",&arr2[i]);
    }

    int arr3[n1 + n2];
    int j = 0, k = 0,l = -1;

    while (j<n1 && k<n2)
    {
        if(arr1[j] < arr2[k]){
            l++;
            arr3[l] = arr1[j];
            j++;
        }else{
            l++;
            arr3[l] = arr2[k];
            k++;
        }
    }

    if(j < n1){
        for(int i = j; i < n1; i++){
            l++;
            arr3[l] = arr1[i];
        }
    }else{
        for(int i = k; i < n2; i++){
            l++;
            arr3[l] = arr2[i];
        }
    }


    for(int i = 0; i < n1+n2; i++){
        printf("%d ",arr3[i]);
    }

    printf("\n");
    
    return 0;
}