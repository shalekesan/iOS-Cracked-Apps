//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol HTResourceVersionCheckerProtocol <NSObject>
- (void)checkVersionWithUrl:(NSString *)arg1 appId:(NSString *)arg2 appVersion:(NSString *)arg3 resInfos:(NSArray *)arg4 isDiff:(_Bool)arg5 isAutoFill:(_Bool)arg6 checkCompletionHandler:(void (^)(NSArray *, NSError *))arg7;
@end
