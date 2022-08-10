#include<bits/stdc++.h>
using namespace std;

/*
        If we see the binary representation of even and odd number
        we see a common difference between them. And that is the
        0th bit of odd number is always 1 and the 0th bit of even
        number is always 0
        so if we make an and(&) operation of both the number and 1
        we can tell weather the number is even or odd. Example:

        n = 2, binary of 2 = 0010, 0010 & 0001 = 0000, even
        n = 3, binary of 3 = 0011, 0011 & 0001 = 0001, odd

        n%2 == 0 and n&1 both operation is constant time
        but n&1 is faster because it works in register level

*/

void sayItDaddy(int &n)
{
    if(n & 1) cout<<"Odd"<<endl;
    else cout<<"Even"<<endl;
}


int main()
{
    int n;
    cin>>n;

    sayItDaddy(n);

    main();
    return 0;
}
