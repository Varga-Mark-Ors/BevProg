#include "std_lib_facilities.h"
 
int main( )
{
cout << "Please enter two names!\n";
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    if (s1==s2) cout<<"Same name\n";
    if (s1<s2) cout<<s1<<" is alphabetically before "<<s2<<"\n";
    if (s1>s2) cout<<s1<<" is alphabetically after "<<s2<<"\n";
    return 0;
}
