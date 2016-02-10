#pragma once
#include "GLShader.h"

#include <GL/glew.h>
#include <GL/wglew.h>

class CGLProgram
{
public:
  CGLProgram();
  ~CGLProgram();

  GLuint GetProgramId();
  void AttachShader(CGLShader &shader);
  void BindAttribLocation(UINT pos, std::string &&attrib);
  void Link();
  void Use();
  void DetachShader(CGLShader &shader);
  void DeleteShader(CGLShader &shader);
private:
	GLuint m_program;
};

