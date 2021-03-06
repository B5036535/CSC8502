#pragma once
#include "../nclgl/SceneNode.h"
#include "Poster.h"
#include "Roof.h"

class Club : public SceneNode
{
public:
	Club(Shader* s, Shader* shader_poster, Shader* shader_roof, GLuint tex, GLuint tex_poster);
	~Club();

	void Draw(const OGLRenderer& r) override;


	vector<LightNode*> GetLightNodes();

protected:
	Poster* poster;
	Roof* roof;

	vector<LightNode*> lightNodes;
	vector<LightNode*> tempLightNodes;

};