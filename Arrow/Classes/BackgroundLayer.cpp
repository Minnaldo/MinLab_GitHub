#include "BackgroundLayer.h"
using namespace cocos2d;

Scene* BackgroundLayer::createScene()
{
	auto scene = Scene::create();
	auto layer = BackgroundLayer::create();
	scene->addChild(layer);
	return scene;
}

bool BackgroundLayer::init()
{
	if (!LayerColor::initWithColor(Color4B(255,255,255,255))) {
		return false;
	}

	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();
	
	//��� ��������Ʈ �߰�
	bgSprite = Sprite::create("bg.png");
	bgSprite->setPosition(Vec2(visibleSize.width / 2, visibleSize.height / 2));
	bgSprite->setScale(visibleSize.height / bgSprite->getContentSize().height);
	this->addChild(bgSprite);

	return true;
}