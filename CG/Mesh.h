#pragma once
#include "Group.h"
#include <vector>
#include <GL/glew.h>

typedef struct Vertex {
	GLfloat x,y,z;
} Vec3;

class Mesh
{
public:
	Mesh();
	~Mesh();
	void SetVertices(int n, GLfloat x, GLfloat y, GLfloat z);
	void BoxEx();


//protected:
	Vec3 Verts[8];
	Group g;
};

