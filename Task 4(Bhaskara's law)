#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    float d, x, x1, x2;
    printf("Enter value of a, b, c:\n");    //7,9,2 for 2 soln, 1,2,1 for unique, 1,1,2 for no soln
    scanf("%d %d %d", &a, &b, &c);

    d = ((b*b)-(4*a*c));

    if(d>0){
        x1 = ((-b)+sqrt(d))/(2*a);
        x2 = ((-b)-sqrt(d))/(2*a);

        printf("There are 2 solutions, x1=%.5f, x2=%.5f", x1, x2);
    } else if(d==0){
        x = (-b)/(2*a);

        printf("Unique solution, x=%.5f", x);
    } else{
        printf("There is no real solution!");
    }
    return 0;
}
