// STL
#include <iostream>

// include opengl extension and application library
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

// include Engine
#include <Camera.hpp>
#include <Mesh.hpp>
#include <Material.hpp>
#include <RenderObject.hpp>

// include application headers
#include <Fractal.hpp>
#include <DefaultMaterial.hpp>
#include <PerVertexColorMaterial.hpp>
#include <Snowflake.hpp>
#include <Animation.hpp>

// TODO: Implement gradient rectangle mesh generator for background
void GenerateGradientRectangle(Engine::Mesh* mesh)
{
	mesh->AddAttribute(4);
	mesh->AddAttribute(4);
	//pos
	glm::vec3 a(-7.0f, -4.35f, 0.0f);
	glm::vec3 b(7.0f, -4.35f, 0.0f);
	glm::vec3 c(7.0f, 4.35f, 0.0f);
	glm::vec3 d(-7.0f, 4.35f, 0.0f);

	//col
	glm::vec3 a1(0.0f, 1.0f, 1.0f);
	glm::vec3 b1(0.0f, 1.0f, 1.0f);
	glm::vec3 c1(1.0f, 0.0f, 1.0f);
	glm::vec3 d1(1.0f, 0.0f, 1.0f);

	mesh->AddVertexData(a);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(a1);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(b);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(b1);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(c);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(c1);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(c);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(c1);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(d);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(d1);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(a);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(a1);
	mesh->AddVertexData(1.0f);
	mesh->SetNumElements(6);
	mesh->CreateMesh();
    return;
	//return;
}

// TODO: Implement custom type mesh generator for background object
void GenerateBackgroundMeshType1(Engine::Mesh* mesh)
{
	mesh->AddAttribute(4);
	mesh->AddAttribute(4);

	glm::vec3 a(-9.5f, -4.5f, 0.0f);
	glm::vec3 b(1.5f, -4.5f, 0.0f);
	glm::vec3 c(-4.0f, 1.0f, 0.0f);

	glm::vec3 a1(0.0f, 1.0f, 1.0f);
	glm::vec3 b1(0.0f, 1.0f, 1.0f);
	glm::vec3 c1(0.0f, 0.8f, 0.4f);

	mesh->AddVertexData(a);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(a1);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(b);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(b1);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(c);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(c1);
	mesh->AddVertexData(1.0f);

	glm::vec3 g(-6.0f, -4.0f, 0.0f);
	glm::vec3 h(2.0f, -4.0f, 0.0f);
	glm::vec3 i(-2.0f, 0.0f, 0.0f);

	glm::vec3 g1(0.0f, 1.0f, 1.0f);
	glm::vec3 h1(0.0f, 1.0f, 1.0f);
	glm::vec3 i1(0.2f, 1.0f, 0.6f);

	mesh->AddVertexData(g);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(g1);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(h);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(h1);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(i);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(i1);
	mesh->AddVertexData(1.0f);

	glm::vec3 j(-3.4f, -4.0f, 0.0f);
	glm::vec3 k(3.6f, -4.0f, 0.0f);
	glm::vec3 l(0.1f, -0.5f, 0.0f);

	glm::vec3 j1(0.0f, 1.0f, 1.0f);
	glm::vec3 k1(0.0f, 1.0f, 1.0f);
	glm::vec3 l1(0.4f, 1.0f, 0.75f);

	mesh->AddVertexData(j);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(j1);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(k);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(k1);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(l);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(l1);
	mesh->AddVertexData(1.0f);

	glm::vec3 d(0.25f, -4.5f, 0.1f);
	glm::vec3 e(9.75f, -4.5f, 0.1f);
	glm::vec3 f(5.0f, 0.5f, 0.1f);

	glm::vec3 d1(0.0f, 1.0f, 1.0f);
	glm::vec3 e1(0.0f, 1.0f, 1.0f);
	glm::vec3 f1(0.0f, 0.8f, 0.4f);

	mesh->AddVertexData(d);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(d1);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(e);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(e1);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(f);
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(f1);
	mesh->AddVertexData(1.0f);
	mesh->SetNumElements(12);
	mesh->CreateMesh();
    return;
}

// TODO: Implement custom type mesh generator for background object
void GenerateBackgroundMeshType2(Engine::Mesh* mesh)
{
	mesh->AddAttribute(4);
	
	//glm::vec3 b(-7.0f, -5.0f, 0.0f);
	//glm::vec3 c(1.0f, -4.0f, 0.0f);
	
	mesh->AddVertexData(glm::vec3(0.0f, 2.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(0.06f, 2.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(0.03f, 2.06f, 0.0f));
	mesh->AddVertexData(1.0f);

	mesh->AddVertexData(glm::vec3(1.0f, 3.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(1.04f, 3.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(1.02f, 3.04f, 0.0f));
	mesh->AddVertexData(1.0f);

	mesh->AddVertexData(glm::vec3(2.0f, 1.5f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(2.06f, 1.5f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(2.03f, 1.56f, 0.0f));
	mesh->AddVertexData(1.0f);

	mesh->AddVertexData(glm::vec3(3.0f, 4.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(3.04f, 4.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(3.02f, 4.04f, 0.0f));
	mesh->AddVertexData(1.0f);

	mesh->AddVertexData(glm::vec3(4.0f, 3.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(4.04f, 3.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(4.02f, 3.04f, 0.0f));
	mesh->AddVertexData(1.0f);

	mesh->AddVertexData(glm::vec3(2.5f, 2.5f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(2.56f, 2.5f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(2.53f, 2.56f, 0.0f));
	mesh->AddVertexData(1.0f);

	mesh->AddVertexData(glm::vec3(5.0f, 3.5f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(5.04f, 3.5f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(5.02f, 3.54f, 0.0f));
	mesh->AddVertexData(1.0f);

	mesh->AddVertexData(glm::vec3(4.5f, 2.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(4.56f, 2.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(4.53f, 2.06f, 0.0f));
	mesh->AddVertexData(1.0f);





	mesh->AddVertexData(glm::vec3(0.0f, 4.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(0.04f, 4.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(0.02f, 4.04f, 0.0f));
	mesh->AddVertexData(1.0f);

	mesh->AddVertexData(glm::vec3(-1.0f, 3.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(-0.96f, 3.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(-0.98f, 3.04f, 0.0f));
	mesh->AddVertexData(1.0f);

	mesh->AddVertexData(glm::vec3(-2.0f, 1.5f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(-1.96f, 1.5f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(-1.98f, 1.54f, 0.0f));
	mesh->AddVertexData(1.0f);

	mesh->AddVertexData(glm::vec3(-3.0f, 4.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(-2.96f, 4.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(-2.98f, 4.04f, 0.0f));
	mesh->AddVertexData(1.0f);

	mesh->AddVertexData(glm::vec3(-4.0f, 3.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(-3.94f, 3.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(-3.97f, 3.06f, 0.0f));
	mesh->AddVertexData(1.0f);

	mesh->AddVertexData(glm::vec3(-2.5f, 2.5f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(-2.46f, 2.5f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(-2.48f, 2.54f, 0.0f));
	mesh->AddVertexData(1.0f);

	mesh->AddVertexData(glm::vec3(-5.0f, 3.5f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(-4.96f, 3.5f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(-4.98f, 3.54f, 0.0f));
	mesh->AddVertexData(1.0f);

	mesh->AddVertexData(glm::vec3(-4.5f, 2.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(-4.46f, 2.0f, 0.0f));
	mesh->AddVertexData(1.0f);
	mesh->AddVertexData(glm::vec3(-4.48f, 2.04f, 0.0f));
	mesh->AddVertexData(1.0f);

	mesh->SetNumElements(48);
	mesh->CreateMesh();
    return;
}

int main(int argc, char** argv)
{
    /* Initialize the library */
    if (!glfwInit())
        return -1;

    GLFWwindow* window;

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(1024, 768, "Homework 1 - Snowflake Animation (Your StudentId)", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    GLenum glewError = glewInit();
    if (glewError != GLEW_OK)
    {
        std::cout << "GLEW Error: " << glewGetErrorString(glewError) << std::endl;
        exit(1);
    }

    Fractal fractal = Fractal();
    Animation* animation = new Animation();

    Engine::Camera* mainCamera = new Engine::Camera();

    // Create snowflake instances
    Engine::Mesh* mesh = new Engine::Mesh();
	Engine::Mesh* mesh1 = new Engine::Mesh();
	Engine::Mesh* mesh2 = new Engine::Mesh();
	Engine::Mesh* bmesh = new Engine::Mesh();
	GenerateBackgroundMeshType1(mesh1);
	GenerateBackgroundMeshType2(mesh2);
	GenerateGradientRectangle(bmesh);
    fractal.GenerateSnowflake(mesh);
    DefaultMaterial* s1material = new DefaultMaterial();
	DefaultMaterial* s2material = new DefaultMaterial();
	DefaultMaterial* s3material = new DefaultMaterial();
	DefaultMaterial* s4material = new DefaultMaterial();
	DefaultMaterial* s5material = new DefaultMaterial();
	DefaultMaterial* s6material = new DefaultMaterial();
	DefaultMaterial* s7material = new DefaultMaterial();
	DefaultMaterial* s8material = new DefaultMaterial();

	DefaultMaterial* s9material = new DefaultMaterial();
	DefaultMaterial* s10material = new DefaultMaterial();
	DefaultMaterial* s11material = new DefaultMaterial();
	DefaultMaterial* s12material = new DefaultMaterial();
	DefaultMaterial* s13material = new DefaultMaterial();
	DefaultMaterial* s14material = new DefaultMaterial();
	DefaultMaterial* s15material = new DefaultMaterial();
	DefaultMaterial* s16material = new DefaultMaterial();

	PerVertexColorMaterial* material1 = new PerVertexColorMaterial();
	DefaultMaterial* material2 = new DefaultMaterial();
	PerVertexColorMaterial* bmaterial = new PerVertexColorMaterial();

	s1material->CreateMaterial();
	s1material->UpdateColor(glm::vec3(0.5f, 0.5f, 0.5f));
	s2material->CreateMaterial();
	s2material->UpdateColor(glm::vec3(0.0f, 0.5f, 0.5f));
	s3material->CreateMaterial();
	s3material->UpdateColor(glm::vec3(1.0f, 0.5f, 0.0f));
	s4material->CreateMaterial();
	s4material->UpdateColor(glm::vec3(1.0f, 0.2f, 1.0f));
	s5material->CreateMaterial();
	s5material->UpdateColor(glm::vec3(0.75f, 0.4f, 1.0f));
	s6material->CreateMaterial();
	s6material->UpdateColor(glm::vec3(1.0f, 0.0f, 0.0f));
	s7material->CreateMaterial();
	s7material->UpdateColor(glm::vec3(0.4f, 1.0f, 0.75f));
	s8material->CreateMaterial();
	s8material->UpdateColor(glm::vec3(0.6f, 0.0f, 0.0f));
	s9material->CreateMaterial();
	s9material->UpdateColor(glm::vec3(0.4f, 0.2f, 0.0f));
	s10material->CreateMaterial();
	s10material->UpdateColor(glm::vec3(0.0f, 0.4f, 0.8f));
	s11material->CreateMaterial();
	s11material->UpdateColor(glm::vec3(0.2f, 0.0f, 0.1f));
	s12material->CreateMaterial();
	s12material->UpdateColor(glm::vec3(0.4f, 0.4f, 1.0f));
	s13material->CreateMaterial();
	s13material->UpdateColor(glm::vec3(0.5f, 0.7f, 0.9f));
	s14material->CreateMaterial();
	s14material->UpdateColor(glm::vec3(0.7f, 0.9f, 0.5f));
	s15material->CreateMaterial();
	s15material->UpdateColor(glm::vec3(0.9f, 0.5f, 0.7f));
	s16material->CreateMaterial();
	s16material->UpdateColor(glm::vec3(0.6f, 0.0f, 0.0f));
	
	material1->CreateMaterial();
	//material1->UpdateColor(glm::vec3(0.5f, 1.0f, 1.0f));
	material2->CreateMaterial();
	material2->UpdateColor(glm::vec3(1.0f, 1.0f, 1.0f));
	bmaterial->CreateMaterial();

    Snowflake exampleSnowflake = Snowflake(mesh, s1material);
    Snowflake exampleSnowflake2 = Snowflake(mesh, s2material);
	Snowflake exampleSnowflake3 = Snowflake(mesh, s3material);
	Snowflake exampleSnowflake4 = Snowflake(mesh, s4material);
	Snowflake exampleSnowflake5 = Snowflake(mesh, s5material);
	Snowflake exampleSnowflake6 = Snowflake(mesh, s6material);
	Snowflake exampleSnowflake7 = Snowflake(mesh, s7material);
	Snowflake exampleSnowflake8 = Snowflake(mesh, s8material);
	Snowflake exampleSnowflake9 = Snowflake(mesh, s9material);
	Snowflake exampleSnowflake10 = Snowflake(mesh, s10material);
	Snowflake exampleSnowflake11 = Snowflake(mesh, s11material);
	Snowflake exampleSnowflake12 = Snowflake(mesh, s12material);
	Snowflake exampleSnowflake13 = Snowflake(mesh, s13material);
	Snowflake exampleSnowflake14 = Snowflake(mesh, s14material);
	Snowflake exampleSnowflake15 = Snowflake(mesh, s15material);
	Snowflake exampleSnowflake16 = Snowflake(mesh, s16material);

	exampleSnowflake2.SetPosition(glm::vec3(1.0f, 3.0f, 0.0f));
	exampleSnowflake2.xmean = 1.0f;
	exampleSnowflake2.rotspeed = 1.4f;

	exampleSnowflake3.SetPosition(glm::vec3(3.0f, 4.0f, 0.0f));
	exampleSnowflake3.xmean = 3.0f;
	//exampleSnowflake3.rotspeed = 1.4f;

	exampleSnowflake4.SetPosition(glm::vec3(5.0f, 4.0f, 0.0f));
	exampleSnowflake4.xmean = 5.0f;
	//exampleSnowflake2.rotspeed = 1.4f;

	exampleSnowflake5.SetPosition(glm::vec3(-2.0f, 3.0f, 0.0f));
	exampleSnowflake5.xmean = -2.0f;
	//exampleSnowflake2.rotspeed = 1.4f;

	exampleSnowflake6.SetPosition(glm::vec3(-3.0f, 2.0f, 0.0f));
	exampleSnowflake6.xmean = -3.0f;
	exampleSnowflake2.rotspeed = 1.4f;

	exampleSnowflake7.SetPosition(glm::vec3(-4.0f, 3.0f, 0.0f));
	exampleSnowflake7.xmean = -4.0f;
	//exampleSnowflake2.rotspeed = 1.4f;

	exampleSnowflake8.SetPosition(glm::vec3(-5.0f, 2.0f, 0.0f));
	exampleSnowflake8.xmean = -5.0f;
	//exampleSnowflake2.rotspeed = 1.4f;

	exampleSnowflake9.SetPosition(glm::vec3(1.0f, 5.0f, 0.0f));
	exampleSnowflake9.xmean = 1.0f;
	exampleSnowflake9.rotspeed = 1.4f;

	exampleSnowflake10.SetPosition(glm::vec3(3.0f, 7.4f, 0.0f));
	exampleSnowflake10.xmean = 3.0f;
	//exampleSnowflake3.rotspeed = 1.4f;

	exampleSnowflake11.SetPosition(glm::vec3(5.0f, 6.0f, 0.0f));
	exampleSnowflake11.xmean = 5.0f;
	exampleSnowflake2.rotspeed = 1.4f;

	exampleSnowflake12.SetPosition(glm::vec3(-2.0f, 7.0f, 0.0f));
	exampleSnowflake12.xmean = -2.0f;
	//exampleSnowflake2.rotspeed = 1.4f;

	exampleSnowflake13.SetPosition(glm::vec3(-3.0f, 5.0f, 0.0f));
	exampleSnowflake13.xmean = -3.0f;
	exampleSnowflake2.rotspeed = 1.4f;

	exampleSnowflake14.SetPosition(glm::vec3(-4.0f, 5.0f, 0.0f));
	exampleSnowflake14.xmean = -4.0f;
	//exampleSnowflake2.rotspeed = 1.4f;

	exampleSnowflake15.SetPosition(glm::vec3(-5.0f, 6.1f, 0.0f));
	exampleSnowflake15.xmean = -5.0f;
	//exampleSnowflake2.rotspeed = 1.4f;
	
    animation->AddSnowflake(&exampleSnowflake);
    animation->AddSnowflake(&exampleSnowflake2);
	animation->AddSnowflake(&exampleSnowflake3);
	animation->AddSnowflake(&exampleSnowflake4);
	animation->AddSnowflake(&exampleSnowflake5);
	animation->AddSnowflake(&exampleSnowflake6);
	animation->AddSnowflake(&exampleSnowflake7);
	animation->AddSnowflake(&exampleSnowflake8);
	animation->AddSnowflake(&exampleSnowflake9);
	animation->AddSnowflake(&exampleSnowflake10);
	animation->AddSnowflake(&exampleSnowflake11);
	animation->AddSnowflake(&exampleSnowflake12);
	animation->AddSnowflake(&exampleSnowflake13);
	animation->AddSnowflake(&exampleSnowflake14);
	animation->AddSnowflake(&exampleSnowflake15);
	//Engine::RenderObject renderObject = Engine::RenderObject(mesh, material);
	Engine::RenderObject renderObject1 = Engine::RenderObject(mesh1, material1);
	Engine::RenderObject renderObject2 = Engine::RenderObject(mesh2, material2);
	Engine::RenderObject brenderObject = Engine::RenderObject(bmesh, bmaterial);

    mainCamera->SetPosition(glm::vec3(0.0f, 0.0f, 7.5f));

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        // Enable depth test
        glEnable(GL_DEPTH_TEST);

        // Accept fragment if it closer to the camera than the former one
        glDepthFunc(GL_LESS);

        glEnable(GL_CULL_FACE);
        glCullFace(GL_BACK); // Cull back-facing triangles -> draw only front-facing triangles

        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // Apply constant animation (1.0f is default value. (1.0s) you should change this value for supporting consistent animation)
        animation->Animate(1.0f);

		//renderObject.Render(mainCamera);
		renderObject1.Render(mainCamera);
		renderObject2.Render(mainCamera);
		brenderObject.Render(mainCamera);
		
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    delete mainCamera;

    glfwTerminate();
    return 0;

}