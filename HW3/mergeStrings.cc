/*
 * Name: Sinan Bayati
 * Date: 3/2/2021
 * HW Number: 3
 * ID: 011269570
 */

#include <iostream>
#include "mergeStrings.h"

std::string mergeStrings(const std::string &a, const std::string &b){
	std::string result = "";

	for(int i = 0; i<a.length() || i < b.length(); i++){

		if(i < a.length()){
			result += a[i];
		}
		
		if(i < b.length()){
			result += b[i];
		}
	}
	return result;

}
