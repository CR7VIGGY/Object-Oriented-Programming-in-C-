#include<bits/stdc++.h>
using namespace std;

template<class t>
class arith
{
    public :
        t a,b,ans;
        void getdata();
        void power(arith &);
};
template<class t>
void arith <t>:: getdata()
{
    cout<<"enter a:";
    cin>>a;
    cout<<"\nenter b:";
    cin>>b;
}
template<class t>
void arith <t> :: power(arith <t>&x)
{
    ans = pow(x.a,x.b);
    cout<<"\n"<<ans;
}

int main()
{
    arith <int>p,q;
    arith <float>m,n;
    p.getdata();
    q.power(p);
    m.getdata();
    n.power(m);
    return 0;
}



