#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout<< (x) << " "

int main(){
    int n,k;cin>>n>>k;
    ll sum =0;
    rep(i,n){
        int tmp;cin>>tmp;
        sum+=min(2*tmp, 2*abs(k-tmp));
    }
    co(sum);
}