#pragma once
#include "cocos2d.h"
using namespace cocos2d;

class PlayLayer : public cocos2d::Layer
{
public:
	CREATE_FUNC(PlayLayer);
	
private:
	virtual bool init() override;
	void initPlayer();

	//touch func
	virtual bool onTouchBegan(cocos2d::Touch* touch, cocos2d::Event* event);
	virtual void onTouchMoved(cocos2d::Touch* touch, cocos2d::Event* event);
	virtual void onTouchEnded(cocos2d::Touch* touch, cocos2d::Event* event);
};