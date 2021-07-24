#include<bits/stdc++.h>
using namespace std;

int value( int xa, int ya,int xb,int yb,int xf,int yf){
        int ans = 0;

        ans = abs(xa-xb) + abs(ya-yb);

return ans;
}


int main()
{
    int t = 0;

    cin>>t;

    int xa,ya,xb,yb,xf,yf;

    int ans = 0;

    while(t--){

        ans = 0;
        cin>>xa>>ya>>xb>>yb>>xf>>yf;


       if ((xa == xb && xf == xa && min(ya,yb)<yf && yf<max(ya,yb)) ||
          (ya == yb && yf == ya && min(xa,xb)<xf && xf<max(xa,xb))){
            ans = value(xa,ya,xb,yb,xf,yf);
            cout<<ans+2<<endl;
        }

        else{
        ans = value(xa,ya,xb,yb,xf,yf);
        cout<<ans<<endl;
        }

    }


    return 0 ;
}
