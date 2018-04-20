#pragma once
#ifndef __SceneTrans__GameScene__
#define __SceneTrans__GameScene__

#include "cocos2d.h"

USING_NS_CC;

class GameScene : public cocos2d::LayerColor
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	void menuCloseCallback(cocos2d::Ref* pSender);

	CREATE_FUNC(GameScene);

	Size visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();
	Size winSize;

	Sprite *BackgroundA = NULL;
};


#endif // !__SceneTrans__GameScene__