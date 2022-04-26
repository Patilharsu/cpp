#include<iostream.h>
#include<conio.h>
class student
{
   private:

      int m1,m2,roll_no,total;
      float avg;
      char name[20];

   public:

      void get();
      void put();
};
void student :: get()
{
   cout<<"\n\nEnter Roll No :-> "<<endl;
   cin>>roll_no;
   cout<<"Enter Name :-> "<<endl;
   cin>>name;
   cout<<"Enter Marks in subject 1 :-> "<<endl;
   cin>>m1;
   cout<<"Enter Marks in subject 2 :-> "<<endl;
   cin>>m2;
}
void student :: put()
{
   total=0;
   total=m1+m2;
   avg=total/2;
   cout<<"\n\n--------------------output--------------------";
   cout<<"\n roll number = \t\t";
   cout<<roll_no;
   cout<<"\n name = \t\t";
   cout<<name;
   cout<<"\n marks in subject 1 = \t";
   cout<<m1;
   cout<<"\n marks in subject 2 = \t";
   cout<<m2;
   cout<<"\n total marks = \t\t";
   cout<<total;
   cout<<"\n average = \t\t";
   cout<<avg;
}
void main()
{
   clrscr();
   student s;
   s.get();
   s.put();
   getch();
}