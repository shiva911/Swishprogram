#include <iostream>
using namespace std;
int main()
{
    int x,p,c;
    c=0;
    cin >>x>>p;
    while(x>0)
    {
        x=x*(100-p)/100;
        c++;
    }
    cout <<c;
    return 0;
}
