#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a, Rect b){
	float l1, l2, sum;
	l1 = min((a.x)+(a.w), (b.x)+(b.w)) - max(a.x, b.x);
	l2 = min(a.y, b.y) - max((a.y)-(a.h), (b.y)-(b.h));
	sum = l1*l2;
		
	if (sum < 0){
		return 0;
	} else{
		return l1 * l2;
	}

}
