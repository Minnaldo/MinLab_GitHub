#include "BackgroundLayer.h"
using namespace cocos2d;

bool BackgroundLayer::init()
{
	if (!LayerColor::initWithColor(Color4B(255,255,255,255))) {
		return false;
	}

	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();
	
	//배경 스프라이트 추가
	bgSprite = Sprite::create("bg.png");
	bgSprite->setPosition(Vec2(visibleSize.width / 2, visibleSize.height / 2));
	bgSprite->setScale(visibleSize.height / bgSprite->getContentSize().height);
	this->addChild(bgSprite);

	return true;
}