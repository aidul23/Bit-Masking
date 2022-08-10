#include<bits/stdc++.h>
using namespace std;
/*
    The difference between lower and upper case letter's binary representation
    is the 5th bit is set for lowercase and 5th bit is unset for uppercase.

    So it is easy to covert the 5th bit and that will convert the char as well.
*/

void makeItLowerDaddy(char &c)
{
    cout<<char(c | (1<<5))<<endl;
}

void makeItUpperDaddy(char &c)
{
    cout<<char(c & (~(1<<5)))<<endl;
}

int main()
{
    char c;
    cin>>c;
    if(c>96) makeItUpperDaddy(c);
    else if(c<97) makeItLowerDaddy(c);
    main();
    return 0;
}
