//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@interface TFELoadOptions : NSObject
{
    int _timeout;
    unsigned long long _cachePolicy;
    double _connectionTimeout;
    NSString *_httpMethod;
    NSDictionary *_requestHeaders;
    NSData *_requestData;
    id _userInfo;
}

@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
@property(retain, nonatomic) NSDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property(retain, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(nonatomic) int timeout; // @synthesize timeout=_timeout;
@property(nonatomic) double connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (void).cxx_destruct;
- (id)initWithCachePolicy:(unsigned long long)arg1 connectionTimeout:(int)arg2 timeout:(int)arg3;
- (id)initWithCachePolicy:(unsigned long long)arg1;

@end

