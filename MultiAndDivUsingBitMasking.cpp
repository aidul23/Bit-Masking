#include<bits/stdc++.h>
using namespace std;

void powerOfTwo(int &n)
{
    if(n & (n-1)) cout<<n<<" is not power of 2"<<endl;
    else cout<<n<<" is power of 2"<<endl;
}

void multiplyByTwo(int &n)
{
    cout<<n<<" Multiply by 2 : "<<(n<<1)<<endl;
}

void dividedByTwo(int &n)
{
    cout<<n<<" Divided by 2 : "<<(n>>1)<<endl;
}

int main()
{
    int n;
    cin>>n;

    multiplyByTwo(n);
    dividedByTwo(n);
    powerOfTwo(n);

    main();
    return 0;
}
