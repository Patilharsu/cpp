#include<iostream.h>
#include<conio.h>
 class student
 {
   private:
   int roll_no;
   char s_name[20];
   char s_class[30];

   public:
     void get();
     void put();
 };
 class marks : public student
 {
   private:
     int m1,m2,m3,total;

   public:
     void getmarks();
     void putmarks();
 };
     void student :: get()
 {
    cout<<"Enter Roll no";
    cin>>roll_no;
    cout<<"Enter name";
    cin>>s_name;
    cout<<"Enter class";
    cin>>s_class;
 }
 void student :: put()
 {
  cout<<"Roll no is "<<roll_no<<endl;
  cout<<"name is "<<s_name<<endl;
  cout<<"class is "<<s_class<<endl;
 }
 void marks :: getmarks()
 {
  cout<<"Enter s1 marks"<<endl;
  cin>>m1;
  cout<<"Enter s2 maarks"<<endl;
  cin>>m2;
  cout<<"Enter s3 marks"<<endl;
  cin>>m3;
  total=m1+m2+m3;
 }
 void marks :: putmarks()
 {
   cout<<"marks in s1"<<m1<<endl;
   cout<<"marks in s2"<<m2<<endl;
   cout<<"marks in s3"<<m3<<endl;
   cout<<"total of marks is"<<total;
 }
 void main()
 {
   clrscr();
   marks s1;
   s1.get();
   s1.getmarks();
   s1.put();
   s1.putmarks();
   getch();
 }