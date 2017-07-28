//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQPHTTPClient;

@interface MQPAPIManager : NSObject
{
    MQPHTTPClient *_httpClient;
}

+ (id)opQueue;
+ (id)bytesRequestWithModel:(id)arg1;
+ (id)sharedManager;
+ (id)alloc;
+ (void)parseMspBytes:(id)arg1;
- (void).cxx_destruct;
- (_Bool)needRecordHost:(id)arg1;
- (void)sendRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sendLogData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getTpl:(id)arg1 bnversion:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendHTTPRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) MQPHTTPClient *httpClient; // @synthesize httpClient=_httpClient;
- (void)processResponse:(id)arg1;
- (void)processHeader:(id)arg1;

@end

