#include<iostream>
//#include<vector>
//#include<algorithm>
#include<cmath>

using namespace std;

void solve(unsigned int);

int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        solve(n);
    }
}
void solve (unsigned int n){
    int ans{}, t{1};
    while(t<=n){
        for(int i{1} ; i<=9 ; i++)
           if(t*i <= n)
            ans++;
        t = 10*t + 1;
    }
    cout<<ans<<endl;
}