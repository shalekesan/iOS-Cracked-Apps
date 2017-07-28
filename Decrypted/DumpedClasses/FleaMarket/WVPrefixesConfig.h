//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVConfigBase.h"

@class NSSet;

@interface WVPrefixesConfig : WVConfigBase
{
    NSSet *_appNames;
}

+ (id)getAppName:(id)arg1;
+ (_Bool)isValidAppName:(id)arg1;
+ (id)appNames;
+ (id)config;
+ (id)sharedConfig;
@property(retain) NSSet *appNames; // @synthesize appNames=_appNames;
- (void).cxx_destruct;
- (id)formatSubPrefix:(id)arg1;
- (id)formatCommonPrefix:(id)arg1;
- (void)findAppNames:(id)arg1;
- (id)mergeConfigWith:(id)arg1 withErrorMsg:(id *)arg2;
- (void)clear;
- (void)configUpdated:(_Bool)arg1;
- (id)getConfigFromJSON:(id)arg1 withUpdateCount:(unsigned long long *)arg2 withErrorMsg:(id *)arg3;
- (id)getConfigUrl:(id)arg1;
- (id)init;

@end

