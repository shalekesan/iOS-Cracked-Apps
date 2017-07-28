//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVMonitorInfoProtocol.h"

@class NSString;

@interface WVBridgeMonitorStat : NSObject <WVMonitorInfoProtocol>
{
    NSString *_name;
    NSString *_ret;
    NSString *_message;
    NSString *_url;
}

+ (id)monitorPoint;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *ret; // @synthesize ret=_ret;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 withRet:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

