#include<iostream>

using namespace std;

void duplicatebval(int a, int b, int c)
{

  a*=3;
  b*=3;
  c*=3;

}

void duplicatebref(int& a, int& b, int& c)
 {
  	a*=2;
  	b*=2;
  	c*=2;
 }

template <class T>
T multiply (T a , T b) 
 {

   T result;
   result= a*b;
   return result; 

 }

template <class T, class U>
float sum(T a, U b)
{

   float sum;
   sum=a+b;
   return sum;

} 


int main()
{

 
int x=4 , y=5, z=6 ;
float v=3.14 , h=6.45;

duplicatebref(x,y,z);
cout << x << y << z << endl;



duplicatebval(x,y,z);
cout << x << y << z << endl;

int t=multiply<int>(x,y);
float u=multiply<float>(v,h);
cout << t << " " << u << endl;


float sun = sum(x,v);
cout << sun << endl;

return 0;


}
