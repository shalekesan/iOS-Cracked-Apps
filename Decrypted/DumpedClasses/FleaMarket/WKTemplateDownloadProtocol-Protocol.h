//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol WKTemplateDownloadProtocol <NSObject>
- (void)downloadTemplateByTag:(NSString *)arg1 comletionBlock:(void (^)(NSError *, NSArray *))arg2;
- (void)downloadTemplatesByIds:(NSDictionary *)arg1 comletionBlock:(void (^)(NSError *, NSArray *))arg2;

@optional
- (void)logEvent:(NSString *)arg1 param:(NSArray *)arg2;
@end

