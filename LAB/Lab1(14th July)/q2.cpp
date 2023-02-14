#include <bits/stdc++.h>

using namespace std;
void swap1(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    
}

int main()
{
   int a, b, c;
   cin>>a>>b>>c;
   
   swap1(a,c);
   swap1(b,c);
   cout<<a<<b<<c;
   

    return 0;
}