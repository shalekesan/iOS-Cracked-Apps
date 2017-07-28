//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSTimer;

@interface TBCrashGuardWeakTimerTarget : NSObject
{
    id _weakTarget;
    SEL _selector;
    NSString *_targetClass;
    NSTimer *_timer;
}

@property(nonatomic) __weak NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *targetClass; // @synthesize targetClass=_targetClass;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id weakTarget; // @synthesize weakTarget=_weakTarget;
- (void).cxx_destruct;
- (void)timerFiredStub:(id)arg1;

@end

