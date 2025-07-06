#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n+1,0);
    for(int i = 1 ; i <= n ; i++)
    cin>>arr[i];

    set<int> s;
    for(int i = n ; i >= 1; i-- ){
         s.insert(arr[i]);
         arr[i] = s.size();
    }

    for(int i = 1 ; i <= m ; i++){
        int index ; cin>>index;
        cout<<arr[index]<<endl;
    }
    return 0;
}