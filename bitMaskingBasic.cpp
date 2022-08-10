#include<bits/stdc++.h>
using namespace std;

bool printBinary(int n,int p)
{
    int exp = 1<<p;
    return (n&exp) == exp;
}

void checkSetbit(int n, int p)
{
    if((n & (1<<p)) != 0)
    {
        cout<<p<<"th bit is set"<<endl;
    }
    else
    {
        cout<<p<<"th bit is unset"<<endl;
    }
}

void setBit(int n, int p)
{
    ///want to set bit in 1st position
    ///00001001(binary of 9)
    ///00000100(1<<2)
    ///or(|) both of these

    for(int i=7;i>=0;i--)
    {
        cout<<printBinary((n|(1<<p)),i);
    }

}

void unSetBit(int n, int p)
{
    ///00001001(binary of 9)
    ///11111110(the inverse of 1<<0)
    ///and(&) both of these

    for(int i=7;i>=0;i--)
    {
        cout<<printBinary((n&(~(1<<p))),i);
    }

}

void toggleBit(int n,int p)
{
    for(int i=7;i>=0;i--)
    {
        cout<<printBinary((n^(1<<p)),i);
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<"Binary Representation of "<<n<<" is: "<<endl;
    for(int i=7;i>=0;i--)
    {
        cout<<printBinary(n,i);
    }

    cout<<"\n\n";

    cout<<"Number of set bit in "<<n<<" is "<<__builtin_popcount(n)<<endl;
    cout<<"\n";

    cout<<"Check Set bit of "<<n<<" is: "<<endl;
    for(int i=0;i<=7;i++)
    {
        checkSetbit(n,i);
    }

    cout<<"\n";
    cout<<"In which position you want to set bit(between 0 to 7): "<<endl;
    int position;
    cin>>position;
    setBit(n,position);

    cout<<"\n";
    cout<<"In which position you want to unset bit(between 0 to 7): "<<endl;
    cin>>position;
    unSetBit(n,position);

    cout<<"\n";
    cout<<"In which position you want to toggle bit(between 0 to 7): "<<endl;
    cin>>position;
    toggleBit(n,position);
    return 0;
}
