//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NBDebugAppConfig, NBDebugAppManager;

@interface NBDebugAppContext : NSObject
{
    NBDebugAppConfig *_appConfig;
    NBDebugAppManager *_appManager;
}

+ (id)appManager;
+ (id)config;
+ (id)shared;
@property(retain, nonatomic) NBDebugAppManager *appManager; // @synthesize appManager=_appManager;
@property(retain, nonatomic) NBDebugAppConfig *appConfig; // @synthesize appConfig=_appConfig;
- (void).cxx_destruct;
- (id)initInPrivate;
- (id)init;

@end
