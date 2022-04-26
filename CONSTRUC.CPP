#include<iostream.h>
#include<conio.h>
class num
{
   private:
      int a, b, c;

   public:
      num();
      void show ()
      {
	 cout<<"\n"<<"a="<<a<<"b="<<b<<"c="<<c;
      }
};
num::num ()
{
   cout<<"\n constructor called:";
   cout<<"\n enter the value for a,b & c:";
   cin>>a>>b>>c;
}
void main()
{
clrscr();
class num x;
x.show();
getch();
}