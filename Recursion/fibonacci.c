#include <stdio.h>

int fib(int n){
    if (n <=1 ){
        return n;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int ifib(int n){
    int t0 = 0;
    int t1 = 1;
    int s,i;
    if ( n <= 1)
    return n;
    for( i=2; i<=n; i++){
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int F [10];

int mfib(int n){
    if ( n<=1 ) {
        F[n] = n;
        return n;
    } else {
        if (F[n-2] == -1)
         F[n-2] = mfib(n-2);

        if (F[n-1] == -1)
         F[n-1] = mfib(n-1);
         F[n] = F[n-2] + F[n-1];

        return F[n-2] + F[n-1];
    }
}



int main(){
    int i;
    for (i=0; i<10; i++)
        F[i] = -1;
        
    printf("%d\n",mfib(6));
    return 0;
}