#ifndef GAMEWORLD_H
#define GAMEWORLD_H

#include <memory>

#include <GL/gl.h>

#include "common.h"
#include "GameAssetManager.h"
#include "CubeAsset.h"

/**
 * GameWorld allows us to separate the management of the game world from the
 * nuts and bolts of game loop initialisation.  The GameWorld currently has
 * a very simplified scene graph consisiting of a single GameAssetManager.
 */
class GameWorld {
 public:
  /**
   * We thread the ApplicationMode through the GameWorld ss we want to read it
   * in from the user.  Threading the state through the various function calls
   * is preferable (in this case) to having some kind of global state.
   */
  GameWorld(ApplicationMode);

  /**
   * Calling Draw() will draw the entire world.
   */
  void Draw();
 private:
  std::shared_ptr<GameAssetManager> asset_manager;
};

enum keyboardEvent {CAMERA_UP, CAMERA_DOWN, CAMERA_LEFT, CAMERA_RIGHT};
class keyboardEvent{
public:
	keyboardEvent(const SDL_Event &);
	keyboardEvent GetCode();
private:
	keyboardEvent code;
};cameraPosition = forwardVector * movementSpeed;
lookatPosition = forwardVector * movementSpeed;

//Again you can do the operation like that if you don't have operator overloading
};

#endif // GAMEWORLD_H
