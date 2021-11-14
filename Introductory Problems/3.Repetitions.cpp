#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
    string s;
    cin >> s;
    int c = 0, ans = 1;
    char l = 'A';
    for(char d : s){
        if(d==l){
            ++c;
            ans = max(c, ans);
        } else {
            l = d;
            c = 1;
        }
    }
    cout << ans;
}
