#pragma once

#include<initializer_list>
#include<array>
#include<cmath>

template <int dimensions>
class Vector {

public:
	Vector();
	Vector(std::initializer_list<double> args);

	double& operator[] (unsigned i);
	double operator[] (unsigned i) const;
	void operator= (const Vector& to_copy);

	void operator+= (const Vector& to_add);
	void operator-= (const Vector& to_substract);
	void operator/= (double to_divide);
	void operator*= (double to_multiply);

	Vector operator+ (const Vector& to_add);
	Vector operator- (const Vector& to_substract);
	Vector operator/ (double to_divide);
	Vector operator* (double to_multiply);

	double norm();
	Vector normalised();

private:
	std::array<double, dimensions> _data;

};

//#include "Vector.tpp"



template <int d>
Vector<d>::Vector() {
	for (auto& i : _data)
		i = 0;
}

template <int d>
Vector<d>::Vector(std::initializer_list<double> args) {

	const double* k = std::begin(args);
	for (auto& i : _data) {
		i = *k;
		++k;
	}
}

template <int d>
double& Vector<d>::operator[] (unsigned i) {
	return _data[i];
}

template <int d>
double Vector<d>::operator[] (unsigned i) const {
	return _data[i];
}

template <int d>
void Vector<d>::operator= (const Vector& to_copy) {
	_data = to_copy._data;
}

template <int d>
void Vector<d>::operator+= (const Vector& to_add) {

	int k = 0;
	for (auto& i : _data) {
		i += to_add._data[k];
		k++;
	}
}

template <int d>
void Vector<d>::operator-= (const Vector& to_substract) {

	int k = 0;
	for (auto i : _data) {
		i -= to_substract._data[k];
		k++;
	}
}

template <int d>
void Vector<d>::operator/= (double to_divide) {

	int k = 0;
	for (auto i : _data) {
		i /= to_divide;
		k++;
	}
}

template <int d>
void Vector<d>::operator*= (double to_multiply) {

	int k = 0;
	for (auto i : _data) {
		i *= to_multiply;
		k++;
	}
}

template <int d>
Vector<d> Vector<d>::operator+ (const Vector& to_add) {

	Vector<d> temp;
	for (int i = 0; i < d; ++i)
		temp[i] = (*this)[i] + to_add[i];
	return temp;
}

template <int d>
Vector<d> Vector<d>::operator- (const Vector& to_substract) {

	Vector<d> temp;
	for (int i = 0; i < d; ++i)
		temp[i] = (*this)[i] - to_substract[i];
	return temp;
}

template <int d>
Vector<d> Vector<d>::operator/ (double to_divide) {

	Vector<d> temp;
	for (int i = 0; i < d; ++i)
		temp[i] = (*this)[i] / to_divide;
	return temp;
}

template <int d>
Vector<d> Vector<d>::operator* (double to_multiply) {

	Vector<d> temp;
	for (int i = 0; i < d; ++i)
		temp[i] = (*this)[i] * to_multiply;
	return temp;
}

template <int d>
double Vector<d>::norm() {
	double val = 0;
	for (int i = 0; i < d; ++i)
		val += pow(_data[i], 2);
	return sqrt(val);
}

template <int d>
Vector<d> Vector<d>::normalised() {
	return (*this) / norm();
}