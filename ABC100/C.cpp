#define REP(i, n) for (int i = 0;i<(int)(n);i++)
#define REPI(i, a, n) for(int i=int(a);i<int(b);i++)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((int)(x).size())

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;


int main(){
    std::cin.tie(0);
    int n,a;
    int i;
    int cnt=0;
    cin >> n;

    REP(i,n){
        cin>>a;
        while(a%2==0){
            a/=2;
            cnt++;
        }
    }
    cout<<cnt<<endl;

}