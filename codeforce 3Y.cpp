
#include<bits/stdc++.h>

using namespace std;



int main(){

    int n, q, l, r;

    cin >> n >> q;

    long long sum;

    long long a[n];

    for(int i = 0; i< n ; i++){

        cin>> a[i];

    }

    long long presum_a[n+1];

    presum_a[0] = 0;



    for(int j = 1; j<= n; j++){

        presum_a[j] = presum_a[j-1] + a[j-1];

    }

    while(q--){



        cin >> l >> r;

        if(l<r) {

        sum = (presum_a[r] - presum_a[l-1]);

        cout << sum << endl;

        }



        else if(l==r) cout << a[l-1] << endl;

    }

}
