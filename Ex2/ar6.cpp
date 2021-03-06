#include<iostream>
#include<math.h>

using namespace std;

void transpose(double*a,int n)
{
	double*temp=new double(n);
	int N=sqrt(n);
	for(int i=0;i<N;i++)
	 {
	for(int j=0;j<N;j++)
	    {
	      temp[j+i*N]=a[i+j*N];
	    }
	  }
}


void product(double*a,double*b,int n)
{
	double*c=new double(n);
	int N=sqrt(n);
	for(int i=0;i<N;i++)
	 {
	for(int j=0;j<N;j++)
	    {
		c[j+i*N]=0;
	for(int k=0;k<N;k++)
		{
	      c[j+i*N]+=a[k+i*N]*b[j+k*N];
		}
	    }
	  }
}

void print_matrix(double*a,int n)
{
	int N=sqrt(n);
	for(int i=0;i<N;i++)
	  {
	for(int j=0;j<N;j++)
	   {
	    cout<<a[j+i*N]<<" ";
	   }
	  cout<<"\n";
	  }
}

int main()
{
  int n=9;
  double*a=new double(9);
  a[0]=1;
  a[1]=-1;
  a[2]=0;
  a[3]=0;
  a[4]=1;
  a[5]=2;
  a[6]=2;
  a[7]=-1;
  a[8]=0;
  cout<<"\nThe transpose of the matrix is : "<<endl;
  transpose(a,9);
  cout<<"\nThe product of the matrix and its transpose is : "<<endl;
  product(a,transpose(a,9),9);
}
