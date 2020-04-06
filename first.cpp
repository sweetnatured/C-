#include<iostream>

using namespace std;

#define PI 3.14 


int main(void)
{
	int const r= 10;
	double x = 20;
	string Hello = "Hello Dünya" ;
	cout << Hello << endl ;
	cout << 10 * PI << endl ;
    string c = (r > x) ? "bir" : "iki" ;
    cout << c << endl ;

    return 0;
}