//Selection sort algo
#include <iostream>
using namespace std;
void swapin(int &x,int &y)
{
    int temp = x;
    x =y;
    y=temp;


}
void display(int a[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout<<"Size of array :";
    cin>>n;

    int a[n];
    int min_ind=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int pass,j;

    for(pass =0;pass <n-1;pass++)
    {

        min_ind=pass;
        for(j=pass+1;j<n;j++)
        {
            if(a[j]<a[min_ind])
            {
                min_ind=j;

            }
            swapin(a[pass],a[min_ind]);


        }


    }
    display(a,n);

}

