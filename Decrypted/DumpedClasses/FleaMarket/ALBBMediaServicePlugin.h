//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALBBPluginProtocol.h"

@class NSString;

@interface ALBBMediaServicePlugin : NSObject <ALBBPluginProtocol>
{
}

+ (id)dependencies;
+ (long long)pversion;
+ (void)pluginDidLoad;
+ (void)pluginPreLoad;
+ (id)sharedPlugin;
- (void)pDestory;
- (void)pInitialize:(CDUnknownBlockType)arg1;
- (id)services;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

