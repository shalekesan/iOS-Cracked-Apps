//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHTTPURLResponse, NSMutableArray, NSMutableData, NSRecursiveLock, NWRequestContext;

@interface NWBaseConnection : NSObject
{
    id _policyInternal;
    _Bool _isAccelerated;
    _Bool _hasReceiveResponse;
    NWRequestContext *_rc;
    double _sendingTime;
    NSHTTPURLResponse *_response;
    NSMutableData *_recvData;
    NSMutableArray *_respErrTimeArray;
    NSRecursiveLock *_respErrTimeLock;
}

@property(nonatomic) _Bool hasReceiveResponse; // @synthesize hasReceiveResponse=_hasReceiveResponse;
@property(nonatomic) _Bool isAccelerated; // @synthesize isAccelerated=_isAccelerated;
@property(retain, nonatomic) NSRecursiveLock *respErrTimeLock; // @synthesize respErrTimeLock=_respErrTimeLock;
@property(retain, nonatomic) NSMutableArray *respErrTimeArray; // @synthesize respErrTimeArray=_respErrTimeArray;
@property(retain, nonatomic) NSMutableData *recvData; // @synthesize recvData=_recvData;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(nonatomic) double sendingTime; // @synthesize sendingTime=_sendingTime;
@property(nonatomic) __weak NWRequestContext *rc; // @synthesize rc=_rc;
- (void).cxx_destruct;
- (void)onAtsProxyBlocked:(int)arg1;
- (void)setExpectedContentLength:(long long)arg1;
- (void)recordRequest:(id)arg1;
- (void)handleResponseError:(long long)arg1 withPolicy:(id)arg2;
- (void)utDnsIp:(id)arg1 error:(id)arg2;
- (void)utRequsetFailure:(id)arg1;
- (void)utNetworkError:(id)arg1 withErrorType:(id)arg2;
- (void)utDidFinishLoading;
- (void)utDidReceiveResponse:(long long)arg1;
- (_Bool)isUnreachable:(id)arg1;
- (void)appendReceiveData:(id)arg1;
- (void)cancel;
- (void)start;
- (_Bool)isForceLocalDNS;
- (id)initWithRequest:(id)arg1;

@end

