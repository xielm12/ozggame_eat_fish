//
//  EatFishObjFishNode.h
//  ozggame_eat_fish
//
//  Created by 欧志刚 on 13-11-3.
//  Copyright (c) 2013年 欧志刚. All rights reserved.
//

#import "cocos2d.h"
#import "AppConfig.h"

enum EatFishObjFishNodeTag
{
    kEatFishObjFishNodeTagMainSprite = 0
};

enum EatFishObjFishNodeOrientation
{
    kEatFishObjFishNodeOrientationLeft = 0,
    kEatFishObjFishNodeOrientationRight = 1
};

@interface EatFishObjFishNode : CCNode

@property (nonatomic, assign)CGRect collisionArea; //碰撞区域
@property (nonatomic, assign)enum EatFishObjFishNodeOrientation orientation; //朝向
@property (nonatomic, assign)NSString* typeName;

+ (id)nodeWithFishSpriteFrameNames:(NSArray*)fishSpriteFrameNames;
- (id)initWithFishSpriteFrameNames:(NSArray*)fishSpriteFrameNames;

- (void)orientationLeft; //转向左边
- (void)orientationRight; //转向右边

@end
