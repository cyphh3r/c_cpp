#include <stdio.h>


//using recursion
int sum(int n){
    if (n == 0){
        return 0;
    } else{
        return sum(n-1) + n;
    }
}


//using formula
// int sum_formula(int n){
//     return n * (n+1)/2;
// }


//using iteration
// int sum_loop(int n){
//     int i;
//     int s=0;
//     for(i=1; i<=n; i++){
//         s = s+i;
//     }
//     return s;
// }



int main(){
    int r;
    r = sum(5);
    printf("%d", r);
    return 0;
}