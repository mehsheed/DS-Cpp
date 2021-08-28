
#include <iostream>
#include "stacktemp.h"
using namespace std;


bool areBracketsMatched(string exp)
{
    sta<char> s;
    char x;
    int i=0;


    while(exp[i]!='\0')
    {
        if (exp[i] == '(' || exp[i] == '['
            || exp[i] == '{')
        {

            s.push(exp[i]);


        }


        if (s.isUnderflow())
            return false;

        switch (exp[i]) {
        case ')':


            x = s.top;
            s.pop();
            if (x == '{' || x == '[')
                {
                    return false;

                }

            break;

        case '}':


            x = s.top;
            s.pop();
            if (x == '(' || x == '[')
                {
                    return false;

                }
            break;

        case ']':


            x = s.top;
            s.pop();
            if (x == '(' || x == '{')
                {
                    return false;

                }
            break;
        }
        i++;

    }



    return (s.isUnderflow());
}


int main()
{
    string exp ="(9+5)}" ;
    if (areBracketsMatched(exp))
        cout << "Matched";
    else
        cout << "Not Matched";



}







