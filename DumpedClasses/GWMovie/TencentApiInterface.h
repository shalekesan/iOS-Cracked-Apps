//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TencentApiInterface : NSObject
{
}

+ (_Bool)isTencentAppSupportTencentApi:(int)arg1;
+ (_Bool)isTencentAppInstall:(int)arg1;
+ (void)openThirdApp:(id)arg1;
+ (_Bool)iphoneQZoneSupportApi;
+ (_Bool)installIphoneQZone;
+ (_Bool)canOpenURL:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (int)sendRespMessaageToThirdApp:(id)arg1 appId:(id)arg2;
+ (int)sendRespMessageToTencentApp:(id)arg1;

@end
