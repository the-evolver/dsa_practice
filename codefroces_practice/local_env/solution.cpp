//  author : the_evolver

#include <bits/stdc++.h>
#include <algorithm>
#include <numeric>
#include <queue>
using namespace std;
#define ll  long long
#define dd  double
#define pb push_back
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int Log(dd a, dd b) {int ans = log(a) / log(b); return ans;}



void init() {
    fast_io;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE

}



// vector<int> calc(vector<int> arr) {

//     int numOdds = 0;
//     int numEvens = 0;
//     int lastOdd = -1 , lastEven = -1;
//     int sum = 0;

//     for (int i = 0 ; i < arr.size(); i++) {

//         sum += arr[i];

//         if (arr[i] & 1) {
//             numOdds++;
//             lastOdd = i;
//         } else {
//             numEvens++;
//             lastEven = i;
//         }
//     }

//     vector<int> res;

//     if (numOdds == 0) {
//         res.push_back(0);

//     } else if (numEvens == 0) {
//         res.push_back(sum);
//     } else {
//         res.push_back(lastOdd);
//         res.push_back(lastEven);
//     }

//     return res;
// }

// int solve(vector<int> arr) {


//         int n = arr.size();
//         int pow2 = 0;

//         // Step 1: Count and remove factors of 2
//         for (int& a : arr) {
//             while (a % 2 == 0) {
//                 a /= 2;
//                 pow2++;
//             }
//         }

//         // Step 2: Find max element
//         int maxIdx = max_element(arr.begin(), arr.end()) - arr.begin();

//         // Step 3: Apply all pow2 to max element
//         arr[maxIdx] *= (1 << pow2);

//         // Step 4: Return sum
//         int total = 0;
//         for (int a : arr) total += a;
//         return total;



// }


// int main() {

//     init();
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int>arr(n, 0);

//         for (int i = 0 ; i < n ; i++) {
//             cin>>arr[i];
//         }


//         int ans = solve(arr);
//         cout<<ans<<endl;

//     }

//     return 0;
// }


long long maxSumAfterOperations(int n, vector<int>& a) {
    int cnt_twos = 0;
    vector<int> residuals;

    for (int i = 0; i < n; ++i) {
        int val = a[i];
        while (val % 2 == 0) {
            val /= 2;
            cnt_twos++;
        }
        residuals.push_back(val);
    }

    // Find max value in residuals
    int max_val = *max_element(residuals.begin(), residuals.end());

    // Remove one occurrence of max_val from residuals
    bool removed = false;
    long long sum = 0;
    for (int val : residuals) {
        if (!removed && val == max_val) {
            removed = true;
            continue; // skip this one, we'll multiply it by 2^cnt_twos
        }
        sum += val;
    }

    // Add the maximized value
    long long powered_max = (long long)max_val * (1LL << cnt_twos);
    sum += powered_max;

    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }


    vector<int> prefix_gcd(n, 0);
    vector<int> suffix_gcd(n, 0);

    for (int i = 0 ; i < n ; i++) {
        if (i == 0) {
            prefix_gcd[i] = arr[i];
        } else {
            prefix_gcd[i] = __gcd(prefix_gcd[i - 1], arr[i]);
        }
    }

    for (int i = n - 1 ; i >= 0 ; i--) {
        if (i == n - 1) {
            suffix_gcd[i] = arr[i];
        } else {
            suffix_gcd[i] = __gcd(suffix_gcd[i + 1], arr[i]);
        }
    }

    int maxi = 0;
    for (int i = 0 ; i < n ; i++) {
        // if(i == 0 || i == n-1)
        // maxi = max(maxi,__gcd(prefix_gcd[i-1],suffix_gcd[i+1]));

        int pre = i - 1 >= 0 ? prefix_gcd[i - 1] : arr[i];
        int suff = i + 1 < n ? suffix_gcd[i + 1] : arr[i];

        maxi = max(maxi, __gcd(pre, suff));

    }
    cout << maxi << endl;




    return 0;
}


