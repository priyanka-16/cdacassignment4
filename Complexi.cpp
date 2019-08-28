#include<iostream>
using namespace std;
class Complexi
{
	public:
	int real;
	int img;
	Complexi()=default;
	Complexi(int n, int m):real(n), img(m)
	{
	}
	void get()
	{	cout<<"\n\tEnter real : ";
                    cin>>real;

                    cout<<"\n\tEnter Imaginary : ";
                    cin>>img;
	      
	}
//	void Display(int num)
//	{
//		if(real==num)
  //      {cout<<"Found in c";
    //    }
	//	cout<<"real:"<<real;
//	}
};
int main()
{
	int num;
	cout<<"Enter no. u want to search";
	cin>>num;
	Complexi c[10];
        for(int i=0; i < 3; i++)
	{	cout<<"\nEnter real & imaginary of  "<<i+1<<" number";
                   c[i].get();
	}

	for(int i=0;i<3;i=i+1)
    	{
        if(c[i].real==num)
        {
            cout<<"Present in object:"<<(i+1)<<endl;
            cout<<"real= "<<c[i].real;
            return 0;
        }
    }
    cout<<"Object not found with matching values";
    return 0;
	
	//c.Display(num);
	//c1.Display(num);
}

