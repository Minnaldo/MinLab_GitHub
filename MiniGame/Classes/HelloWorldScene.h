#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

USING_NS_CC;

class HelloWorld : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);

	Size visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();


	void doPushScene(Ref* pSender);
	void doPushSceneTran(Ref* pSender);
	void doReplaceScene(Ref* pSender);

	MenuItemImage *GameStart = NULL;
	MenuItemImage *LeaderBoard = NULL;
	MenuItemImage *Achievement = NULL;
	
	void doPushScene2(Ref* pSender);
	void doPushScene3(Ref* pSender);
	void doPushScene4(Ref* pSender);
};

#endif // __HELLOWORLD_SCENE_H__
