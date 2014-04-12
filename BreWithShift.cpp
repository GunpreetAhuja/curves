
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    float x,y,rad,scale , asp_hgt;
    int row,col, hgt,wth,a,b;
    char circle[500][500];
    cout<<" Enter the size of the plane: ";
    cin>>hgt>>wth;
    cout<<"\n Enter the scale factor: ";
    cin>>scale;
    cout<<" \n Enter the position of origin: ";
    cin>>a>>b;
    asp_hgt=hgt/1.5;  
    for(int row=0;row<hgt;row++)     
    {
        for(int col=0;col<wth;col++)
        {
            circle[row][col]=' ';
        }
    }

        // for horizontal axis
         for ( col=0; col<=wth; col++)
        {  
            row= asp_hgt/2;
            circle[row][col]='_';
        }
    
   //for vertical axis
    for (row=0;row<=asp_hgt;row++)
    {       

             col = wth/2;
            circle[row][col]='|';
    }
    cout<<"Enter the radius: ";
    cin>>rad;
    rad*=scale;              
    //for scaling   
   
    y=rad;
    x=0;
    int sum=2*x*x+2*y*y+4*x-2*y-2*rad*rad+3;
    b=-b;
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
       row=hgt/3+x*0.53+b*0.53;     
       //a and b for shift      

       col=wth/2+y+a;
       circle[row][col]='*';
       row=hgt/3-x*0.53+b*0.53;
       col=wth/2+y+a;
       circle[row][col]='*';
       row=hgt/3+x*0.53+b*0.53;
       col=wth/2-y+a;
       circle[row][col]='*';
       row=hgt/3-x*0.53+b*0.53;
       col=wth/2-y+a;
       circle[row][col]='*';
       row=hgt/3+y*0.53+b*0.53;
       col=wth/2+x+a;
       circle[row][col]='*';
       row=hgt/3-y*0.53+b*0.53;
       col=wth/2+x+a;
       circle[row][col]='*';
       row=hgt/3+y*0.53+b*0.53;
       col=wth/2-x+a;
       circle[row][col]='*';
       row=hgt/3-y*0.53+b*0.53;
       col=wth/2-x+a;
       circle[row][col]='*';
    }
    while(x<=y);
   
   for(int row=1;row<hgt/1.5;row++)
   {
       for(int col=1;col<wth;col++)
       {
           cout<<circle[row][col];
       }
       cout<<endl;
   }
   return 0;
}

