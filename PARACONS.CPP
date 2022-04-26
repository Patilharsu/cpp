#include<iostream.h>
#include<conio.h>
class num
{
   private:
      int a, b, c;

   public:
      num(int k,int m,int n);
      void show()
      {
	 cout<<"\n"<<"a="<<a<<"b="<<b<<"c="<<c;
      }
};
num::num (int k,int m,int n)
{
a=k;
b=m;
c=n;
}
int main()
{
  clrscr();
  num z(10,11,12);
  z.show();

  getch();
  return 0;
}