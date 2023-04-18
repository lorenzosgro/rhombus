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
	int side();
public:
	Rhombus();
	Rhombus(int dH, int dV);
	~Rhombus();

	Rhombus(const Rhombus& r);
	Rhombus& operator=(const Rhombus& r);
	bool operator==(const Rhombus& r);

	int GetPerimeter();
	int GetArea();
	int GetDiagonalH();
	int GetDiagonalV();
	void SetDiagonalH (int h);
	void SetDiagonalV (int v);

};


#endif 
