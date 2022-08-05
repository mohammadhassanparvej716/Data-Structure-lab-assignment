#include<stdio.h>
#include<math.h>

int main(){
    int arr[] = {1, 3, 5, 7, 9};
    int k=3, n=5;
    int i, j;

    printf("The array of data: \n");
    for(i=0; i<n; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    j = k;
    while(j<n){
        arr[j-1] = arr[j];
        j++;
    }
    n-=1;

    printf("\nThe array of data after deletion: \n");
    for(i=0; i<n; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
