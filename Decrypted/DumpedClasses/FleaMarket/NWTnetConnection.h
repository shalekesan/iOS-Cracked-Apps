//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NWBaseConnection.h"

#import "SPDYRequestDataDelegate.h"

@class NSString, NSThread, NWHostUrl, NWSPDYRequest, NWTnetSession;

@interface NWTnetConnection : NWBaseConnection <SPDYRequestDataDelegate>
{
    _Bool _isSSLError;
    int _retryType;
    NWHostUrl *_hostUrl;
    NWTnetSession *_session;
    NWSPDYRequest *_tnetRequest;
    NSThread *_invokeThread;
}

+ (void)initialize;
@property(nonatomic) _Bool isSSLError; // @synthesize isSSLError=_isSSLError;
@property(nonatomic) int retryType; // @synthesize retryType=_retryType;
@property(nonatomic) __weak NSThread *invokeThread; // @synthesize invokeThread=_invokeThread;
@property(retain, nonatomic) NWSPDYRequest *tnetRequest; // @synthesize tnetRequest=_tnetRequest;
@property(retain, nonatomic) NWTnetSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NWHostUrl *hostUrl; // @synthesize hostUrl=_hostUrl;
- (void).cxx_destruct;
- (void)didLoadLog:(id)arg1;
- (void)didFailWithError:(id)arg1 resp:(id)arg2;
- (void)didloadFinishing;
- (void)didLoadData:(id)arg1;
- (void)didReceiveResponse:(id)arg1 info:(id)arg2;
- (id)willSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (int)handleConnectionError:(id)arg1 withPort:(int)arg2;
- (void)setSessionResused:(_Bool)arg1;
- (void)setIp:(id)arg1 withPort:(unsigned short)arg2 withProtocol:(id)arg3;
- (id)inversionRequest;
- (void)retry;
- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

