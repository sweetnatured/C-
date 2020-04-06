#include<iostream>
using namespace std;   // we define namespace because every entity is part of std and we dont use std :: !!!!

namespace first{

	string x = "first string";
}

namespace second{

	string x = "second string";
}

namespace third{

    string z = "using namespace is very clever way";

}

using namespace third;

int m;  // before assigned a number it is 0.


int main()
{
	
int x=10;
int y=20;
int t; // before assign a number it can be any number

{
	
   int x = 55;
   y= 150;

   cout << x << " " << y << endl;

}


cout << x << " " << y << endl;


cout << first::x << endl;                  
cout << second::x << endl;

cout << z << endl;
cout << t << endl;
cout << m << endl;

}