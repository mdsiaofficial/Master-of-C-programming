#include <stdio.h>

int count = 0 ;
void counting_function (int n){
    count++;

    static int d = 1;

    printf("%d ", n);
    printf("%d ", d);

    d++;

    if(n>1) counting_function(n-1);

    printf("%d ", d);
}


int main(){

    int n=50;
    counting_function(3);
    printf("\n");
    printf("count = %d\n", count);

}
