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
    vector<string> stones = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};
	int n;
    cin>>n;
    vector<int> log;
    vector<int> miss;

    for(int i=0; i<n; i++){
        string temp;
        cin >> temp;

        if(temp == "purple"){
            log.push_back(0);
        }else if(temp == "green"){
            log.push_back(1);
        }else if(temp  == "blue"){
            log.push_back(2);
        }else if(temp  == "orange"){
            log.push_back(3);
        }else if(temp  == "red"){
            log.push_back(4);
        }else if(temp  == "yellow"){
            log.push_back(5);
        }
    }

    for(int i=0; i<6; i++){
        miss.push_back(0);
    }

    for(int i=0; i<log.size(); i++){
        miss[log[i]] = 1;
    }

    cout<< 6 - log.size() <<"\n";

    for(int i=0; i<6; i++){
        if(miss[i] == 0){
            cout<<stones[i]<<"\n";
        }
    }

    return 0;
}