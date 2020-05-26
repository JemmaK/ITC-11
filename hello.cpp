#include<iostream>
int commit() {
	std::cout << "Second Commit" << std::endl;
}
int main() {
	std::cout << "Hello world!" << std::endl;
	commit();
	return 0;
}
