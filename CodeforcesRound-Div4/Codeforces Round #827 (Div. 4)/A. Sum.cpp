#include<bits/stdc++.h>
using namespace std;

bool solve(int a, int b , int c){
    if(a+b == c)
        return true;
    if(b+c == a)
        return true;
    if(c+a == b)
        return true;
    return false;
}

int main()
{
    int t;
    long long a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(solve(a,b,c)){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
 return 0;
}
