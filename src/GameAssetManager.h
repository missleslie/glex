#ifndef GAMEASSETMANAGER_H
#define GAMEASSETMANAGER_H

#include <memory>
#include <vector>
#include <string>
#include <utility>
#include <fstream>
#include <iostream>

#include <GL/gl.h> //Open framework library

#include "common.h"
#include "GameAsset.h"

/**
 * GameAssetManager is a container for GameAssets.  It also provides utility
 * functions to to create a simple OpenGL program that can be used to draw a
 * simple GameAsset.
 */
class GameAssetManager {
 public:
  explicit GameAssetManager(ApplicationMode); // constructor
  virtual ~GameAssetManager();
  GameAssetManager(GameAssetManager const&); // copy constructor
  GameAssetManager(GameAssetManager const&&); // move constructor
  void operator=(GameAssetManager const&); // assignment
  void AddAsset(std::shared_ptr<GameAsset>);
  void Draw();

class Camera{
	   //camera position
	   double position;
	   //camera rotation
	   double rotation;
	   //camera speed
	   double speed;

	   void initCamera();

	   bool GoEast;
	   bool GoWest;
	   bool GoNorth;
	   bool GoSouth;

	   //constructor

   };

class vec3 {
    public:
        vec3();
        vec3(float, float, float);
        int operator==(vec3 rhs);
        vec3 operator+(vec3 rhs);
        vec3 operator-(vec3 rhs);
        vec3 operator*(vec3 rhs);
        vec3 operator/(vec3 rhs);
        vec3 operator+(float scalar);
        vec3 operator-(float scalar);
        vec3 operator*(float scalar);
        vec3 operator/(float scalar);
        vec3 cross(vec3 rhs);
        float dot(vec3 rhs);
        float length();

        float x;
        float y;
        float z;
};



 private:
  GLuint CreateGLProgram(std::string &, std::string &);
  GLuint CreateGLESShader(GLenum, std::string &);
  // As this is private and we're writing to the GPU, we will use raw pointers.
  std::pair<GLchar *, GLint>  ReadShader(std::string &);

  // The internal scene graph is a simple list.
  std::vector<std::shared_ptr<GameAsset>> draw_list;
  GLuint program_token;
};

#endif // GAMEASSETMANAGER_H
