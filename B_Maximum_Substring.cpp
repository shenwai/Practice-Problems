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
        int n;
        cin>>n;
        int x = 0;
        int y = 0;
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            if(temp == 0){
                x++;
            }else{
                y++;
            }
        }

        if(x>0 && y>0){
            cout<<x*y<<"\n";
        }else if(x>0 && y==0){
            cout<<x*x<<"\n";
        }else if(x==0 && y>0){
            cout<<y*y<<"\n";
        }


    }
	return 0;
}