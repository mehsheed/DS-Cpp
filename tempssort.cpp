#include <iostream>
using namespace std;
template <class T>



void SelectionSort(T a[],const int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        for (int k = i+1; k < n; k++)
        {


        if (a[k] < a[j]) {j = k;}
         T temp;
         temp = a[i];
         a[i]=a[j];
         a[j]= temp;

        }

    }

}



int main()
{
    int a[10] = {1,3,6,5};
    float b[10]= {1.1,3.1,6.1,5.1};
    int n = 4;

    SelectionSort(a,n);
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    SelectionSort(b,n);

    for(int i = 0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout << endl;

}
