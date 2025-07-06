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
    
    int t;
    cin>>t;
    while(t--){
        string str1,str2;
        cin>>str1>>str2;
        if(str2.length() > str1.length()){
             cout<<"NO"<<endl;
        }
        string ans ="";
        int j = 0;
        int i = 0;

        for(; j < str1.length();){
            if(i < str2.length() && str1[j] == str2[i]){
                ans += str1[j];
                j++;
                i++;
            }
            else if(str1[j] == '?' ){
                ans += (i < str2.length() ? str2[i] :'a');
                j++;
                i++;
                
            }else{
                ans += str1[j];
                j++;
            }

        }
        if(i >= str2.length()){
           
            cout<<"YES"<<endl<<ans<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    }
}



