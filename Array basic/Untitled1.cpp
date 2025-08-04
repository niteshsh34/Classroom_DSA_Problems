#include<iostream> 
using namespace std; 

class A{
    public:
    void add( int m, int n, int s =0)
    {int sum;
    sum = m+n+s;
    cout<<"\nsum = "<<sum;
    }
};
int main()
{A ob1;
int a, b,c;
cin>>a>>b>>c;
ob1.add(a,b);
ob1.add(a,b,c);
return 0;
}
