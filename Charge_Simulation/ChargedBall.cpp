#include "ChargedBall.h"


ChargedBall::ChargedBall(double weight, int radious, int charge, Vector<2> place, Vector<2> velocity) :
_weight(weight),
_radious(radious),
_charge(charge),
_ball_place(place),
_velocity(velocity) { }

void ChargedBall::setWeight(double weight) {
	_weight = weight;
}

void ChargedBall::setVelocity(Vector<2> velocity) {
	_velocity = velocity;
}

void ChargedBall::setRadious(int radious) {
	_radious = radious;
}

void ChargedBall::setCharge(int charge) {
	_charge = charge;
}

void ChargedBall::setPlace(Vector<2> place) {
	_ball_place = place;
}


double ChargedBall::getWeight() const{
	return _weight;
}

Vector<2> ChargedBall::getVelocity() const{
	return _velocity;
}

Vector<2> ChargedBall::getPlace() const{
	return _ball_place;
}

int ChargedBall::getCharge() const{
	return _charge;
}

int ChargedBall::getRadious() const{
	return _radious;
}
