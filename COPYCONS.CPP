#include<iostream.h>
#include<conio.h>
class sample
{
   private:
      int a;

   public:
     sample (int x);
     sample (sample &A);
};
sample::sample(int x)
{
   a=x;
   // b=y;
   cout<<"a="<<a<<endl;
// cout<<"b="<<b<<endl;
}
sample::sample(sample &A)
{
a=A.a;
cout<<"a="<<a<<endl;
}
void main()
{
clrscr();
sample s(10);
sample s1=s; //Copy Constructor Called
getch();
}