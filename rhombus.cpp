/* @file rhombus.cpp
*  @brief class rhombus implementation of function
*/

#include "rhombus.h"
#include <math.h>
#include <iostream>

/// @brief defalut constructor
Rhombus:: Rhombus() {
	cout << "rhombus default constructor" << endl;
	diagonalH = 0;
	diagonalV = 0;
}

/// @brief default destructor
Rhombus:: ~Rhombus() {
	cout << "rhombus default destructor"<<endl;
}

/// @brief constructor whit parameter
/// @param dH horizontal diagonal
/// @param dV vertical diagonal
Rhombus::Rhombus(int dH, int dV) {

	diagonalH = 0;
	diagonalV = 0;

	cout << "rhombus constructor with parameters" << endl;

	if (dH > 0)
		diagonalH = dH;
	else
		cout << "error,invalid horizontal diagonal" << endl;
	if (dV> 0)
		diagonalV = dV;
	else
		cout << "error,invalid vertical diagonal" << endl;
}

/// @brief deep copy constructor
/// @param &r address of rhombus object
Rhombus::Rhombus(const Rhombus& r) {
	cout << "deep copy constructor" << endl;
	diagonalH = r.diagonalH;
	diagonalV = r.diagonalV;
}

/// @brief overloading of equal operator
/// @param &r address of rhombus object
/// @return address of rhombus object
Rhombus &Rhombus :: operator=(const Rhombus& r) {
	cout << "rhombus equal operator" << endl;
	diagonalH = r.diagonalH;
	diagonalV = r.diagonalV;
	return *this;
}

/// @brief of == operator
/// @param &r address of rhombus object
///  @return bool value
bool Rhombus::operator == (const Rhombus& r) {
	cout << "rhombus compare operator" << endl;
	if (diagonalH == r.diagonalH && diagonalV == r.diagonalV)
		return true;
	else
		return false;
}

/// @brief side calculus
/// @return side of rhombus
int Rhombus :: side() {
	return(sqrt (((diagonalH / 2)^2) + (diagonalV/ 2)^2));
} 

/// @brief get perimeter of rhombus
/// @return perimeter of rhombus
int Rhombus::GetPerimeter() {
	cout << "rhombus perimeter" << endl;
	return (side() * 4);
}

/// @brief get area of rhombus
/// @return area of rhombus
int Rhombus::GetArea() {
	cout << "rhombus area" << endl;
	return(diagonalH * diagonalV / 2);
}

/// @brief get horizontal diagonal of rhombus
/// @return horizontal diagonal of rhombus
int Rhombus::GetDiagonalH() {
	cout << "rhombus horizontal diagonal" << endl;
	return diagonalH;
}

/// @brief get vertical diagonal of rhombus
/// @return vertical diagonal of rhombus
int Rhombus::GetDiagonalV() {
	cout << "rhombus vertical diagonal" << endl;
	return diagonalV;
}

/// @brief setting horizontal diagonal of rhombus
/// @param h horizontal diagonal to set
void Rhombus:: SetDiagonalH(int h) {
	if (h > 0)
		diagonalH = h;
	else
		cout << "invalid value of horizontal diagonal" << endl;
}

/// @brief setting vertical diagonal of rhombus
/// @param v vertical diagonal to set
void Rhombus::SetDiagonalV(int v) {
	if (v > 0)
		diagonalV = v;
	else
		cout << "invalid value of vertical diagonal" << endl;
}