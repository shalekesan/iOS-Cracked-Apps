//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainCancelOrderRequest : CTBusinessBean
{
    int serviceVersion;
    long long orderId;
    NSString *cancelReason;
    int cancelType;
}

@property(nonatomic) int cancelType; // @synthesize cancelType;
@property(copy, nonatomic) NSString *cancelReason; // @synthesize cancelReason;
@property(nonatomic) long long orderId; // @synthesize orderId;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
