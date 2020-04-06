#include<iostream>

using namespace std;


int main(){


int number[3]={0,1,2};

cout << number[2] << endl;

string chrs[] = {"s","a","l","i","h"};

for(int i=0; i<sizeof(chrs); i++)

{

    cout << chrs[i] <<endl;

}


int arry[2][3] = {{4,5,6},{7,8,9}};

for (int i=0; i<2; i++)
{

	for (int y=0; y<3 ; y++)
	{

         cout << arry[i][y] << endl;

	}

}


char myword[] = { 'H', 'e', 'l', 'l', 'o', '\0' };        //Both of them are 6 characters.
char myword[] = "Hello"; 


return 0;


}