#include<iostream>
#include<math.h>
#include<fstream>
#include<stdlib.h>

using namespace std;

double f(double x)
{
	return x-(5*exp(cos(x)));
}

double df(double x1,double x2,double(*f)(double))
{
	double y1=f(x1);
	double y2=f(x2);
	return (y1-y2)/(x1-x2);
}

double newton(double x0,double error,double(*f)(double),double(*df)(double,double,double(*f)(double)))
{
	double x1;
	double x2;
	double x;
	double root;
	double n=100;
		for(int i=0;i<n;i++)
		{
		root=x0-(f(x)/df(x1,x2,f));
			if(fabs(root-x0)<error)
				{
				x0=root;
				}
			else
				{
				exit(1);
				}
		}
	return root;
}

int main()
{
	double x0=2;
	double error=pow(10,-8);
	double x;
	int n=300;
	double xmin=-10;
	double xmax=10;
	double dx=(xmax-xmin)/(n-1);
	ofstream myfile1("newton.txt");
	for(int i=0;i<n;i++)
	{
		double x=xmin+i*dx;
		myfile1<<x<<" "<<f(x)<<endl;
	}	
	cout<<newton(x0,error,f,df)<<endl;
}
