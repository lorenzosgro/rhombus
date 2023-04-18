/* @file rhombus.cpp
*  @brief class rhombus implementation of function
*/

#include "rhombus.h"
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

///@brief constructor whit parameter
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
Rhombus::Rhombus(const Rhombus& r) {
	cout << "deep copy constructor" << endl;
	diagonalH = r.diagonalH;
	diagonalV = r.diagonalV;
}

/// @brief overloading of equal operator
Rhombus &Rhombus :: operator=(const Rhombus& r) {
	cout << "rhombus equal operator" << endl;
	diagonalH = r.diagonalH;
	diagonalV = r.diagonalV;
	return *this;
}

/// @brief of == operator
bool Rhombus::operator == (const Rhombus& r) {
	cout << "rhombus compare operator" << endl;
	if (diagonalH == r.diagonalH && diagonalV == r.diagonalV)
		return 1;
	else
		return 0;
}