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
    int n,m,k;
    cin>>n;
    cin>>m;
    cin>>k;

    if((n<=m) && (n<=k)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
	return 0;
}