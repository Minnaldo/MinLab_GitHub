#include "PlayLayer.h"

using namespace cocos2d;

bool PlayLayer::init()
{
	if (!Layer::init())
	{
		return false;
	}

	// initalize Touch events
	auto listener = EventListenerTouchOneByOne::create();
	listener->setSwallowTouches(true);
	listener->onTouchBegan = CC_CALLBACK_2(PlayLayer::onTouchBegan, this);
	listener->onTouchMoved = CC_CALLBACK_2(PlayLayer::onTouchMoved, this);
	listener->onTouchEnded = CC_CALLBACK_2(PlayLayer::onTouchEnded, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
	//


	initPlayer();

	return true;
}

void PlayLayer::initPlayer() {

	Point center = Point(240, 160);

}


bool PlayLayer::onTouchBegan(cocos2d::Touch* touch, cocos2d::Event* event) {

	Point p = touch->getLocation();

	return true;
}

void PlayLayer::onTouchMoved(Touch* touch, Event* event) {

	auto pos_cur = touch->getLocation();

}

void PlayLayer::onTouchEnded(Touch* touch, Event* event) {

}
