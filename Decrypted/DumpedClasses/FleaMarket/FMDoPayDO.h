//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FMDoPayDO : NSObject
{
    _Bool _canPay;
    NSString *_price;
    NSString *_reason;
    NSArray *_orderOutIds;
    NSArray *_orderIds;
    NSString *_signStr;
}

@property(copy, nonatomic) NSString *signStr; // @synthesize signStr=_signStr;
@property(retain, nonatomic) NSArray *orderIds; // @synthesize orderIds=_orderIds;
@property(retain, nonatomic) NSArray *orderOutIds; // @synthesize orderOutIds=_orderOutIds;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(nonatomic) _Bool canPay; // @synthesize canPay=_canPay;
- (void).cxx_destruct;

@end

