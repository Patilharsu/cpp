#include<iostream.h>
#include<conio.h>
class stud
{
   private:
      int rollno;
      char name [20];

   public:
      void get();
      void display();
};
void stud::get()
{
   cout<<"Enter rollno:";
   cin>>rollno;
   cout<<"Enter name:";
   cin>>name;
   cout<<endl;
}
void stud::display()
{
   cout<<"Roll no: "<<rollno<<endl;
   cout<<"Name: "<<name<<endl;
   cout<<endl;
};
class mark:public stud
{
   protected:
      int m, m1;

   public:
      void get();
      void display();
};
void mark::get()
{
   stud::get();
      cout<<"Enter mark first sub:";
      cin>>m;
      cout<<"Enter mark second sub: ";
      cin>>m1;
      cout<<endl;
}
void mark::display()
{
   stud::display();
      cout<<"Mark first sub: ";
      cout<<"Mark second sub: ";
      cout<<endl;
}
class info
{
   private:
      int age;
      char add[10];

   public:
      void get();
      void display();
};
void info::get()
{
   cout<<"Enter age:";
   cin>>age;
   cout<<"Enter address:";
   cin>>add;
   cout<<endl;
}
void info::display()
{
   cout<<"Age: "<<age<<endl;
   cout<<"Address: "<<add<<endl;
   cout<<endl;
}
class result:public mark, public info
{
   private:
      int total;

   public:
      void get ();
      void display();
};
void result::get()
{
   mark::get();
   info::get();
   total=m+m1;
}
void result::display()
{
   mark::display();
   info:;display();
   cout<<"Total of three sub: "<<total<<endl;
}
void main()
{
   clrscr();
   result s;
   s.get();
   s.display();
   getch();
}