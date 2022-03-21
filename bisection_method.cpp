//impliment the algorithm
#include <iostream>
#include <string>
#include <ostream>
#include <cmath>
using namespace std;
double f(double x)
{
return pow(x,2)*sin(2*x);
}
void bisection(double a , double b,double tol)

{
    int i = 0;
    if (f(a)*f(b)>0)
    {
        cout << "wrong guess"<<endl;
    }
    double a=c;
while 
 {
    c=a+(b-a)/2;
        if(fabs(f(c)<tol||(b-a)/2<tol))
      {
         cout<<c<<endl;
         break;
         i=i+1;
        
         else if (c*a<0)
         {
            b=c;
         }
         else
         a=c;
     }
    cout << "The value of root is : " << c;
   
 }

}

}
int main()
{
double a =0.0,b=1.0,c;


double tol ;
cout<<"the tolarence is = "<<endl;
cin>>tol;
double N;
cout<<" maximaum number of iterations = "<<endl;
cin>>N; 
int i = 0;
bisection(a,b, tol)
return 0;
}