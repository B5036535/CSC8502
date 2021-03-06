#version 330 core

uniform sampler2D diffuseTex;




in Vertex
{
	vec2 texCoord;
	vec3 normal;
	vec3 tangent;
	vec3 binormal;
} IN;

out vec4 fragColour[2];

void main(void)
{

	fragColour[0] = texture(diffuseTex, IN.texCoord);



	fragColour[1] = vec4(IN.normal * 0.5 + 0.5, 1.0f);

}