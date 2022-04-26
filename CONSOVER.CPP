#include<iostream.h>
#include<conio.h>
class demo
{
   private:
      int x;

   public:
      demo()
      {
	 cout<<"\n Constructor with no parameter :";
      }
      demo(int a)
      {
	  x=a;
	  cout<<"\n Constructor with one parameter"<<x;
	  cout<<"\n Square of a :->"<<x*x;
      }
      demo(int a, int b)
      {
	  cout<<"\n Constructor with two parameters"<<a<<" "<<b;
	  cout<<"\n Square of a+b:-> "<<a+b;
      }
      demo(demo &d)
      {
	  cout<<"\n Copy Constructor";
	  x=d.x;
	  cout<<"\n Copied Value:-> "<<x;
      }
};
void main()
{
   clrscr();
     demo d1;
     demo d2(10);
     demo d3(20,30);
     demo d4(d2);
   getch();
}