//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FMAlipay : NSObject
{
    NSMutableArray *_resultBlocks;
}

+ (void)setPayWindow:(id)arg1;
+ (void)payWithTradeNo:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (id)payURLWithSignStr:(id)arg1;
+ (void)parseAlipayAPPURL:(id)arg1;
+ (_Bool)parseAlipayURL:(id)arg1;
+ (_Bool)useInterAlipay;
+ (void)pay:(id)arg1 from:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)pay:(id)arg1 alipayNO:(id)arg2 result:(CDUnknownBlockType)arg3 toH5:(CDUnknownBlockType)arg4;
+ (void)pay:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (id)instance;
- (void).cxx_destruct;
- (id)resultBlocks;
- (id)init;

@end

