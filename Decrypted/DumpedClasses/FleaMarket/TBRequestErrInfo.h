//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBErrorBaseInfo.h"

@class NSString;

@interface TBRequestErrInfo : TBErrorBaseInfo
{
    NSString *errorCode;
    NSString *errorMsg;
    NSString *videoPlayType;
    NSString *cdnIP;
    NSString *playWay;
    NSString *playStage;
}

@property(copy, nonatomic) NSString *playStage; // @synthesize playStage;
@property(copy, nonatomic) NSString *playWay; // @synthesize playWay;
@property(copy, nonatomic) NSString *cdnIP; // @synthesize cdnIP;
@property(copy, nonatomic) NSString *videoPlayType; // @synthesize videoPlayType;
- (void)setErrorMsg:(id)arg1;
- (id)errorMsg;
- (void)setErrorCode:(id)arg1;
- (id)errorCode;
- (void).cxx_destruct;
- (id)toDictionary;

@end

