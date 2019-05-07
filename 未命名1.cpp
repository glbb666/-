#include <stdio.h>
#include <string.h>

const int a[15]={6,6,2,6,4,4,4,8,4,6};
const int b[5]={6,2,4,8};
const int c[6]={0,1,2,6,4};
long long int f(long long int n){
    if(n<5) return c[n];
    return a[n%10]*b[n/5*3%4]%10*f(n/5);
}
int main(){
    long long int n;
    scanf("%lld",&n);
    printf("%lld",f(n)%10);
    return 0;
}
