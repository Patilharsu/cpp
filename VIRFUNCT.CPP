#include<iostream.h>
#include<conio.h>
class base
{
   public:
      void display()
	 {
	    cout<<"\n Display() in Base Class.....";
	 }
      virtual void show()
	 {
	    cout<<"\n Show() in Base Class.....";
	 }
};
class derived:public base
{
   public:
      void display()
	 {
	    cout<<"\n Display() in Base Class.....";
	 }
      void show()
	 {
	    cout<<"\n Show() in Derived Class....";
	 }
};
void main()
{
   clrscr();
      base *b;  //Base Class pointer
	 base b1; //base class object
	    b=&b1;   //Base Class Object Address
	       b->display();
	       b->show();

	 derived d;
	    b=&d;
	       b->display();
	       b->show();
   getch();
}
