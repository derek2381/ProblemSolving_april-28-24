// prboblem link
// https://www.codechef.com/problems/KCLOSE?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;

	    vector<int> arr(n);

	    for(int i = 0;i < n;i++){
	        cin >> arr[i];
	        arr[i] %= k;
	    }

	    sort(arr.begin(), arr.end());

	    long long int res = arr[n-1] - arr[0];

	    for(int i = 0;i < n-1;i++){
	        res = (res > (arr[i]+k-arr[i+1])) ? (arr[i]+k-arr[i+1]) : res;
	    }

	    cout << res << endl;


	}

}
