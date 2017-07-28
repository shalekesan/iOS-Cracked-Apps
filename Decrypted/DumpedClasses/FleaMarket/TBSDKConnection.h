//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"

@class NSData, NSDictionary, NSError, NSHTTPURLResponse, NSMutableArray, NSMutableData, NSMutableDictionary, NSMutableURLRequest, NSString, NSURL, NSURLConnection, TBSDKHTTPRequestOperation;

@interface TBSDKConnection : NSObject <NSURLConnectionDelegate>
{
    _Bool _isFinished;
    _Bool _isHttp;
    _Bool _shouldRedirect;
    _Bool _isSynchronous;
    _Bool _isCancelled;
    int _cachePolicy;
    int _responseStatusCode;
    int _postFormat;
    int _postGzipSize;
    id <TBSDKProgressDelegate> _uploadProgressDelegate;
    NSURL *_url;
    id <TBSDKCacheDelegate> _downloadCache;
    id <TBSDKProgressDelegate> _downloadProgressDelegate;
    double _timeOutSeconds;
    NSDictionary *_responseHeaders;
    NSMutableDictionary *_requestHeaders;
    NSError *_error;
    id <TBSDKConnectionDelegate> _delegate;
    NSMutableArray *_requestCookies;
    NSData *_responseData;
    NSString *_responseString;
    unsigned long long _responseEncoding;
    NSMutableArray *_fileData;
    NSHTTPURLResponse *_response;
    NSMutableData *_postBody;
    NSMutableArray *_postData;
    NSDictionary *_utDict;
    double _networkEndTime;
    NSURLConnection *_connection;
    NSMutableURLRequest *_request;
    unsigned long long _stringEncoding;
    unsigned long long _contentLength;
    long long _fileSize;
    TBSDKHTTPRequestOperation *_nop;
}

+ (void)cancelAll;
+ (id)requestWithURL:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) TBSDKHTTPRequestOperation *nop; // @synthesize nop=_nop;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) _Bool isSynchronous; // @synthesize isSynchronous=_isSynchronous;
@property _Bool shouldRedirect; // @synthesize shouldRedirect=_shouldRedirect;
@property unsigned long long contentLength; // @synthesize contentLength=_contentLength;
@property unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) double networkEndTime; // @synthesize networkEndTime=_networkEndTime;
@property(retain, nonatomic) NSDictionary *utDict; // @synthesize utDict=_utDict;
@property(nonatomic) int postGzipSize; // @synthesize postGzipSize=_postGzipSize;
@property(retain, nonatomic) NSMutableArray *postData; // @synthesize postData=_postData;
@property(nonatomic) _Bool isHttp; // @synthesize isHttp=_isHttp;
@property _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(retain) NSMutableData *postBody; // @synthesize postBody=_postBody;
@property(retain) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain) NSMutableArray *fileData; // @synthesize fileData=_fileData;
@property int postFormat; // @synthesize postFormat=_postFormat;
@property(nonatomic) int responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property(nonatomic) unsigned long long responseEncoding; // @synthesize responseEncoding=_responseEncoding;
@property(retain, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSMutableArray *requestCookies; // @synthesize requestCookies=_requestCookies;
@property(nonatomic) __weak id <TBSDKConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property(retain, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(nonatomic) double timeOutSeconds; // @synthesize timeOutSeconds=_timeOutSeconds;
@property __weak id <TBSDKProgressDelegate> downloadProgressDelegate; // @synthesize downloadProgressDelegate=_downloadProgressDelegate;
@property id <TBSDKCacheDelegate> downloadCache; // @synthesize downloadCache=_downloadCache;
@property(nonatomic) int cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property __weak id <TBSDKProgressDelegate> uploadProgressDelegate; // @synthesize uploadProgressDelegate=_uploadProgressDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)utLog;
- (void)fillResponse:(id)arg1;
- (void)reportConnectionDidFinishLoading;
- (void)reportSendProgress:(id)arg1;
- (void)reportDownProgress:(id)arg1;
- (void)addData:(id)arg1 withFileName:(id)arg2 andContentType:(id)arg3 forKey:(id)arg4;
- (void)clearRequestInfo;
- (void)buildMultipartFormDataPostBody;
- (void)appendPostString:(id)arg1;
- (void)buildURLEncodedPostBody;
- (void)appendPostData:(id)arg1;
- (void)setupPostBody;
- (id)encodeURL:(id)arg1;
- (void)clearDelegatesAndCancel;
- (void)reportRequestStarted;
- (void)gzipPostBody;
- (void)buildNetworkOpeation:(_Bool)arg1;
- (void)startAsynchronous;
- (void)startSynchronous;
- (void)addRequestHeader:(id)arg1 value:(id)arg2;
- (void)addPostValue:(id)arg1 forKey:(id)arg2;
- (void)setPostValue:(id)arg1 forKey:(id)arg2;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

