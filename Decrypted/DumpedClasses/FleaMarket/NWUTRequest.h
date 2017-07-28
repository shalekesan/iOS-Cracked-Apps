//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSNumber, NSString, NWThreadSafeMutableDictionary;

@interface NWUTRequest : NSObject
{
    _Bool _ret;
    _Bool _isDNS;
    _Bool _isSSL;
    _Bool _isProxy;
    _Bool _isSessionReuse;
    _Bool _isIPv6;
    _Bool _isDemote;
    unsigned short _port;
    unsigned short _retryTimes;
    float _floatServerRT;
    int _ipReference;
    NSString *_bizcode;
    NSString *_host;
    NSString *_url;
    NSString *_ip;
    NSString *_ips;
    NSString *_protocolType;
    NSString *_oneWayTime;
    NSString *_firstDataTime;
    NSString *_waitingTime;
    NSString *_sendDataSize;
    NSError *_error;
    NSString *_errorType;
    long long _statusCode;
    long long _recDataSize;
    NSNumber *_serverRT;
    double _timestamp;
    id _userInfo;
    NWThreadSafeMutableDictionary *_args;
}

@property(retain) NWThreadSafeMutableDictionary *args; // @synthesize args=_args;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) int ipReference; // @synthesize ipReference=_ipReference;
@property(nonatomic) _Bool isDemote; // @synthesize isDemote=_isDemote;
@property(nonatomic) _Bool isIPv6; // @synthesize isIPv6=_isIPv6;
@property(nonatomic) _Bool isSessionReuse; // @synthesize isSessionReuse=_isSessionReuse;
@property(nonatomic) _Bool isProxy; // @synthesize isProxy=_isProxy;
@property(nonatomic) _Bool isSSL; // @synthesize isSSL=_isSSL;
@property(nonatomic) _Bool isDNS; // @synthesize isDNS=_isDNS;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) float floatServerRT; // @synthesize floatServerRT=_floatServerRT;
@property(retain, nonatomic) NSNumber *serverRT; // @synthesize serverRT=_serverRT;
@property(nonatomic) unsigned short retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(nonatomic) long long recDataSize; // @synthesize recDataSize=_recDataSize;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSString *errorType; // @synthesize errorType=_errorType;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *sendDataSize; // @synthesize sendDataSize=_sendDataSize;
@property(retain) NSString *waitingTime; // @synthesize waitingTime=_waitingTime;
@property(retain) NSString *firstDataTime; // @synthesize firstDataTime=_firstDataTime;
@property(retain) NSString *oneWayTime; // @synthesize oneWayTime=_oneWayTime;
@property(retain, nonatomic) NSString *protocolType; // @synthesize protocolType=_protocolType;
@property(retain, nonatomic) NSString *ips; // @synthesize ips=_ips;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) _Bool ret; // @synthesize ret=_ret;
@property(retain, nonatomic) NSString *bizcode; // @synthesize bizcode=_bizcode;
- (void).cxx_destruct;
- (void)increaseRetryTimes;
- (void)appendRecvDataSize:(unsigned long long)arg1;
- (id)init;
- (id)dictionaryError;
- (id)localipDict;
- (id)dictionary;

@end

