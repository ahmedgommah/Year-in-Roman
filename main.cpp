
#include <iostream>
using namespace std;
int main()
{

int year, array1[4],number;
    bool boolean=true;
    while (boolean)
    {
        cout<<" please Enter a year : ";
        cin>> year;
        for(int i=3; i>=0; i--)
        {
            array1[i]=year%10;
            year/=10;
        }
        cout<<"the year in roman is : ";
        for(int i=0 ; i<4 ; i++)
        {
            if (i==0)
            {
                if (array1[i]==1)
                {
                    cout<<"|";
                }
                else if (array1[i]==2)
                {
                    cout<<"||";
                }
                else if (array1[i]==3)
                {
                    cout<<"|||";
                }
            }
            else if (i==1)
            {
                if (array1[i]==1)
                {
                    cout<<"C";
                }
                else if (array1[i]==2)
                {
                    cout<<"CC";
                }
                else if (array1[i]==4)
                {
                    cout<<"CD";
                }
                else if (array1[i]==5)
                {
                    cout<<"D";
                }
                else if (array1[i]==9)
                {
                    cout<<"CM";
                }
            }
            else if (i==2)
            {
                if (array1[i]==1)
                {
                    cout<<"X";
                }
                else if (array1[i]==2)
                {
                    cout<<"XX";
                }
                else if (array1[i]==3)
                {
                    cout<<"XXX";
                }
                else if (array1[i]==4)
                {
                    cout<<"XL";
                }
                else if (array1[i]==5)
                {
                    cout<<"L";
                }
                else if (array1[i]==6)
                {
                    cout<<"LX";
                }
                else if (array1[i]==7)
                {
                    cout<<"LXX";
                }
                else if (array1[i]==8)
                {
                    cout<<"LXXX";
                }
                else if (array1[i]==9)
                {
                    cout<<"XC";
                }
            }
            else if (i==3)
            {
                if (array1[i]==1)
                {
                    cout<<"|";
                }
                else if (array1[i]==2)
                {
                    cout<<"||";
                }
                else if (array1[i]==3)
                {
                    cout<<"|||";
                }
                else if (array1[i]==4)
                {
                    cout<<"|V";
                }
                else if (array1[i]==5)
                {
                    cout<<"V";
                }
                else if (array1[i]==6)
                {
                    cout<<"V||";
                }
                else if (array1[i]==7)
                {
                    cout<<"V|||";
                }
                else if (array1[i]==8)
                {
                    cout<<"V||||";
                }
                else if (array1[i]==9)
                {
                    cout<<"lX";
                }
            }
        }
        cout<<endl;
        cout<<"you want to continue press 1 "<<endl;
        cout<<"you want to end it press 2 "<<endl;
        cout<<">>";
        cin>>number;
        if(number==2)
        {
            boolean=false;
        }
    }
    return 0;
}
