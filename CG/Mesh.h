#pragma once
#include "Group.h"
#include <vector>
#include <GL/glew.h>
#include <glm/gtc/matrix_transform.hpp> 
#include <glm/common.hpp>
#include <glm/mat4x4.hpp>
#include <glm/gtc/type_ptr.hpp>

typedef struct Vertex {
	GLfloat x,y,z;
} Vec3;

class Mesh
{
public:
	Mesh();
	~Mesh();
	void SetVertices( GLfloat x, GLfloat y, GLfloat z);
	void BoxEx();
	std::vector<glm::vec3*> GetVerts();



//protected:
	std::vector<glm::vec3*> Verts;//deveria ser ponteiro???
	glm::vec3 *aux;
	Group g;
	//std::vector<glm::vec3>
};

