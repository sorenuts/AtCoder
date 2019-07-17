#define REP(i, n) for (int (i) = 0;(i)<(int)(n);(i)++)
#define rep(i, n) REP(i, n)
#define REPI(i, a, n) for(int i=int(a);i<int(b);i++)
#define repi(i, a, n) REPI(i, a, n)
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())
#define debug(x) cout<<#x<<" : "<<x<<endl
#define putn(x, n) cout<<fixed<<setprecision(n)<<x<<endl
#define PB push_back

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;


int main(){
    std::cin.tie(0);
    ios::sync_with_stdio(false);

    char a;
    int i=0;
    while(cin>>a){
        if(a=='+')i++;
        else i--;
    }
    cout << i<<endl;
}