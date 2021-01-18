#include <iostream>
using namespace std;
int main()
{
    int n,area,r,l,b;
    cout<<"Enter the number of the shape to find its area!";
    cout<<"\nPress 1 for circle, 2 for triangle and 3 for rectangle: ";
    cin>>n;
    switch(n)
    {
        case 1 :
            {
            cout<<"Enter radius of the circle\n";
            cin>>r;
            area=3.14*r*r;
            cout<<"Area of the circle is: " <<area;
            }
            break;
        case 2 :
            {
            cout<<"\nEnter height of the triangle: ";
            cin>>l;
            cout<<"\nEnter base of the triangle: ";
            cin>>b;
            area=(l*b) / 2 ;
            cout<<"\nArea of the triangle is: " <<area;
            }
            break;
        case 3 :
            {
            cout<<"\nEnter length of the rectangle: ";
            cin>>l;
            cout<<"\nEnter the breadth of the rectangle: ";
            cin>>b;
            area= l*b ;
            cout<<"\nArea of the rectangle is: " <<area;
            }
            break;
        default :
            cout<<"\nInvalid selection!";
    }
    return 0;
}
