#include<iostream.h>
#include<conio.h>
class fbinary
{
   private:
      int a,b;
   public:
      void get();
      void show();
      fbinary friend operator +(fbinary f4,fbinary f5);
};
void fbinary::get()
{
   cout<<"enter a=";
   cin>>a;
   cout<<"enter b=";
   cin>>b;
}
fbinary operator +(fbinary f4,fbinary f5)
{
   fbinary f6;
   f6.a=f4.a+f5.a;
   f6.b=f4.b+f5.b;
   return (f6);
}
void fbinary::show()
{
   cout<<"Addition of two object is "<<endl;
   cout<<"Value of is a"<<a<<endl;
   cout<<"Value of b is"<<b<<endl;
}
void main()
{
   clrscr();
   fbinary f1,f2,f3;
   f1.get();
   f2.get();
   f3=f1+f2;
   f3.show();
   getch();
}
