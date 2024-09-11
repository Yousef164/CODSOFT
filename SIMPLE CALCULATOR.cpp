#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
class calculation{
private:
    ll a,b;
    char c;
public:
    calculation(ll a, char c,ll b):a(a),b(b),c(c){}
    void addition(){
        cout<<a+b<<endl;
    }
    void subtraction(){
        cout<<a-b<<endl;
    }
    void multiplication(){
        cout<<a*b<<endl;
    }
    void division(){
        cout<<(double)a/b<<endl;
    }
};
int main(){
    ll x,y;
    char z;
    cout<<"Enter the calculation: ";
    cin>>x>>z>>y;
    calculation cal(x,z,y);
    if(z=='+')
        cal.addition();
    else if(z=='-')
        cal.subtraction();
    else if(z=='*')
        cal.multiplication();
    else if(z=='/')
        cal.division();
    return 0;
}
