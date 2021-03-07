/*
 * Name: Sinan Bayati
 * Date: 3/2/2021
 * HW Number: 4
 * ID: 011269570
 */

#include "mergeVectors.h"
#include <iostream>
#include <algorithm>

std::vector <int> mergeVectors(const std::vector<int> &a, const std::vector<int> &b){

	std::vector<int> result = a;

	for (int i = 0; i < b.size(); i++){
		result.push_back(b[i]);
	}
	std::sort(result.begin(), result.end());

	return result;

}
