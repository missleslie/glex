#include "GameWorld.h"

GameWorld::GameWorld (ApplicationMode mode) {
  asset_manager = std::make_shared<GameAssetManager>(mode);
  asset_manager->AddAsset(std::make_shared<CubeAsset>());
}

void GameWorld::Draw() {
  asset_manager->Draw();
}
cameraPosition = forwardVector * movementSpeed;
	lookatPosition = forwardVector * movementSpeed;

	//Again you can do the operation like that if you don't have operator overloading
