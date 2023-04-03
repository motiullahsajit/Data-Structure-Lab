#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,front=0, rare=-1,input;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];

    while (1)
    {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&input);

        if(input == 1){
            if(rare < n){
                rare++;
                system("cls");
                printf("Enter the element : ");
                scanf("%d",&arr[rare]);
            }else{
                system("cls");
                printf("Over flow\n");
            }
        }else if(input == 2){
            if(rare != -1){
                arr[front] = NULL;
                front++;
            }else{
                system("cls");
                printf("Under flow\n");
            }
        }else if(input == 3){
            if(rare != -1){
                system("cls");
                printf("Elements: ");
                for(int i= front; i<=rare; i++){
                    printf("%d ",arr[i]);
                }
                printf("\n");
            }else{
                system("cls");
                printf("No data found\n");
            }
        }else if(input == 4){
            exit(0);
        }

    }
    




    return 0;
}