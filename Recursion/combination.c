#include <stdio.h>
#include <math.h>

int fact(int n){
    if ( n==0 ){
        return 1;
    } else {
        return fact(n-1) * n;
    }
}

int formula(int n, int r){
    int t1, t2, t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n-r);
    return t1/(t2 * t3);
}

int comb(int n, int r)
{
    if (r == 0 || n == r)
    {
        return 1;
    }
    else
    {
        return comb(n - 1, r - 1) + comb(n - 1, r);
    }
}

int main()
{
    printf("%d \n", comb(5, 3));
    return 0;
}