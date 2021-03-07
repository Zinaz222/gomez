#include <iostream>
#include "mergeVectors.cc"

void print(std::vector <int> const &z){
	for(int i = 0; i < z.size(); i++)
		std::cout << z.at(i) << ' ';

}

int main(){

	std::vector<int> a = {2, 5};

	std::vector<int> b = {1, 3};

	print(mergeVectors(a,b));
	//mergeVectors(a,b);

	return 0;

}
