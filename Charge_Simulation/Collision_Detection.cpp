#include "Collision_Detection.h"

void Collision_Detection(int x_start, int x_end, int y_start, int y_end, std::list< std::shared_ptr<ChargedBall> >& balls) {

	for (auto i : balls) {
		double radious = 2 * i->getRadious();

		if (i->getPlace()[0] > x_end - radious && i->getVelocity()[0] > 0) { //sprawdzenie granic prawej i lewej
			i->setVelocity( Vector<2>{ -i->getVelocity()[0], i->getVelocity()[1] } );
			i->setPlace( Vector<2>{ x_end - radious, i->getPlace()[1] } );
		}
		else if (i->getPlace()[0] < x_start + radious && i->getVelocity()[0] < 0) {
			i->setVelocity(Vector<2>{-i->getVelocity()[0], i->getVelocity()[1]});
			i->setPlace(Vector<2>{ x_start + radious, i->getPlace()[1] });
		}
		//dzieki else if zmaina odbywa sie tylko raz na klatke

		else if (i->getPlace()[1] > y_end - radious && i->getVelocity()[1] > 0) { //sprawdzenie granicy dolnej i gornej
			i->setVelocity(Vector<2>{i->getVelocity()[0], -i->getVelocity()[1]});
			i->setPlace(Vector<2>{ i->getPlace()[0], y_end - radious });
		}
		else if (i->getPlace()[1] < y_start + radious && i->getVelocity()[1] < 0) {
			i->setVelocity(Vector<2>{i->getVelocity()[0], -i->getVelocity()[1]});
			i->setPlace(Vector<2>{ i->getPlace()[0], y_start + radious });
		}

	}
}