#include <iostream>
using namespace std;
template <class T>
T swapin (T *a, T *b)
{

    T temp;
    temp = *a;
    *a=*b;
    *b=temp;


}

int main()
{
    int x = 3;
    int y = 10;
    cout <<"Before Swapin"<<endl;
    cout<<x<<" "<<y<<endl;


    swapin(&x,&y);
    cout <<"Before Swapin"<<endl;
    cout<<x<<" "<<y;

     float m=2.3;
     float n = 5.6;
     cout <<"Before Swapin"<<endl;
    cout<<m<<" "<<n<<endl;
    swapin(&x,&y);
    cout <<"After Swapin"<<endl;
    cout<<n<<" "<<n<<endl;




}
