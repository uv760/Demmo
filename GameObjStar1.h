//
//  GameObjStar1.h
//  example12-1
//
//  Created by shuoquan man on 12-10-21.
//  Copyright (c) 2012Äê __MyCompanyName__. All rights reserved.
//

#ifndef example16_1_GameObjStar1_h
#define example16_1_GameObjStar1_h
#include "cocos2d.h"
using namespace cocos2d;

class GameObjStar1 : public CCNode
{
public:
	GameObjStar1(void);
	short state;
	virtual ~GameObjStar1(void);
	virtual void onEnter();
	virtual void onExit();
	bool _visable;
	void set_visable(bool var);
	bool get_visable();
};

#endif
