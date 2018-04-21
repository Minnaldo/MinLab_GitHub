#pragma once
#include "cocos2d.h"
using namespace cocos2d;

class BackgroundLayer : public cocos2d::LayerColor
{
public:
	CREATE_FUNC(BackgroundLayer);

private:
	virtual bool init() override;
	
	//배경 스프라이트
	cocos2d::Sprite *bgSprite;
};