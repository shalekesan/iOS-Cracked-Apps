//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface TBAccsCallbackPreloader : NSObject
{
    NSDictionary *_callbackInfo;
}

+ (void)registerNotificationCallback:(id)arg1 withClassName:(id)arg2;
+ (id)shareInstance;
@property(retain, nonatomic) NSDictionary *callbackInfo; // @synthesize callbackInfo=_callbackInfo;
- (void).cxx_destruct;
- (id)findProcessorsFileList;
- (void)loadCallbackConfigWithServiceID:(id)arg1;
- (void)registerCallback:(id)arg1;
- (void)loadCallback;
- (id)init;

@end

