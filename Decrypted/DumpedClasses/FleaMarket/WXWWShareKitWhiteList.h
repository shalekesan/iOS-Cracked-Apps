//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface WXWWShareKitWhiteList : NSObject
{
    NSDictionary *_dicWhiteList;
}

+ (id)whiteListData;
@property(retain, nonatomic) NSDictionary *dicWhiteList; // @synthesize dicWhiteList=_dicWhiteList;
- (id)getSoureAppNameByAppId:(id)arg1;
- (id)getSoureAppBundleIdByAppId:(id)arg1;
- (_Bool)verifyWXShareKitAppId:(id)arg1 andBundleId:(id)arg2;
- (_Bool)isWXShareKitAppIdInWhiteList:(id)arg1;
- (void)dealloc;
- (id)init;

@end

