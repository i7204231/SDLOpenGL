#include "SDLOpenGl.h"
#include <iostream>

SDLOpenGl::SDLOpenGl(const std::string &_name, int _x, int _y, int _width, int _height)


{
 m_name;
 m_x=_x;
 m_y=_y;
 m_width=_width;
 m_height=_height;
 init();

}

void SDLOpenGl::init()
{

if (SDL_Init(SDL_INIT_EVERYTHING)<0)
{
  errorExit("error_calling_init");
}

m_window=SDL_CreateWindow(m_name.c_str(), m_x, m_y, m_width, m_height, SDL_WINDOW_OPENGL);

if (!m_window){
  errorExit("Could Not Open Window");
}

createGLContext();


}

void SDLOpenGl::createGLContext()

{

  SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK,SDL_GL_CONTEXT_PROFILE_CORE);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION,4);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION,5);
  SDL_GL_SetAttribute(SDL_GL_MULTISAMPLEBUFFERS, 1);
  SDL_GL_SetAttribute(SDL_GL_MULTISAMPLESAMPLES, 4);
  SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 16);
  SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

  m_glContext=SDL_GL_CreateContext(m_window);



}

void SDLOpenGl::errorExit(const std::string &_msg) const

{

}
