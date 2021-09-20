#include "std_lib_facilities.h"
 
int main( )
{
    cout << "Please enter two names!\n";
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    cout <<"Dear " <<s1<< ".How are you?\n";
    cout <<"Dear " <<s2<< ".I am fine.How are you?\n";
    cout <<"Dear " <<s1<< ".I am fine to?\n";
    cout << "Please enter a name!\n";
    string s3;
    cin>>s3;
    cout <<"Dear " <<s1<< ".Have you seen " <<s3<< " lately?\n";
    cout <<"Dear " <<s2<< ".No!\n";
}
