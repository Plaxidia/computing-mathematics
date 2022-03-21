//impliment the algorithm
#include <iostream>
#include <string>
#include <ostream>
#include <cmath>
using namespace std;

double f(double x)
{
    //f(x)=x^3-2,x0=1
    double exp = (pow(x,3)-2);
    double result = x - exp;
    return x;

}
// calculate the direvative
double df(double x)
{
return 1 + (3*pow(x,2));
}
int main ()
{   
    double x0 =1.0,x1=4.0;
    double tol;
    // =1e-6 ;
    int N;
    cout<<"input number of steps"<<endl; 
    cin>>N;
    cout<<"input the tolerance "<<endl;
    cin>>tol;
    int i =0;
    
    while (fabs(x1-x0)>tol && i<N)
    {
            x1=x0-f(x0)/df(x0);
            x0=x1;
            i++;
    }
    if (i==N)
    {
    cout << "Error, Method failed "<< N << " " <<"iterations = "<< endl;
    }else 
    {
    cout <<"the answer ="<<x1<<"after "<<i<<" " <<"iterations"<<endl;
    cout<<"f("<<x1<<")="<<f(x1)<<endl;
    }

}