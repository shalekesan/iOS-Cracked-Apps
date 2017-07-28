//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NWBaseConnection.h"

@class NSURLConnection, NSURLSessionDataTask, NWCFHttpRequest, NWPolicyResult;

@interface NWHttpConnection : NWBaseConnection
{
    _Bool _isRetriedByDomain;
    int _reqType;
    NWCFHttpRequest *_cfHttpConnection;
    NSURLSessionDataTask *_nsSessionTask;
    NSURLConnection *_nsConnection;
    NWPolicyResult *_policy;
}

+ (id)httpSessionDemux;
@property(nonatomic) _Bool isRetriedByDomain; // @synthesize isRetriedByDomain=_isRetriedByDomain;
@property(nonatomic) int reqType; // @synthesize reqType=_reqType;
@property(retain, nonatomic) NWPolicyResult *policy; // @synthesize policy=_policy;
@property(retain, nonatomic) NSURLConnection *nsConnection; // @synthesize nsConnection=_nsConnection;
@property(retain, nonatomic) NSURLSessionDataTask *nsSessionTask; // @synthesize nsSessionTask=_nsSessionTask;
@property(retain, nonatomic) NWCFHttpRequest *cfHttpConnection; // @synthesize cfHttpConnection=_cfHttpConnection;
- (void).cxx_destruct;
- (void)probeSSLError:(id)arg1;
- (id)queryPolicy:(id)arg1 withScheme:(id)arg2;
- (_Bool)hasSuffix:(id)arg1;
- (void)writeCookies:(id)arg1 withRequest:(id)arg2 withDomain:(id)arg3;
- (id)cookie:(id)arg1;
- (void)updateRequest:(id)arg1 withPolicy:(id)arg2;
- (void)sendBySession;
- (void)sendByConnection;
- (void)sendHttpRequest;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 willRedirectToURL:(id)arg2 response:(id)arg3;
- (void)request:(id)arg1 didReceiveResponse:(id)arg2;
- (void)onRedirect2Http:(id)arg1;
- (void)dispatch2Proxy;
- (_Bool)filterAtsHttpsDetectingError:(id)arg1;
- (void)dispatch2Https;
- (void)dispatch2Forbidden;
- (void)dispatch2Cfnetwork;
- (void)onAtsProcess:(id)arg1;
- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSessionDidFinishLoading;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;

@end

