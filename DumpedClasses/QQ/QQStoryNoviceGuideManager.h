//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQStoryNoviceGuideManager : NSObject
{
}

+ (void)dismiss;
+ (void)dismissTipsWithStateSave:(int)arg1;
+ (void)resetAliveType:(int)arg1;
+ (_Bool)checkIfTypeIsAlive:(int)arg1;
+ (void)onForceOffline:(id)arg1;
+ (_Bool)checkIfTypeNeedDisplay:(int)arg1 opration:(_Bool)arg2;
+ (_Bool)checkIfTypeNeedDisplay:(int)arg1;
+ (void)showAnimationMaskViewIfNecessary:(int)arg1 inView:(id)arg2 dismissBlock:(CDUnknownBlockType)arg3;
+ (void)showTipsWithMessage:(id)arg1 inView:(id)arg2 rect:(struct CGRect)arg3 arrowDirection:(long long)arg4 popUpViewHorizontalMargin:(double)arg5 survivalTime:(double)arg6;
+ (void)showTipsIfNecessary:(int)arg1 inView:(id)arg2 rect:(struct CGRect)arg3 popUpViewHorizontalMargin:(double)arg4;

@end

