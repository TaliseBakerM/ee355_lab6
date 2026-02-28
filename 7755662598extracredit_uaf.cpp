#include <iostream>

using namespace std;

int main() {
	// Start by defining any pointer using dynamic allocation
	int *ptr = new int;
	// Set the value of the thing the pointer is pointing to to 5
	*ptr = 5;
	
	// Now delete this pointer, basically here the memory is deallocated 
	delete ptr;     
	
	// Here is the error, I (the programmer) accidentally called *ptr later 
	cout << *ptr << endl; 
	
	return 0;
}
