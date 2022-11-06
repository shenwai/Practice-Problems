#include <bits/stdc++.h>
using namespace std;

#define int long long

//Swap function
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

signed main()
{
    int n;
    cin>>n;
    if(n%2 == 1){
        cout<<"Ehab";
    }else if(n%2 == 0){
        cout<<"Mahmoud";
    }
	return 0;
}