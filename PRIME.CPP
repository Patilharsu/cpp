#include<iostream.h>
#include<conio.h>
class test
{
   public:
     int check(int x)
	{
	   int i,p=0;
	      for(i=2;i<x;i++)
		 {
		    if(x%i==0)
		      {
			 p=1;
			 break;
		      }
		 }
	      return p;
	}
};
void main()
{
  int x,p;
  clrscr();
  cout<<"Enter a Number :-> ";
  cin>>x;

  test obj;
  p=obj.check(x);

  if (p==0)
     {
	cout<<"Number is prime :"<<x;
     }
  else
     {
	cout<<"Number is not prime :"<<x;
     }

  getch();
}









