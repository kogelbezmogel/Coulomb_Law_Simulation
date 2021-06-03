#pragma once

#include "Vector.h"

class ChargedBall {

public:
	ChargedBall(double weight, int radious, int charge, Vector<2> place, Vector<2> velocity = Vector<2>{0, 0});
	
	void setWeight(double weight);
	void setVelocity(Vector<2> velocity);
	void setRadious(int radious);
	void setCharge(int charge);
	void setPlace(Vector<2> place);

	double getWeight() const;
	Vector<2> getVelocity() const;
	Vector<2> getPlace() const;
	int getCharge() const;
	int getRadious() const;
	

private:

	Vector<2> _ball_place;
	Vector<2> _velocity {0, 0};
	double _weight;
	int _radious;
	int _charge;

};