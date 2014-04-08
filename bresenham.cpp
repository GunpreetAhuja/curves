#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
float x,y,rad;
int row,col, hgt,wth;
char circle[500][500];
cout<<” Enter the size of the plane: “;
// to define the coordinate plane

cin>>hgt>>wth;
for(int r=0;r<hgt;r++)
//define the array to store the points to be plotted

{
for(int c=0;c<wth;c++)
{
circle[r][c]=’ ‘;
}
}
cout<<”Enter the radius: “;
cin>>rad;
y=rad;
x=0;
int sum=2*x*x+2*y*y+4*x-2*y-2*rad*rad+3;
//sum, the decision variable, used in bresenham algorithm

do
{
if(sum<0)
{
x=x+0.5;
sum=sum+4*x+6;
// to compute the next point when sum<0

}
else
{
x=x+0.5;
y=y-0.5;
sum=sum+4*(x-y)+10;
// to compute the next point when sum>0

}
row=hgt/3+x*0.53;
// reaching the middle of the graph height-wise as per the 1.5 pixel ratio (2*1.5=3)

col=wth/2+y;
//reaching the middle of the graph width-wise

circle[row][col]=’*’;
row=hgt/3-x*0.53;
//computing the row and the column number to reach the point on the plane and store them in the array circle

col=wth/2+y;
circle[row][col]=’*’;
row=hgt/3+x*0.53;
//rest points are plotted as per the symmetry of the circle (7 more points can be obtained from a single point coordinates)

col=wth/2-y;
circle[row][col]=’*’;
row=hgt/3-x*0.53;
col=wth/2-y;
circle[row][col]=’*’;
row=hgt/3+y*0.53;
col=wth/2+x;
circle[row][col]=’*’;
row=hgt/3-y*0.53;
col=wth/2+x;
circle[row][col]=’*’;
row=hgt/3+y*0.53;
col=wth/2-x;
circle[row][col]=’*’;
row=hgt/3-y*0.53;
col=wth/2-x;
circle[row][col]=’*’;
}
while(x<=y);
// the condition to be satisfied for bresenham algorithm

for(int r=1;r<hgt/1.5;r++)
// print the array to display the circle

{
for(int c=1;c<wth;c++)
{
cout<<circle[r][c];
}
cout<<endl;
}
return 0;
}
