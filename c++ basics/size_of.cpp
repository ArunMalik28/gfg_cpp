// Trying sizeof() operator

#include<bits/stdc++.h>
using namespace std;

#define pi 0.7777

class GFG
{
	int a;
	float b;
};

struct gfg2
{
	int a;
};

union gfg3
{
	char t;
	float c;
};

int main()
{
	int x = 10;

	GFG obj1;

	gfg2 obj2;

	gfg3 obj3;

	cout<<sizeof(obj1)<<endl;

	cout<<sizeof(obj2)<<endl;

	cout<<sizeof(obj3)<<endl;

	//size of pointers

	cout<<"Pointers Class"<<endl;

	GFG *ptr1 = new GFG;

	ptr1 = &obj1;

	cout<<sizeof(ptr1)<<endl;

	cout<<sizeof(*ptr1)<<endl;

	cout<<"Pointers primitive data type"<<endl;

	int *ptr2 = new int;

	ptr2 = &x;

	cout<<sizeof(ptr2)<<endl;

	cout<<sizeof(*ptr2)<<endl;;

	cout<<"Pointers to structure"<<endl;

	gfg2 *ptr3 = new gfg2;

	cout<<sizeof(ptr3)<<endl;

	cout<<pi<<endl;

	return 0;
}