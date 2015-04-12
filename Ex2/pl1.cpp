#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
double g(double x)
{
return x*exp(-x*x*x);
}
double max_pos(double*x,double*gx,int n)
{
double max=gx[0];
double pos_max;
for(int i=0;i<n;i++)
{
if(max<gx[i])
{
max=gx[i];
pos_max=x[i];
}
return max;
}
}
int main()
{
int n=200;
double*gx=new double(n);
double*x=new double(n);
double xmin=-1;
double xmax=2;
double dx=(xmax-xmin)/(n-1);
ofstream EX2("pl1.txt");
for(int i=0;i<n;i++)
{
double x=xmin+i*dx;
EX2<<x<<" "<<g(x)<<endl;
}
cout<<max_pos(x,gx,n)<<endl;
}
