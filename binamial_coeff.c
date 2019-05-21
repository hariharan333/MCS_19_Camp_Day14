#include<iostream>
using namespace std;

unsingned long int binomiacoeff(unsingned int n,unsingned int k)
{
    unsingned long int res = 1;
    //since c(n,k) =c(n,n-k)
    if(k>n-k)
        k=n-k;
    //calculating value of [n*(n-1)*------*(n-k+1)]/[k*(k-1)*----*1]
    for(int i=0;i<k;i++)
    {
        res* =(n-i);
        res/=(i+1);
    }
    return res;
}
unsingned long int catalan(unsingned int n)
{
    unsingned long int c = binamialcoeff(2*n,n);
    return c/(n+1);
}
int main()
{
    for(int i=0;i<10;i++)
    {
        cout<<catalan(i)<<" ";
    }
    return 0;
}
