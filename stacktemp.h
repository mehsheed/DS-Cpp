
#include <iostream>
using namespace std;
#define Size 100
template  <class T>
class sta{

public :

T Stack[Size];
int top=-1;

bool isUnderflow()
{
    if(top<=-1)
        return true;
    return false;
}
bool isOverflow()
{
    if(top==Size-1)
    {
        return true;
    }
    return false;


}
void push(T val) {
   if(isOverflow())
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      Stack[top]=val;
   }
}
void pop() {
   if(isUnderflow())
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< Stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:"<<endl;
      for(int i=top; i>=0; i--)
      cout<<" | "<<Stack[i]<<" | "<<endl<<"  ---"<<endl;
      cout<<endl;
   } else
   cout<<"Stack is empty";
}

int tp()
{
    return this->top;

}
};
