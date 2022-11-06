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
    int t, t1;
    vector<int> sol;

    cin>>t;
    t1= t;

    while(t--){

        int n, smallest;
        cin>>n;
        smallest = INT_FAST32_MAX;
        vector<int> a;

        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            a.push_back(temp);
        }

        sort(a.begin(), a.end());
        
        for(int i=0; i<n-2; i++){
            if(smallest > (a[i+2]-a[i])){
                smallest = a[i+2]-a[i];
            }
        }

        sol.push_back(smallest);
    }

    for(int i=0; i<t1; i++){
        cout<<sol[i]<<endl;
    }

	return 0;
}