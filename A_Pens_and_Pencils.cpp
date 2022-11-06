#include <bits/stdc++.h>
using namespace std;


//Swap function
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,k;

        cin>>a>>b>>c>>d>>k;

        int x,y;

        if (a%c == 0){
            x = a/c;
        }else{
            x = (a/c) + 1;
        }

        if (b%d == 0){
            y = b/d;
        }else{
            y = (b/d) + 1;
        }

        if(x+y > k){
            cout<<-1<<"\n";
        }else{
            int buff = k - (x+y);
            cout<<x+buff<<" "<<y<<"\n";
        }
    }

	return 0;
}