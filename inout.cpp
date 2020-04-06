#include<iostream>

using namespace std ;

int main(void)
{

	int age = 23 ;
	float number = 1864.843215;

	cout <<"hello my... and ı am " << age << " and the random number " << number << endl ;
   
   /*
    int i;

    cout << "Enter the number : " ;
    cin  >> i ;
    cout << "The  square of entered number is " << i*i << endl;
    */
    
    string a;
    
    cout << "Enter the string " ;
    getline(cin,a);
    cout << "The message is : " << a << endl;


    return 0 ;

}