#include <iostream>
using namespace std;
template <class T>
T largest(T a[],int n)
{
    T L;
    L = a[0];
    for(int i=1;i<n;i++)
    {
        if (a[i]>L)
        {
            L = a[i];


        }
    }
    return L;

}



int main ()
{
    int n;
    cin>>n;


    int a [n];

    for(int i=0;i<n;i++)
    {

        cin>>a[i];

    }
    cout <<largest(a,n);

}
