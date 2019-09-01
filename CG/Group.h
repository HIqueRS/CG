#pragma once
#include "Face.h"
class Group
{
public:
	Group();
	~Group();
	void CreateFace(int n,int V1, int V2, int V3);
	void BoxEx();

//protected:
	Face faces[12];
};

