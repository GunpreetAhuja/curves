#include<iostream>
using namespace std;
int main()
{
int r;
cout<< “Enter the value of the a in focus(a,0):”;
cin>>r;
float c=2;
// pr is the aspected pixel ratio which is almost equal to 2

float a = c*r;
//multipyling the radius with c to equalize pixel-width with the height

cout<<”Parabola with “<<r<<” as focus:\n\n”;
for (int x=0; x<=r; x++)
// loop for horizontal movement

{
for( int y=-a; y<=a; y++)
// loop for vertical movement

{
float d=(4*a*x)/(y*y);
if ((d >0.9 && d<1.1) || (y*y >= 4*a*x-25 && y*y <= 4*a*x+25))
// approximation

{
cout << “*”;
}
else
{
cout<<” “;
}
}
cout<< endl;
}

return 0;

}
