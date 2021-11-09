#include "std_lib_facilities.h"
 
int main( )
{
 double c1;
 double c2;
 double c3;
 double c4;
 c3=999;
 c4=1;
 cin>>c1>>c2;
 while (c1!=0 || c2!=0) 
 {
  cout<<c1<< " " <<c2<< "\n";
  if (c3>c1) c3=c1;
  if (c3>c2) c3=c2;
  if (c4<c1) c4=c1;
  if (c4<c2) c4=c2;
  if (c1<c2) cout<<c1<< " is smaller then " <<c2<< "\n";
  if (c1>c2) cout<<c2<< " is smaller then " <<c1<< "\n";
  if (c1==c2) cout<< "The numbers are equal " "\n";
  if (c1-c2>0 || c1-c2<1) cout<<"The numbers are almost equal" "\n";
  cout<<"The smallest number:" <<c3<< "\n";
  cout<<"The largest number:" <<c4<< "\n";
  cin>>c1;
  if (c1=0) break;
  cin>>c2;
  cout<<c1<< " " <<c2<< "\n";
 }
}
