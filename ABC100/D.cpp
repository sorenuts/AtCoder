#define REP(i, n) for (int (i) = 0;(i)<(int)(n);(i)++)
#define REPI(i, a, n) for(int (i)=int(a);(i)<int(b);(i)++)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((int)(x).size())
#define PB push_back

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;


int main(){
    std::cin.tie(0);

    int n,m;
    cin >> n >> m;

    vector<ll> v[3];
    REP(i,n){
        REP(j,3){
            ll num;
            cin>>num;
            v[j].PB(num);
        }
    }
    ll ans=0,total;
    REP(bit,(1<<3)){
        vector<ll> x;
        total = 0;
        REP(i,n){
            ll tmp=0;
            REP(j,3){
                if(bit &(1<<j)){
                    tmp += v[j][i];
                }else{
                    tmp -= v[j][i];
                }
            }
            x.PB(tmp);
        }
        sort(ALL(x), greater<ll>());
        REP(j,m){
            total+=x[j];
        }
        ans = max(ans, total);
    }
    cout << ans << endl;
}