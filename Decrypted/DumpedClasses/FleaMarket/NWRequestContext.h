//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString, NSMutableURLRequest, NSString, NSThread, NSURLRequest, NWAtsHelper, NWCacheResponse, NWConnectionOption, NWURLConnection, NWUTRequest;

@interface NWRequestContext : NSObject
{
    NSString *_orginHost;
    NSURLRequest *_orginRequest;
    NSMutableURLRequest *_activeRequest;
    _Bool _isRequireConvertScheme;
    _Bool _isAutoRedirect;
    _Bool _hasReceiveResponse;
    id <NWURLConnectionDelegate> _delegate;
    NWURLConnection *_connection;
    NWConnectionOption *_option;
    NWAtsHelper *_atsHelper;
    double _startTime;
    NWUTRequest *_ut;
    NWCacheResponse *_cacheResponse;
    NSThread *_invokeThread;
    long long _expectedContentLength;
    long long _reqRecTotalSize;
    NSMutableString *_reqTraceStr;
}

+ (_Bool)canInitWithRequest:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSMutableString *reqTraceStr; // @synthesize reqTraceStr=_reqTraceStr;
@property(nonatomic) long long reqRecTotalSize; // @synthesize reqRecTotalSize=_reqRecTotalSize;
@property(nonatomic) long long expectedContentLength; // @synthesize expectedContentLength=_expectedContentLength;
@property(nonatomic) __weak NSThread *invokeThread; // @synthesize invokeThread=_invokeThread;
@property(retain, nonatomic) NWCacheResponse *cacheResponse; // @synthesize cacheResponse=_cacheResponse;
@property(retain, nonatomic) NWUTRequest *ut; // @synthesize ut=_ut;
@property(nonatomic) _Bool hasReceiveResponse; // @synthesize hasReceiveResponse=_hasReceiveResponse;
@property(nonatomic) _Bool isAutoRedirect; // @synthesize isAutoRedirect=_isAutoRedirect;
@property(nonatomic) _Bool isRequireConvertScheme; // @synthesize isRequireConvertScheme=_isRequireConvertScheme;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NWAtsHelper *atsHelper; // @synthesize atsHelper=_atsHelper;
@property(retain, nonatomic) NWConnectionOption *option; // @synthesize option=_option;
@property(retain, nonatomic) NWURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <NWURLConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyUT:(id)arg1 withStatusCode:(long long)arg2;
- (void)initUtArg;
- (void)storeCachedResponse:(id)arg1;
- (_Bool)processRequestCache:(_Bool)arg1;
- (void)explicitNotifyReceiveResponse:(id)arg1;
- (void)notifyRequestDidFinish;
- (void)notifyDidSendBodyData:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)notifyWasRedirectedToRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)notifyDidFinishLoading;
- (void)notifyDidFailWithError:(id)arg1;
- (void)notifyDidReceiveData:(id)arg1;
- (void)notifyDidReceiveResponse:(id)arg1;
- (void)removeFromPool;
- (void)retainToPool;
- (_Bool)isSchemeChanged;
- (void)preprocessRequestHeader;
- (int)currentPort;
- (void)setRequestHeader:(id)arg1 forKey:(id)arg2;
- (void)updateRequestURL:(id)arg1;
- (void)updateRequestHost:(id)arg1;
- (void)updateRequestScheme:(id)arg1;
- (void)updateTimeoutInterval:(double)arg1;
- (void)resetRequest:(id)arg1;
- (id)currentHttpHeaders;
- (id)currentHttpBody;
- (id)originURL;
- (id)currentURL;
- (id)currentURLString;
- (id)originHttpHead:(id)arg1;
- (id)originURLString;
- (id)orginScheme;
- (id)originHost;
- (id)currentScheme;
- (id)currentHost;
- (id)originRequest;
- (id)currentRequest;
- (double)currentTimeoutInterval;
- (void)standardizeURL;
- (id)initWithRequest:(id)arg1 withConnection:(id)arg2 withOption:(id)arg3 withDelegate:(id)arg4;

@end

