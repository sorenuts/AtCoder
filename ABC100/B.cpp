#define REP(i, n) for (int i = 0;i<(int)(n);i++)
#define rep(i, n) REP(i, n)
#define REPI(i, a, n) for(int i=int(a);i<int(b);i++)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((int)(x).size())

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;


int main(){
    std::cin.tie(0);

    int d,n;
    cin >>d>>n;
    if(n==100)n++;
    rep(i,d)n*=100;
    
    cout<<n<<endl;
}