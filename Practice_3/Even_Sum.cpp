#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        
        int total_sum = 0;
        for(int i=0; i<n; i++)
            total_sum += a[i];

        bool flag = false;
        for(int i=0; i<n; i++){
            int remainning_sum = total_sum - a[i];
            if(remainning_sum%2 == 0){
                flag = true;
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << endl;
    }
}