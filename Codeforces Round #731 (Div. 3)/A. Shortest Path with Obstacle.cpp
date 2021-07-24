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

        int maxm = 0;
        int minm = 0;
        if(ya>yb){
            maxm = ya;
            minm = yb;
        }else{

            maxm = yb;
            minm = ya;
        }

       if(((xf == xa && xf == xb)&& (yf>=minm && yf<=maxm)) || ((xf > xa && xf < xb) && ( yf >= maxm) ) ){
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
