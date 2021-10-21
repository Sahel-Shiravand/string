#include "SahelString.h"

void SahelString::toUpperCase()
{
    for (auto & c: *this) c = toupper(c);
    /*unsigned int ch = std::string::size();
    while (ch--)
        if (std::string::at(ch)>='a' && std::string::at(ch)<='z') std::string::at(ch) -= 32;//A65a97)*/
}
//===========================================================
void SahelString::toLowerCase()
{
    for (auto & c: *this) c = tolower(c);
    /*unsigned int ch = std::string::size();
    while (ch--)
        if (std::string::at(ch)>='A' && std::string::at(ch)<='Z') std::string::at(ch) += 32;//A65a97)*/
}
//===========================================================
