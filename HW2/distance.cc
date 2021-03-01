/*
 * Name: Sinan Bayati
 * Date: 2/28/2021
 * HW Number: 2
 * ID: 011269570
 */

#include "distance.h"
#include <cmath>

float distance(XYPoint p1, XYPoint p2){
	float result;
	result = sqrt(pow(p2.x - p1.x,2)+pow(p2.y - p1.y, 2));
	return result;
}

float distance(XYPoint p1, XYPoint p2, XYPoint p3){
	float result;
	result = distance(p1, p2) + distance(p2, p3);
	return result;
}
float distance(XYPoint p1, XYPoint p2, XYPoint p3, XYPoint p4){
	float result;
	result = distance(p1, p2, p3) + distance(p3, p4);
	return result;
}

float distance(XYPoint p1, XYPoint p2, XYPoint p3, XYPoint p4, XYPoint p5){
	float result;
	result = distance(p1, p2, p3, p4) + distance(p4, p5);
	return result;
}
