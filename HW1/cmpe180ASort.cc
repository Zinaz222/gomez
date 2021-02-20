/*
 * Name: Sinan Bayati
 * Date: 2/19/2021
 * HW Number: 1
 * ID: 011269570
 */


#include <iostream>
#include <assert.h>
#include "header.h"
using namespace std;

void cmpe180ASort(int a[], int sz){
	//assert(sz!=0);
	if(sz == 0){
		cout << "Number array is empty" << endl;
	}
	int temp;
	for(int i = 0; i < sz-1; i++){
		for(int j = 0; j < sz - i - 1; j++){
			if(a[j] > a[j+1]){	
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}		
	}
}

void cmpe180ASort(char c[], int sz){
	//assert(sz!=0);
	if(sz == 0){
		cout << "Character array is empty" << endl;
	}
	int temp;
	for(int i=0; i < sz - 1; i++){
		for(int j = 0; j < sz - i - 1; j++){
			if((int)c[j] > (int)c[j+1]){
				temp = c[j+1];
				c[j+1] = c[j];
				c[j] = temp;
			}
		}
	}

}



