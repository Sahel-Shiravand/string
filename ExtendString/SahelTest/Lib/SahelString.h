#ifndef SAHELSTRING_H
#define SAHELSTRING_H
#include <string.h>
#include <sstream>

class SahelString:public std::string
{
public:
    SahelString() {}
    template<typename tmpl>SahelString (tmpl s1);
    template<typename tmpl>void operator = (tmpl &s1);
    template<typename tmpl>SahelString& operator << (tmpl s1);
    template<typename tmpl>SahelString operator + (tmpl s1);
    template<typename tmpl>SahelString& operator >> (tmpl &s1);
    template<typename tmpl>void operator |= (tmpl &s1);
    void toUpperCase();
    void toLowerCase();
private:
    //std::string value;
};
//===========================================================
template<typename tmpl> SahelString::SahelString(tmpl s1)//:std::string{}
{
    std::stringstream ss;
    ss<<s1;
    std::string::operator = (ss.str());
}
//===========================================================
template<typename tmpl> void SahelString::operator=(tmpl &s1)
{
    std::stringstream ss;
    ss<<s1;
    std::string::operator = (ss.str());
}
//===========================================================
template<typename tmpl> SahelString& SahelString::operator << (tmpl s1){
    std::stringstream ss;
    ss<<s1;
    std::string::operator += (ss.str());
    return *this;
}
//===========================================================
template<typename tmpl> SahelString SahelString::operator + (tmpl s1){
    SahelString as;
    as = *this;
    as<<s1;
    return as;
}
//===========================================================
template<typename tmpl>SahelString& SahelString::operator >> (tmpl &s1){
    std::stringstream ss;//WARNING DON'T USE ss(*this) BEACUASE THE POSITION WILL NOT SET AND tellp RETURN ZERO!
    ss<<*this;
    ss>>s1;
    if (static_cast<size_type>(ss.tellg()) != std::string::npos && static_cast<size_type>(ss.tellp()) != std::string::npos)
        std::string::operator = (ss.str().substr(ss.tellg(),ss.tellp()-ss.tellg()));
    else std::string::operator = ("");
    return *this;
}
//===========================================================
template<typename tmpl>void SahelString::operator |= (tmpl &s1){
    std::stringstream ss;//WARNING DON'T USE ss(*this) BEACUASE THE POSITION WILL NOT SET AND tellp RETURN ZERO!
    ss<<*this;
    ss>>s1;
}
//===========================================================

#endif // SAHELSTRING_H
