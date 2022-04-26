#include<iostream.h>
#include<conio.h>
class A
{
   protected:
      int x;
};
class B:public A
{
   protected:
      int y;
};
class C:virtual public B
{
   private:
      int z;

   public:
      void get();
      void display();
};
class D:virtual public B
{
   private:
      int p;

   public:
      void put ();
      void show();
};
void C::get()
{
   cout<<"Enter x:";
   cin>>x;
   cout<<"Enter y:";
   cin>>y;
   cout<<"Enter z:";
   cin>>z;
}
void C::display()
{
   cout<<"Value x:"<<x<<endl;
   cout<<"Value y: "<<y<<endl;
   cout<<"Value z:"<<z<<endl;
}
void D::put ()
{
   cout<<"Enter x:";
   cin>>x;
   cout<<"Enter y:";
   cin>>y;
   cout<<"Enter p:";
   cin>>p;
}
void D::show()
{
   cout<<"Value x:"<<x<<endl;
   cout<<"Value y: "<<y<<endl;
   cout<<"Value p:"<<p<<endl;
}
class F
{
   protected:
      int q;
};
class E:public F
{
   private:
      int r;

   public:
      void input ();
      void output ();
};
void E::input ()
{
   cout<<"Enter q:";
   cin>>q;
   cout<<"Enter r:";
   cin>>r;
}
void E::output ()
{
   cout<<"Value q: "<<q<<endl;
   cout<<"Value r:"<<r;
}
void main()
{
   clrscr();
   C s;
      s.get();

   D s1;
      s1.put ();

   E s2;
      s2.input ();

      s. display();

      s1.show();

      s2.output ();

   getch();
}