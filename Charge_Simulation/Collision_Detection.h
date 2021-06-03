#pragma once

#include <list>
#include "Vector.h"
#include "ChargedBall.h"

void Collision_Detection(int x_start, int x_end, int y_start, int y_end, std::list< std::shared_ptr<ChargedBall> >& args);