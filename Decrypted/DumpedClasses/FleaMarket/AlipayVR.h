//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQPPaysGateway;

@interface AlipayVR : NSObject
{
    id <AlipayVRDelegate> _delegate;
    MQPPaysGateway *_gateway;
}

+ (id)defaultService;
@property(retain, nonatomic) MQPPaysGateway *gateway; // @synthesize gateway=_gateway;
@property(readonly, nonatomic) __weak id <AlipayVRDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleEvent:(unsigned long long)arg1 params:(id)arg2;
- (void)payWithOrder:(id)arg1 from:(id)arg2 delegate:(id)arg3;

@end

