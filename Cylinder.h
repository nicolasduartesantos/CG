#pragma once

#include "Object.h"

class Cylinder : public Object {
private:

	double rad;
	Vector* center_base = nullptr;
	Vector* direction = nullptr;
	double height;

public:

	void setRad(double rad);
	double getRad();

	void setCenter_base(Vector* center_base);
	Vector* getCenter_base();

	void setDirection(Vector* direction);
	Vector* getDirection();

	void setHeight(double height);
	double getHeight();

	bool intersect(Vector* p0, Vector* dir);

	bool intersect_for_shadow(Vector* p0, Vector* dir);

	Color* getRGB(std::vector<Light*> lights, std::vector<Object*> objects, Vector* p0, Vector* dir, Vector* environmentLight);

	void doWorldToCamera(Camera* camera);
	
	Cylinder(double rad, Vector* center_base, Vector* direction, double height, Vector* kd, Vector* ke, Vector* ka, double shininess);
};
