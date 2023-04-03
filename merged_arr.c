#include <stdio.h>

int main() {
    int m,n;
    printf("Please enter the value of m and n:\n");
    scanf("%d %d",&m, &n);
    int a[m+n], b[m],c[n];
    
    printf("Please enter the elements of b array:\n");
    for(int i=0; i<m; i++){
        scanf("%d",&b[i]);
    }
    printf("Please enter the elements of C array:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&c[i]);
    }

    printf("Merged array:\n");

    int n_index = 0;
    for(int i=0; i<m+n; i++){
        if(i<m){
            a[i] = b[i];
        }else{
            a[i] = c[n_index];
            n_index++;
        }

        printf("%d\n",a[i]);
    }

    return 0;
}
