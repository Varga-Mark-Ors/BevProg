#include "std_lib_facilities.h"
 
int main( )
{
    cout << "Please enter your name!\n";
    string first;
    cin>>first;
    string s3;
    cin>>s3;
    cout<< "Please enter your age!\n";
    int age;
    cin>>age;
    int c2=age + 2;
    string s2=first+" Jr.";
    cout<<"Hello," <<s2<< " " <<s3<< " age " <<c2<< "!\n";
    return 0;
}
