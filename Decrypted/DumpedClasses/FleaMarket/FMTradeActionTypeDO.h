//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMTradeActionTypeDO : NSObject
{
    long long _actionType;
    NSString *_actionTitle;
}

+ (id)getBuyerActionWithActionString:(id)arg1;
+ (id)getSellerActionWithActionString:(id)arg1;
+ (id)getActionWithType:(long long)arg1 withTitle:(id)arg2;
@property(retain, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;

@end

