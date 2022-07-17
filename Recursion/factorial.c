#include <stdio.h>


//using recursion
int fact(int n){
    if (n==0){
        return 1;
    } else{
        return fact(n-1) * n;
    }
}


//using iteration
// int Ifact(int n){
//     int i;
//     int s = 1;
//     if (n==0){
//         return 1;
//     } else {
//         for(i=1; i<=n; i++){
//         s = s*i;
//         }
//     }
    
//     return s;
// }



int main()
{
    int r;
    r = fact(6);
    printf("%d", r);
    return 0;
}