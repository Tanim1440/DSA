#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drinks,lemon,salt,drink_need,salt_need;
    drinks=k*l;
    lemon=c*d;
    salt=p;
    drink_need=n*nl;
    salt_need=n*np;
    int a=min(drinks/drink_need,lemon/n);
    int b=min(a,salt/salt_need);
    cout<<min(a,b);
}