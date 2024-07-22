#include<stdio.h>
int main(){
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++) {
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            arr[count]=arr[i];
            count++;
        }
    }
    while(count<size){
        arr[count]=0;
        count++;
    }
    printf("Array after moving zeros to end:  ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
