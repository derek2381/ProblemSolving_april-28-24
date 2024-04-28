// problem link
// https://www.codechef.com/problems/ENV?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int mod = 1e9+7;
	int t;
	cin >> t;

	while(t--){
	    long long int total = 0;
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    int min,index;

	    for(int i = 0;i < n;i++){
	        cin >> arr[i];
	    }

	    sort(arr.begin(), arr.end());

	    total = arr[0];
	    for(int i = 1; i< n;i++){
	        if((total * arr[i]) > (total + arr[i])){
	            total = (total*arr[i])%mod;
	        }else{
	            total = (total + arr[i]) % mod;
	        }
	    }

	    cout << total << endl;

	}
}
