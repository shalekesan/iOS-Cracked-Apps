//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol WXAliPayModuleProtocol <NSObject>
- (void)tradePay:(NSDictionary *)arg1 successBlock:(void (^)(NSDictionary *))arg2 failureBlock:(void (^)(NSDictionary *))arg3;
@end
