#include <stdio.h>

int count = 0 ;
int fxm (int n){
    count++;
    int x=1, k;
    if(n==1) return x;
    for(k=1; k<n; k++){
        x = x + fxm(k) * fxm(n-k);

    }
    return x;
}


int main(){

    int n=50;
    printf("%d\n", fxm(5));
    printf("c= %d\n", count);

}
