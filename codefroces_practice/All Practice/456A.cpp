// B. Fence

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string solve( vector<pair<int,int>>& laptops , int n){
    sort(laptops.begin(),laptops.end());
    int minQ = laptops[0].second;
    for(int i = 1 ; i < n ; i++){
            if(laptops[i].second < minQ){
                return "Happy Alex";
            }
                minQ = max(laptops[i].second,minQ);
            
                
    }
   return "Poor Alex";
   
}

int main() {
    int n,k;
    cin >> n ;
    vector<pair<int,int>> laptops;
    for(int i = 0 ; i < n ; i++){
        int ai,bi;
        cin>>ai>>bi;
         pair<int,int> p;
         p.first = ai;
         p.second = bi;
         laptops.push_back({p});
    }
    cout<<solve(laptops,n);
    

    return 0;
}

