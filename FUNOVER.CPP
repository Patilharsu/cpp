#include<iostream.h>
#include<conio.h>
class fundemo
{
 public:
   void swap(int &,int &);
   void swap(char &,char &);
   void swap(float &,float &);
};
void fundemo :: swap (int &a, int &b)
{
   int t;
   t=a;
   a=b;
   b=t;
}
void fundemo::swap(char &p,char &q)
{
   char t;
   t=p;
   p=q;
   q=t;
}
void fundemo :: swap(float &m, float &n)
{
   float t;
   t=m;
   m=n;
   n=t;
}
void main()
{
  clrscr();
  fundemo f;

  int a,b;
  char p[10],q[10];
  float m,n;

  cout<<"\n\n Enter two integers a and b\t";
  cin>>a>>b;
  cout<<"\n\n Before swapping a and b is :\t"<<a<<"\t"<<b;
  f.swap(a,b);
  cout<<"\n\n After swapping a and b is :\t"<<a<<"\t"<<b;

  cout<<"\n\n Enter two characters p and q\t";
  cin>>p>>q;
  cout<<"\n\n Before swapping p and q is :\t"<<p<<"\t"<<q;
  f.swap(p[10],q[10]);
  cout<<"\n\n After swapping p and q is :\t"<<p<<"\t"<<q;

  cout<<"\n\n Enter two floats m and n\t";
  cin>>m>>n;
  cout<<"\n\n Before swapping m and n is :\t"<<m<<"\t"<<n;
  f.swap(m,n);
  cout<<"\n\n After swapping m and n is :\t"<<m<<"\t"<<n;

  getch();
}


