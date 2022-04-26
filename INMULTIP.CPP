#include<iostream.h>
#include<conio.h>
class student
{
   private:
      int rollno;
      char name[15];

   public:
      void getinfo();
      void show();
};
class mark
{
   protected:
      int m1, m2, m3;

   public:
      void getdata();
      void display();
};
class  result: public student, public mark
{
   private:
      int total;

   public:
      void gettotal();
      void showtotal();
};
void student :: getinfo()
{
   cout<<"enter Roll number of student";
   cin>>rollno;
   cout<<"enter name of student ";
   cin>>name;
}
void mark ::getdata ()
{
   cout<<"enter marks of three subject "<<endl;
   cout<<"enter marks of first subject";
   cin>>m1;
   cout<<"enter marks of second subject";
   cin>>m2;
   cout<<"enter marks of third subject";
   cin>>m3;
}
void student::show()
{
   cout<<"\n\nRoll number of Student is:- "<<rollno<<endl;
   cout<<"Name of Strudent is:- "<<name<<endl;
}
void mark::display()
{
   cout<<"Marks of Three subjects are"<<endl;
   cout<<"Marks of First subject is:- "<<m1<<endl;
   cout<<"Marks of Second subject is:- "<<m2<<endl;
   cout<<"Marks of Third subject is:- :"<<m3<<endl;
}
void result::gettotal()
{
   getinfo();
   getdata();
   total=m1+m2+m3;
}
void result:: showtotal()
{
   show();
   display();
   cout<<"total of Marks is:-"<<total;
}
void main()
{
   clrscr();
   result r;
   r.gettotal();
   r.showtotal();
   getch();
}