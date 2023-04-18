/*	@file rhomb.h
*	@brief declaration of class rhomb
*/

#ifndef RHOMBUS_H
#define RHOMBUS_H

using namespace std;

class Rhombus {
private:
	int diagonalH;
	int diagonalV;
public:
	Rhombus();
	Rhombus(int dH, int dV);
	~Rhombus();

	Rhombus(const Rhombus& r);
	Rhombus& operator=(const Rhombus& r);
	bool operator==(const Rhombus& r);
};


#endif 
