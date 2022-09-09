#include<stdio.h>
//#include<stdbool.h>

int main(){
    int arr[10][10];
    int i, j, m, n, x;
    //bool found;
    printf("Enter size of array(m & n): ");
    scanf("%d %d", &m, &n);
    printf("Enter values of array: ");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    /*for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
            }
    }*/

    printf("\nEnter value you want to find: ");
    scanf("%d", &x);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(x==arr[i][j]){
                //found=1;
                //break;
                printf("\nFound!");
                exit(0);
            }
        }
    }
    printf("\nNot Found!");

    /*if(found){
        printf("\nFound!");
    } else {
        printf("\nNot found");
    }*/
    return 0;
}
