#include <iostream>
#include <string>
#include "lib/SahelString.h"

using namespace std;
/*class SahelString{//: public string{
public:
    SahelString();
    SahelString(const char* c1);
    SahelString(double d1);
    ~SahelString();
    unsigned int len();
    void operator =(const char * ch101);
    void operator =(const SahelString &ss01);
    void operator +=(const char* ch01);
    SahelString& operator +(const SahelString &ss01){
        SahelString rslt("abcd");
        return temp;
    }
    //string str;
private:
    SahelString temp;
    unsigned int len01 = 0;
    char* value;
};*/
int main()
{
    /*int j = function01();
    j = 567;
    int m = j;
    string str(4.2);
    SahelString mystr, mystr2("abcd"), mystr3(4.2);//, mystr 4 = SahelString(16);
    mystr = "abcdefg";
    mystr += "hijklmnop";
    //"abcd" = "sadasdsad";
    mystr += 4.4;
    int i = 5;
    float f;
    cin >> f;//3.23
    mystr = mystr2 + mystr3 + i + f;// abcd4.253.23//mystr.operator=(mystr2.operator+(mystr3));
    cout<< mystr.str.length();
    //cout << mystr;*/
    //================================================================================
    SahelString as;
    cin >> as;
    as << "my ";
    as<<" age is "<<20<<"\n";
    cout << as;
    return 0;
}
