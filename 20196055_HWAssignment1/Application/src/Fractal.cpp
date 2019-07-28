#include <Fractal.hpp>

/*
 * Implement Fractal class to generate Koch snowflakes mesh (generate snowflake mesh using triangle list).
 * Koch snowflake: https://en.wikipedia.org/wiki/Koch_snowflake
 */

Fractal::Fractal()
{

}

Fractal::~Fractal()
{

}

void side(glm::vec3 a, glm::vec3 b, int iter, Engine::Mesh* mesh)
{
	glm::vec3 b2a = b - a;

	glm::vec3 comp;
	comp[0] = a[1] - b[1];
	comp[1] = b[0] - a[0];
	comp[2] = 0.0f;

	glm::vec3 p = a + b2a / 3.0f;
	glm::vec3 q = a + b2a / 2.0f - comp * sqrt(3.0f) / 6.0f;
	glm::vec3 r = a + b2a * 2.0f / 3.0f;

	mesh->AddVertexData(p);
	mesh->AddVertexData(1.0f);

	mesh->AddVertexData(q);
	mesh->AddVertexData(1.0f);

	mesh->AddVertexData(r);
	mesh->AddVertexData(1.0f);
	if (iter < 3)
	{
		side(a, p, iter + 1, mesh);

		side(p, q, iter + 1, mesh);

		side(q, r, iter + 1, mesh);

		side(r, b, iter + 1, mesh);
	}
	return;
}

/*
 * TODO: Implement koch snowflake mesh generator
 */
void Fractal::GenerateSnowflake(Engine::Mesh* mesh)
{
	
	mesh->AddAttribute(4);
	glm::vec3 a(-0.5f, -0.5f, 0.2f);
	glm::vec3 b(0.5f, -0.5f, 0.2f);
	glm::vec3 c(0.0f, 0.5f, 0.2f);

	mesh->AddVertexData(a);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(b);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(c);
	mesh->AddVertexData(1.0f);

	glm::vec3 b2a = b - a;
	b2a[2] = 0.2f;

	glm::vec3 comp;
	comp[0] = a[1] - b[1];
	comp[1] = b[0] - a[0];
	comp[2] = 0.2f;
	
	side(a, b, 0, mesh);
	side(b, c, 0, mesh);
	side(c, a, 0, mesh);

	mesh->SetNumElements(768);
	mesh->CreateMesh();
    return;
	
}