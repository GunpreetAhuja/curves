#include<iostream>
using namespace std;

int main()
{
float r;
cout<< ” Enter the Radius”;
cin>>  r;
float pr = 2;
// pr is the aspected pixel ratio which is almost equal to 2

for (int i = -r; i <= r; i++)
// loop for horizontal movement

{
for (int j = -r; j <= r; j++)
// loop for vertical movement

{
float d = ((i*pr)/r)*((i*pr)/r) + (j/r)*(j/r);
//multiplying the i variable  with pr to equalize pixel-width with the height

if (d >0.90 && d<1.1)
// approximation

{
cout << “*”;
}
else
{
cout << ” “;
}
}
cout << endl;
}
return 0;
}
