#include "GameScene.h"

#include <iostream>

using namespace std;

USING_NS_CC;

Scene* GameScene::createScene()
{
	auto scene = Scene::create();

	auto layer = GameScene::create();

	scene->addChild(layer);

	return scene;
}

bool GameScene::init()
{
	if (!LayerColor::initWithColor(Color4B(255, 220, 220, 255)))
	{
		return false;
	}

	BackgroundA = Sprite::create("bin.png");
	BackgroundA->setAnchorPoint(Vec2(0, 0));
	BackgroundA->setPosition(Vec2(0, 0));

	this->addChild(BackgroundA);

	return true;
}


void GameScene::menuCloseCallback(Ref* pSender)
{
	//Close the cocos2d-x game scene and quit the application
	Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	exit(0);
#endif

	/*To navigate back to native iOS screen(if present) without quitting the application  ,do not use Director::getInstance()->end() and exit(0) as given above,instead trigger a custom event created in RootViewController.mm as below*/

	//EventCustom customEndEvent("game_scene_close_event");
	//_eventDispatcher->dispatchEvent(&customEndEvent);


}