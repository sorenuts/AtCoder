#define REP(i, n) for (int i = 0;i<(int)(n);i++)
#define REPI(i, a, n) for(int i=int(a);i<int(b);i++)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((int)(x).size())

typedef long long ll;

#include <bits/stdc++.h>

using namespace std;


int main(){
    std::cin.tie(0);

    int a,b;
    cin >> a >> b;

    if(a<=8 && b <=8)cout << "Yay!";
    else cout << ":(";
    cout <<endl;
}
