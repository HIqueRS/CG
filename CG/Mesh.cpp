#include "Mesh.h"



Mesh::Mesh()
{
	BoxEx();


}


Mesh::~Mesh()
{
}

void Mesh::SetVertices(int n ,GLfloat x, GLfloat y, GLfloat z)
{
	Verts[n].x = x;
	Verts[n].y = y;
	Verts[n].z = z;
}

void Mesh::BoxEx()
{
	SetVertices(0, 0.5f, 0.5f, 0.5f);
	SetVertices(1, -0.5f, 0.5f, 0.5f);
	SetVertices(2, -0.5f, 0.5f, -0.5f);
	SetVertices(3, 0.5f, 0.5f, -0.5f);
	
	SetVertices(4, 0.5f, -0.5f, 0.5f);
	SetVertices(5, -0.5f, -0.5f, 0.5f);
	SetVertices(6, -0.5f, -0.5f, -0.5f);
	SetVertices(7, 0.5f, -0.5f, -0.5f);
}
