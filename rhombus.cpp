/* @file rhombus.cpp
*  @brief class rhombus implementation of function
*/

#include "rhombus.h"
#include <math.h>
#include <iostream>

/// @brief defalut constructor
Rhombus:: Rhombus() {
	cout << "rhombus default constructor" << endl;
	diagH = 0;
	diagV = 0;
}

/// @brief default destructor
Rhombus:: ~Rhombus() {
	cout << "rhombus default destructor"<<endl;
}

/// @brief constructor whit parameter
/// @param dH horizontal diagonal
/// @param dV vertical diagonal
Rhombus::Rhombus(float dH, float dV) {

	diagH = 0;
	diagV = 0;

	cout << "rhombus constructor with parameters" << endl;

	if (dH > 0)
		diagH = dH;
	else
		cout << "error,invalid horizontal diagonal" << endl;
	if (dV> 0)
		diagV = dV;
	else
		cout << "error,invalid vertical diagonal" << endl;
}

/// @brief deep copy constructor
/// @param &r address of rhombus object
Rhombus::Rhombus(const Rhombus& r) {
	cout << "deep copy constructor" << endl;
	diagH = r.diagH;
	diagV = r.diagV;
}

/// @brief overloading of equal operator
/// @param &r address of rhombus object
/// @return address of rhombus object
Rhombus &Rhombus :: operator=(const Rhombus& r) {
	cout << "rhombus equal operator" << endl;
	diagH = r.diagH;
	diagV = r.diagV;
	return *this;
}

/// @brief of == operator
/// @param &r address of rhombus object
///  @return bool value
bool Rhombus::operator == (const Rhombus& r) {
	cout << "rhombus compare operator" << endl;
	if (diagH == r.diagH && diagV == r.diagV)
		return true;
	else
		return false;
}

/// @brief side calculus
/// @return side of rhombus
float Rhombus :: Side() {
	return ( sqrt (( pow( diagH / 2,2 ) + pow(diagV/2,2 ))));
} 

/// @brief get perimeter of rhombus
/// @return perimeter of rhombus
float Rhombus::GetPerimeter() {
	cout << "rhombus perimeter" << endl;
	return (Side() * 4);
}

/// @brief get area of rhombus
/// @return area of rhombus
float Rhombus::GetArea() {
	cout << "rhombus area" << endl;
	return(diagH * diagV / 2);
}

/// @brief get horizontal diagonal of rhombus
/// @return horizontal diagonal of rhombus
float Rhombus::GetDiagH() {
	cout << "rhombus horizontal diagonal" << endl;
	return diagH;
}

/// @brief get vertical diagonal of rhombus
/// @return vertical diagonal of rhombus
float Rhombus::GetDiagV() {
	cout << "rhombus vertical diagonal" << endl;
	return diagV;
}

/// @brief setting horizontal diagonal of rhombus
/// @param h horizontal diagonal to set
void Rhombus:: SetDiagH(float h) {
	if (h > 0)
		diagH = h;
	else
		cout << "invalid value of horizontal diagonal" << endl;
}

/// @brief setting vertical diagonal of rhombus
/// @param v vertical diagonal to set
void Rhombus::SetDiagV(float v) {
	if (v > 0)
		diagV = v;
	else
		cout << "invalid value of vertical diagonal" << endl;
}

/// @brief setting vertical and horizontal diagonal of rhombus
/// @param v vertical diagonal to set
/// @param h horizontal diagonal to set
void Rhombus::SetDim(float dH,float dV) {
	cout << "setting vertical and horizontal diagonal" << endl;
	SetDiagH(dH);
	SetDiagV(dV);
}

/// @brief get side of rhombus
/// @return side of rhombus
float Rhombus::GetSide() {
	cout << "getting side value" << endl;
	return(Side());
}

/// @brief get vertical and horizontal diagonal of rhombus
/// @parameter &dH location for return value of horizontal diagonal
/// @parameter &dV location for return value of vertical diagonal
void Rhombus::GetDiagonals(float &dH, float &dV) {
	cout << "getting diagonals" << endl;
	dH = GetDiagH();
	dV = GetDiagV();
}