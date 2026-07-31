#include<bits/stdc++.h>
using namespace std;

int main(){
    // array er 1ta index e 1tai value thakbe
    // // pair<int, int> p(1, 2);

    // // pair<int, int> p;
    // // p = make_pair(1, 2);

    // pair<string, int> p;
    // // p = make_pair("Hello", 1);
    // p = {"Hello", 2};
    // cout << p.first << endl;
    // cout << p.second << endl;


    // vector er 1ta indes e 1ta kre pair{} thakbe
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    for(int i = 0; i < n; i++)
        cout << v[i].first << " " << v[i].second << endl;
}