//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MomoChatSDK : NSObject
{
}

+ (id)dictionaryFromQuery:(id)arg1 usingEncoding:(unsigned long long)arg2;
+ (_Bool)sendResponse:(id)arg1;
+ (_Bool)sendRequest:(id)arg1;
+ (_Bool)openMomoApp;
+ (id)getSDKVersion;
+ (id)getMomoAppInstallUrl;
+ (_Bool)isMomoAppSupportSDK;
+ (_Bool)isMomoAppInstalled;
+ (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (void)registerApp:(id)arg1;

@end

