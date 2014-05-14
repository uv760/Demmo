//
//  GameObjStar1.cpp
//  example12-1
//
//  Created by shuoquan man on 12-10-21.
//  Copyright (c) 2012Äê __MyCompanyName__. All rights reserved.
//
#include "GameObjStar1.h"
void GameObjStar1::set_visable(bool var){
	_visable = var;
	this->setVisible(var);
}
bool GameObjStar1::get_visable(){
	return _visable;
}
GameObjStar1::GameObjStar1(){

}

GameObjStar1::~GameObjStar1(){

}
void GameObjStar1::onEnter(){
	CCNode::onEnter();
	//ÐÇÐÇ³õÊ¼»¯
	this->setContentSize(CCSizeMake(36.5,35.5));
	CCSprite* star = CCSprite::create("star1.png");
	star->setScale(0.5);
	_visable = true;
	addChild(star,1);
}
void GameObjStar1::onExit(){
	CCNode::onExit();
}