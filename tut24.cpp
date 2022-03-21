#include <iostream>
using namespace std;
class copystring
{
    string str;
public:
    copystring(string stra)
    {
        str = stra;
    }
   copystring(copystring &a)
   {
       str=a.str;
   }
   string strcpy()
   {
       return str;
   }
};
int main()
{
    string stra, strb;
    cout << "enter an string:";
    cin >> stra;
    cout<<stra<<endl;
    copystring a(stra);
    copystring b=a;
    strb=b.strcpy();
    cout<<strb;

    return 0;
}