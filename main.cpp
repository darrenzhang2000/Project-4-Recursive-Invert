#include "LinkedList.hpp"
#include <iostream>

int main(){
	LinkedList<std::string> A;
	A.insert(0, "apple");
	A.insert(1, "banana");
	A.insert(2, "cat");
	std::cout << A.getEntry(0) << " " << A.getEntry(1) << " " << A.getEntry(2);
	A.invert();
	std::cout << A.getEntry(0);
}