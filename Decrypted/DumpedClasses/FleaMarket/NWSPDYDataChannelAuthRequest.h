//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPDYRequestDataDelegate.h"

@class NSMutableURLRequest, NSString, NWSPDYRequest, NWSPDYSession;

@interface NWSPDYDataChannelAuthRequest : NSObject <SPDYRequestDataDelegate>
{
    _Bool success;
    _Bool call;
    NSString *authStatus;
    NSString *_hostWithScheme;
    NWSPDYSession *_session;
    NWSPDYRequest *_request;
    NSMutableURLRequest *_originRequest;
}

+ (id)buildURL:(id)arg1 ignLoc:(_Bool)arg2;
@property(retain, nonatomic) NSMutableURLRequest *originRequest; // @synthesize originRequest=_originRequest;
@property(retain, nonatomic) NWSPDYRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak NWSPDYSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1 resp:(id)arg2;
- (void)didloadFinishing;
- (void)didLoadData:(id)arg1;
- (void)didReceiveResponse:(id)arg1 info:(id)arg2;
- (id)willSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (id)initWithsession:(id)arg1 ignLoc:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

