#include<iostream>
#include<math.h>
#include<fstream>
#include<complex>

using namespace std;

double norm(double a,double b)
{
return sqrt(a*a+b*b);
}

double arg(double a,double b)
{
return atan(b/a);
}
int main()
{
double a=4,b=3;
cout<<norm(a,b)<<endl;
cout<<arg(a,b)<<endl;
complex<double>y(a,b);
cout<<norm(y)<<endl;
cout<<arg(y)<<endl;
cout<<abs(y)<<endl;
cout<<real(y)<<endl;
cout<<imag(y)<<endl;
cout<<conj(y)<<endl;
}


