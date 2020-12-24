#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Enter a number:- "<<endl;
    cin >> x;
    cout << "____________________________"<<endl;
    cout << x <<"!"<< " = ";
    cout << x;
    for(int i = x - 1; i > 0; --i)
    {
      cout << "*" << i;
      x = x * i;
    }
    cout<<" = "<<x<<endl;
    cout<<"____________________________"<<;
    

  

    return 0;
}