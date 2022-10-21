#pragma once
#include "Circle.h"
#include "Square.h"

	using namespace Circle;
	using namespace Square;

	class InscribedCircle : protected Circle, protected Square {
	public:
		InscribedCircle(double d, double SL) {
			diameter = d;
			SideLength = SL;
		}
		bool IsInscribed() {
			return diameter / 2 == SideLength;
		}
	};