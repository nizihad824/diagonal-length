
#include<iostream>
#include<math.h>

using namespace std;


void printDiagonalLength(int x, int y) {
    double dlength = sqrt((x*x)+(y*y)) *1.0;

    // rectangle diagonal length using Pythagoras theorem
    cout<<"Diagonal Length:     "<<dlength<<endl;


}

bool isCorrect(int a, int b, int c, int d)
{    //checking upper left & lower right value is correct or not
    if(a<c && b>d)return true; 
    else return false;
}

void makeBigSquare(int x, int y, int x1, int y1, int x3, int y3, int x4, int y4)
{
    int a,b,c,d;
    if(x>=y)
    {
        a = x1 + x;
        b = y1;  // big square upper right co-ordinate
        c = x3 + x;
        d = y3;  //big square lower right co-ordinate
        cout<<"Upper left corner:  ("<<x1<<","<<y1<<")"<<endl;
        cout<<"Lower right corner: ("<<c<<","<<d<<")"<<endl;
        cout<<"Area Rectangle:      "<<x*x<<endl;
    }
    else
    {
        a = x1;
        b = y1 - y;
        c = x4;
        d = y4 -y;
        cout<<"Upper left corner:  ("<<x1<<","<<y1<<")"<<endl;
        cout<<"Lower right corner: ("<<c<<","<<d<<")"<<endl;
        cout<<"Area Rectangle:      "<<y*y<<endl;
    }
}
int main()
{
     cout<<"---------------------------------------------------------------------- "<<endl;
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cout<<"Input Upper left corner : ";
    cin>>x1>>y1;
    cout<<"Input Lower right corner: ";
    cin>>x2>>y2;

    x3 = x1;
    y3 = y2;  // lower left corner
    cout<<"Upper left corner :   ("<<x1<<","<<y1<<")"<<endl;
    x4 = x2;
    y4 = y1;  // upper right corner
    cout<<"Lower right corner:  ("<<x2<<","<<y2<<")"<<endl;


    // rectangle side length using a = sqrt(b*b+c*c) formula
    int side1 = sqrt(((x1-x3)*(x1-x3)) + ((y1-y3))*(y1-y3));
    int side2 = sqrt(((x3-x2)*(x3-x2)) + ((y3-y2))*(y3-y2));

    cout<<"Area rectangle:      "<< side1*side2<<endl;

    printDiagonalLength(side1,side2);



    //calling function by value
    if(isCorrect(x1,y1,x2,y2))
        cout<<"Rectangle is correctly stored"<<endl;
    else
        cout<<"Rectangle is not correctly stored"<<endl;

    makeBigSquare(side1, side2, x1, y1, x3,y3, x4,y4);


    return 0;
}
