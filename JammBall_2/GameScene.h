//
//  GameScene.h
//  Game_008
//

//  Copyright (c) 2014年 寺内 信夫. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface GameScene : SKScene

- (void)readyGame;
- (void)startGame;

- (void)  setTextLevel: (NSString *)string;
- (void)  setTextLabel: (NSString *)string;

- (void)setIndex: (NSInteger)index
		    name: (NSString *)name
		 command: (NSString *)command
		  tensuu: (NSString *)tensuu
		 message: (NSString *)message;

@end
