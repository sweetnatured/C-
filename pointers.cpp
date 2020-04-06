#include<iostream>

using namespace std;

void increment_print_list(const void* start, const void* ending, int psize)
{

   if ( psize == sizeof(char)){	
   
   const char * current = (char*)start;
  
   while (current != ending)
   {


      cout << *current++ << endl ;


   }
}

else
{

	const int * current = (int*)start;
  
   while (current != ending)
   {


      cout << *current++ << endl ;


   }

}

}



int main(){

/*
	int firstvalue, secondvalue ;
	int *pointer ;

	pointer = &firstvalue;
	*pointer = 10;

	pointer = &secondvalue;
	*pointer = 20;

	cout << firstvalue << endl;
	cout << secondvalue << endl;
 
*/
    int numbers[5] ={5,10,11,20,25}; 

    const char * foo = "salih"; 

    int *p;

    p=numbers;
/*
    cout << *p << endl ;  // takes data
    
    cout << ++(*p) << endl; // takes data increase it

    cout << *(++p) << endl; // move pointer to next and read

    cout << *(p++) << endl; // read data and then pointer to next

    cout << (*p)++ << endl; // read data and increase it
    
    cout << numbers << endl;
*/
    increment_print_list(numbers,numbers+5,sizeof(numbers)); // use different functıon or change variable types to int at function parameter.
    
    cout << foo+5 << endl;

    cout << sizeof(*foo);

   increment_print_list(foo,foo+5,sizeof(*foo));










}