#include <iostream>
#include <vector>
#include "Asteroid.cc"

int main(){
	std::vector<Asteroid> a1 = {{5, right}, {10, right}, {5, left}};
	std::cout<<countHits(a1)<<std::endl;
	std::vector<Asteroid> a2 = {{5, left}, {10, left}, {5, left}};
	std::vector<Asteroid> a3 = {{-5, right}, {10, right}, {5, left}};
	std::vector<Asteroid> a4 = {{5, right}, {5, left}, {5, right}, {4, left}};
	std::cout<<countHits(a2)<<std::endl;
	std::cout<<countHits(a3)<<std::endl;
	std::cout<<countHits(a4)<<std::endl;
	return 0;
}
