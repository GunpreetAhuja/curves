

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
float x,y,rad,scale;
int row,col, hgt,wth;
char circle[500][500];
cout<<” Enter the size of the plane: “;
cin>>hgt>>wth;
cout<<”\n Enter the scale factor: “;
cin>>scale;
for(int r=0;r<hgt;r++)
{
for(int c=0;c<wth;c++)
{
circle[r][c]=’ ‘;
}
}
cout<<”Enter the radius: “;
cin>>rad;
rad*=scale;
//for scaling to the appropriate size

y=rad;
x=0;
int sum=2*x*x+2*y*y+4*x-2*y-2*rad*rad+3;
do
{
if(sum<0)
{
x=x+0.5;
sum=sum+4*x+6;
}
else
{
x=x+0.5;
y=y-0.5;
sum=sum+4*(x-y)+10;
}
row=hgt/3+x*0.53;
col=wth/2+y;
circle[row][col]=’*’;
row=hgt/3-x*0.53;
col=wth/2+y;
circle[row][col]=’*’;
row=hgt/3+x*0.53;
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

for(int r=1;r<hgt;r++)
{
for(int c=1;c<wth;c++)
{
cout<<circle[r][c];
}
cout<<endl;
}
return 0;
}

