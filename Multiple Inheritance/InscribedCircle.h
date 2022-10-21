#pragma once
#include "Circle.h"
#include "Square.h"

namespace InscribedCircle {

	class InscribedCircle : protected Circle::Circle, protected Square::Square {
	public:
		InscribedCircle(double d, double SL) {
			diameter = d;
			SideLength = SL;
		}
		bool IsInscribed() {
			return diameter / 2 == SideLength;
		}
	};
}