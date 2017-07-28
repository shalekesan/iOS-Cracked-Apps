//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "WXWebSocketDelegate.h"

@class NSString;

@interface WXWebSocketLoader : NSObject <WXWebSocketDelegate, NSCopying>
{
    CDUnknownBlockType _onOpen;
    CDUnknownBlockType _onReceiveMessage;
    CDUnknownBlockType _onClose;
    CDUnknownBlockType _onFail;
    NSString *_identifier;
    NSString *_url;
    NSString *_protocol;
}

@property(copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType onFail; // @synthesize onFail=_onFail;
@property(copy, nonatomic) CDUnknownBlockType onClose; // @synthesize onClose=_onClose;
@property(copy, nonatomic) CDUnknownBlockType onReceiveMessage; // @synthesize onReceiveMessage=_onReceiveMessage;
@property(copy, nonatomic) CDUnknownBlockType onOpen; // @synthesize onOpen=_onOpen;
- (void).cxx_destruct;
- (void)didCloseWithCode:(long long)arg1 reason:(id)arg2 wasClean:(_Bool)arg3;
- (void)didReceiveMessage:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didOpen;
- (void)close:(long long)arg1 reason:(id)arg2;
- (void)clear;
- (void)close;
- (void)send:(id)arg1;
- (void)open;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUrl:(id)arg1 protocol:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

