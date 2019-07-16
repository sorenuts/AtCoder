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
    REP(i,3){
        sort(ALL(v[i]), greater<ll>());
    }
    ll ans=0,total;
    REP(i,(1<<3)){
        total=0;
        REP(j,3){
            REP(k,m){
                if(i &(1<<j)){
                    total += v[j][k];
                }else{
                    total -= v[j][v[j].size()-k];
                }
            }
        }
        cout << total << endl;
    }


}
/*
 絶対値をとる
 正での絶対値と負での絶対値の組み合わせ2*2*2=8通り
 sortにかけてから上位か下位からm個取得
 totalに値を保管してやり、ans=0と比較してansに保管

 */