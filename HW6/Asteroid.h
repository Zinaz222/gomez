/*
 * Name: Sinan Bayati
 * Date: 3/20/2021
 * HW Number: 6
 * ID: 011269570
 */

#ifndef Asteroid_h
#define Asteroid_h

#include <vector>
enum direction {left=0, right=1};
struct Asteroid{
	int m;
	direction d;
};
int countHits(const std::vector<Asteroid> &a);

#endif
