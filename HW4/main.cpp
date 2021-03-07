#include <iostream>
#include "mergeVectors.cc"

void print(std::vector <int> const &z){
	for(int i = 0; i < z.size(); i++)
		std::cout << z.at(i) << ' ';

}

int main(){

	std::vector<int> a = {};

	std::vector<int> b = {};

	//print(mergeVectors(a,b));
	mergeVectors(a,b);

	return 0;

}
