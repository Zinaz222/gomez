#include <iostream>
#include "cmpe180ASort.cc"
using namespace std;

int main(){

	int sz1 = 0;
	int sz = 6;
	int arr[sz1] = {};
	char name[sz] = {'s','i','n','a','n'};
	
	cout << "Size of number array: "<<sizeof(arr)/sizeof(int) << endl;

	cmpe180ASort(arr, sz1);
	cmpe180ASort(name,sz);	
	for(int i = 0; i<sz1; i++){
		cout << arr[i] << endl;
	}

	for(int i = 0; i<sz; i++){
		cout << name[i] << endl;
	}

	return 0;

}

