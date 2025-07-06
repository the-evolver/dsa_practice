#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int findMinN(int x) {
    double target = (x / 5.0) + 1.0;
    int n = ceil(log2(target));
    return n;
}


int main() {
    
    int index;cin>>index;
    vector<string> arr{"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    if(index <= 5){
        cout<<arr[index-1]<<endl;
    }
    else{
    int num = findMinN(index);
    //cout<<"num"<<num<<endl;
    int rem = index - (5 * ((pow(2,num - 1)) - 1));
   // cout<<"rem"<<rem<<endl;
    int ansIndex = (rem / pow(2,num-1));
    cout<<arr[ansIndex]<<endl;
    }

    return 0;
}



