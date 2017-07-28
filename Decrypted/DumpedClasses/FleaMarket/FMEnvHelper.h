//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIWindow;

@interface FMEnvHelper : NSObject
{
    _Bool _isAdmState;
    UIWindow *_envWindow;
}

+ (_Bool)isAdmState;
+ (void)setAdmState:(_Bool)arg1;
+ (void)setEnvironmentInLocalStorage:(long long)arg1;
+ (long long)environmentInLocalStorage;
+ (_Bool)hasStoredLocalEnvironment;
+ (id)shareInstance;
@property(nonatomic) _Bool isAdmState; // @synthesize isAdmState=_isAdmState;
@property(retain, nonatomic) UIWindow *envWindow; // @synthesize envWindow=_envWindow;
- (void).cxx_destruct;

@end

