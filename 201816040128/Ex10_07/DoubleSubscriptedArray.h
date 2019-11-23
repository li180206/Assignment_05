#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H
#include<iostream>

using namespace std;
class DoubleSubscriptedArray
{
	
public:
	explicit DoubleSubscriptedArray(int = 10, int = 10);
	friend ostream& operator<<(ostream&, const DoubleSubscriptedArray&);
	friend istream& operator>>(istream&, DoubleSubscriptedArray&);
	const DoubleSubscriptedArray& operator=(const DoubleSubscriptedArray&);
	int operator()(int, int) const;
	bool operator==(const DoubleSubscriptedArray&) const;
	bool operator!=(const DoubleSubscriptedArray& right) const
	{
		return !(*this == right);
	}
private:
	size_t rows;
	size_t columns;
	int* ptr;
};


#endif
