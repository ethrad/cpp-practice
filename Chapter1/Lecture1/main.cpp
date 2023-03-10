#include "Game2D.h"
#include "PrimitivesGallery.h"
#include "TankExample.h"
#include "FaceExample.h"
#include "WalkingPerson.h"
#include "SolarSystem.h"

namespace jm
{
	class RotatingStarExample : public Game2D
	{
		float time = 0.0f;

	public:
		void update() override
		{
			/*rotate(time * 180.0f);
			drawFilledStar(Colors::gold, 0.4f, 0.25f);

			time += this->getTimeStep();*/

			/*const vec2 p0(0.0f, 0.0f);
			const vec2 p1(0.5f, 0.5f);
			const vec2 p2(0.5f, 0.0f);

			beginTransformation();

			translate(0.1f, 0.0f);

			drawLine(Colors::red, p0, Colors::blue, p1);
			drawLine(Colors::red, p1, Colors::blue, p2);
			drawLine(Colors::red, p2, Colors::blue, p0);

			endTransformation();

			translate(-0.1f, 0.0f);

			drawLine(Colors::red, p0, Colors::blue, p1);
			drawLine(Colors::red, p1, Colors::blue, p2);
			drawLine(Colors::red, p2, Colors::blue, p0);*/

			/*drawWiredBox(Colors::gold, 0.5f, 0.25f);

			rotate(30.0f);

			drawWiredBox(Colors::skyblue, 0.5f, 0.25f);*/

			setLineWidth(3.0f);

			/*const vec2 centor_of_rot(-0.25f, 0.0f);

			rotate(45.0f);
			translate(-centor_of_rot);
			drawWiredBox(Colors::gold, 0.5f, 0.25f);
			drawPoint(Colors::black, centor_of_rot, 5.0f);*/


			// 태양계 만들기
			/*rotate(time * 10.0f);
			drawFilledStar(Colors::gold, 0.4f, 0.25f);

			const vec2 centor_of_rot(-0.5f, 0.0f);

			rotate(time * 45.0f);
			translate(-centor_of_rot);
			drawFilledCircle(Colors::red, 0.15f);

			rotate(time * 45.0f);
			translate(-centor_of_rot);
			drawFilledCircle(Colors::blue, 0.05f);

			time += this->getTimeStep();*/

		}

	};
}

int main(void)
{
	//jm::MouseExample().init("This is my digital canvas!", 1000, 1000, false).run();
	//jm::Game2D().init("This is my digital canvas!", 1280, 960, false).run();
	//jm::RotatingStarExample().run();
	//jm::PrimitivesGallery().init("Primitive Gallery", 1280, 960, false).run();
	//jm::SolarSystem().run();
	//jm::FaceExample().run();
	//jm::WalkingPerson().run();
	jm::TankExample().run();

	return 0;
}
