/*
 * Name: Sinan Bayati
 * Date: 3/20/2021
 * HW Number: 6
 * ID: 011269570
 */


#include <stack>
#include <iostream>
#include "Asteroid.h"

int countHits(const std::vector<Asteroid> &a){

	int hits = 0;
	std::stack<Asteroid> d;
	int n = a.size();

	for (int i = 0; i < n; i++){
		Asteroid x = a[i];
		if(x.m < 0){
			return -1;
		}
		if (a[i].d == left){
			while(!d.empty() && d.top().d == right && x.m > d.top().m)	d.pop();

		if(d.empty() || d.top().d == left){
			if(x.m > 0){
				d.push(x);
			}
		}

			else if(x.m == d.top().m){
		       		d.pop();
		}
		}

		else if(x.m>0){
			d.push(x);
		}
	}
	hits = d.size();
	while(!d.empty()){
		if(d.top().d == left){
			d.pop();
			hits--;
		}
		else{
			break;
		}
	
	}
	return hits;



}
