#include<iostream.h>
#include<conio.h>
template<class T>
void swap(T &x, T &y)
{
   T t;
   t=x;
   x=y;
   y=t;
}
void main()
{
   clrscr();
   char ch1, ch2;
   cout<<"\n Enter two characters :\n";
   cin>>ch1>>ch2;
   cout<<"\n-----------------------------------------------\n";

   cout<<"\n Before swapping:\n";
   cout<<"\nch1: \t"<<ch1;
   cout<<"\nch2: \t"<<ch2;
   swap(ch1,ch2);
   cout<<"\n On swapping:";
   cout<<"\nch1: \t"<<ch1;
   cout<<"\nch2: \t"<<ch2;
   cout<<"\n------------------------------------------------\n";

   int a,b;
   cout<<"\n Enter two integers :\n";
   cin>>a>>b;
   cout<<"\n-----------------------------------------------\n";

   cout<<"\n Before swapping:\n";
   cout<<"\na: \t"<<a;
   cout<<"\nb: \t"<<b;
   swap(a,b);
   cout<<"\n On swapping:";
   cout<<"\na: \t"<<a;
   cout<<"\nb: \t"<<b;
   getch();
}
