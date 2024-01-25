#include<iostream>
#include<math.h>
using namespace std;

class point
{
   int x;
   int y;

   public:
   point(int a,int b) : x(a) , y(b) {}
   int getx()
   {
       return x;
   }
   int gety()
   {
      return y;
   }
   void setx(int a)
   {
      x = a;
   }
   void sety(int a)
   {
      y = a;
   }

   void distance(point &other)
   {
      int distance;
      distance = sqrt((((other.getx())-x)^2) + (((other.gety())-y)^2) );
      cout<<"Distance is: "<<distance; 
   }

};

int main()

{
   point p1(2,3);
   point p2(6,7);
   p1.distance(p2);
   return 0;
}