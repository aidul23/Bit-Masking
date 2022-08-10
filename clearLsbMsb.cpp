#include<bits/stdc++.h>
using namespace std;

bool printBinary(int n,int p)
{
    int exp = 1<<p;
    return (n&exp) == exp;
}

int clearLSB(int &n,int p)
{
    int b = (n & (~((1<<p+1) - 1)));
    return b;
}

int clearMSB(int &n, int &p)
{
    int b = (n & ((1<<p+1) - 1));
    return b;
}

int main()
{
    int n,p;
    cin>>n>>p;
    for(int i=9;i>=0;i--)
    {
        cout<<printBinary(n,i);
    }
    cout<<"\n";

    int clearLSBvalue = clearLSB(n,p);

    for(int i=9;i>=0;i--)
    {
        cout<<printBinary(clearLSBvalue,i);
    }

    cout<<"\n";

    int clearMSBvalue = clearMSB(n,p);

    for(int i=9;i>=0;i--)
    {
        cout<<printBinary(clearMSBvalue,i);
    }

    cout<<"\n";

    return 0;
}
