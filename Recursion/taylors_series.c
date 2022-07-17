#include <stdio.h>

double taylor(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        r = taylor(x, n - 1);
        p = p * x;
        f = f * n;
        return (r + p / f);
    }
}


double e(int x, int n)
{
    double s=1;
    int i;
    double num=1;
    double den=1;
    for(i=1;i<=n;i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}


double horner(int x, int n){
    static double s;
    if ( n==0 ){
        return s;
    } else {
        s = 1 + x*s/n;
    }
    return horner(x, n-1);
}


int main()
{
    printf("%lf\n", e(1, 10));
    return 0;
}