#include "std_lib_facilities.h"
 
int main( )
{
 string s1;
 string s2;
 double c1;
 double c4;
 double c3;
 c1=1;
 c3=999;
 c4=1;
 while (c1!=0) 
 {
  cout <<"Please enter a number:\n";
  cin>>c1;
  cout <<"Please enter a unit:\n";
  cin>>s2;
  if (s2 =="cm" || s2 =="in" || s2=="ft" || s2=="m") 
  {
	  s1=s2;
  } 
  else 
  {
	cout<<"Illegal unit \n";
	break;  
  }
    cout <<c1<< " " <<s1<<  "\n";
    if (s1=="ft")
    {
		s1="in";
		c1=c1*12;
	}
    if (s1=="in")
    {
		s1="cm";
		c1=c1*2.54;
	}
    if (s1=="cm")
    {
		s1="m";
		c1=c1/100;
	}
    if (c3>c1) c3=c1;
    if (c4<c1) c4=c1;

 } 
 cout<<"The smallest number in meter:" <<c3<< "\n";
 cout<<"The largest number in meter:" <<c4<< "\n";
}
