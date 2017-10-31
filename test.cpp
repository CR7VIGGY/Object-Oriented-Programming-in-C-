#include<iostream>
using namespace std;

template<class t>
class arithmetic
{
    public :
        t m[10][10];
        int i,j;
        void getdata(int r,int c)
        {
            cout<<"enter the matrix A";
            for(i = 0 ; i < r ; i++)
            for(j = 0 ; j  < c ; j++)
            cin>>m[i][j];
            cout<<"\n";
          
            
        }
        
        void add(arithmetic &,arithmetic &,int,int);
        
        
        void putdata(int r,int c)
        {
            cout<<"\nmatrix A\n";
            for(i = 0 ; i < r ; i++)
            {
                for(j = 0 ; j  < c ; j++)
                {
                    cout<<m[i][j];
                }
                cout<<"\n";
            }
            
        }
        
};
template<class t>
void arithmetic <t>:: add(arithmetic <t>&a,arithmetic <t>&b,int r,int c)
{
     int i=0,j=0; 
    for(i=0;i<r;i++) 
    { 
        for(j=0;j<c;j++) 
        { 
            m[i][j]=a.m[i][j]+b.m[i][j]; 
        } 
    } 
}

int main()
{
    arithmetic <int>p,q,r;
    arithmetic <float>x,y,z;
    int r,c;
    cin>>r>>c;
    p.getdata(r,c);
    q.getdata(r,c);
    r.add(p,q);
    r.putdata(r,c);
    return 0;
}















