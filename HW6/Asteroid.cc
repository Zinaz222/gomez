/*
 * Name: Sinan Bayati
 * Date: 3/20/2021
 * HW Number: 6
 * ID: 011269570
 */


#include <stack>
#include <iostream>
#include "Asteroid.h"

int countHits(std::vector<Asteroid> a){

	int hits = 0;
	std::stack<Asteroid> d;
	int n = a.size();

	for (int i = 0; i < n; i++){
		Asteroid x = a[i];
		if(x.m < 0){
			return -1;
		}
		if (a[i].d == 0){
			while(!d.empty() && d.top().d == 1 && x.m > d.top().m)	d.pop();

		if(d.empty() || d.top().d == 0){
			if(x.m > 0){
				d.push(x);
			}
		}

			else if(x.m == d.top().m){
		       		d.pop();
		}
		}

		else{
			d.push(x);
		}
	}
	hits = d.size();
	while(!d.empty()){
		if(d.top().d == 0){
			d.pop();
			hits--;
		}
		else{
			break;
		}
	
	}
	return hits;



}
