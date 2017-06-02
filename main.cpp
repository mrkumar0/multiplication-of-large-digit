#include<iostream>
#include<math.h>
using namespace std;
long long int multiply(long long int a,long long int b)
{
    long long int atp,btp,count0=0,count1=0;
    if(a/10 ==0 | b/10==0)
        return a*b;
    else
    {
        atp=a;
        while(atp/10)
        {
            count0++;
            atp /=10;
        }
        long long int x = pow(10,(count0-count0/2));
        atp = a/x;
        btp=b;
        while(btp/10)
        {
            count1++;
            btp /=10;
        }
        long long int y = pow(10,(count1-count1/2));
        btp = b/y;
        return (multiply(atp,btp)*x*y
                +multiply(a%x,b%y)
                +multiply(a/x,b%y)*y
                +multiply(a%x,b/y)*x);
    }

}
int main()
{
    cout << multiply(12345678948,12345678998);
    return 0;
}
