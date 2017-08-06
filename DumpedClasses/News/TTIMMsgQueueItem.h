//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TTIMMsgQueueItemConfig, TTRequestMessage, TTResponseMessage;

@interface TTIMMsgQueueItem : NSObject
{
    int _errorCode;
    int _currentRetry;
    int _httpCode;
    TTIMMsgQueueItemConfig *_config;
    long long _expireTime;
    TTRequestMessage *_reqMsg;
    TTResponseMessage *_resMsg;
    long long _sendTime;
    long long _netCostTime;
    NSString *_httpDec;
}

@property(copy, nonatomic) NSString *httpDec; // @synthesize httpDec=_httpDec;
@property(nonatomic) int httpCode; // @synthesize httpCode=_httpCode;
@property(nonatomic) long long netCostTime; // @synthesize netCostTime=_netCostTime;
@property(nonatomic) long long sendTime; // @synthesize sendTime=_sendTime;
@property(retain, nonatomic) TTResponseMessage *resMsg; // @synthesize resMsg=_resMsg;
@property(retain, nonatomic) TTRequestMessage *reqMsg; // @synthesize reqMsg=_reqMsg;
@property(nonatomic) long long expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) int currentRetry; // @synthesize currentRetry=_currentRetry;
@property(retain, nonatomic) TTIMMsgQueueItemConfig *config; // @synthesize config=_config;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;
- (void)bindHttpInfo:(int)arg1 httpDescription:(id)arg2;
- (_Bool)shouldHttpRetry;
- (_Bool)needAck;
- (void)onRetry;
- (_Bool)canRetry;
- (int)priority;
- (void)calculateExpireTimeWithNum:(long long)arg1;
- (void)calculateExpireTime;
- (_Bool)isNeedRemoveDuplication;
- (int)errorCodeInItem;
- (int)cmdInItem;
- (_Bool)isError;
- (id)init;

@end
