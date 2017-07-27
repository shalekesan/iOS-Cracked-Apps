//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface StatusReportCtl : NSObject
{
    struct timeval bufferStartTime;
    int _key;
    NSMutableDictionary *_dicMta;
    long long _firstLoadTime;
}

+ (int)reportTimeInterval:(long long)arg1 url:(id)arg2 linkTime:(long long)arg3 downloadTime:(long long)arg4 fileSize:(long long)arg5;
+ (int)reportException:(long long)arg1 url:(id)arg2 info:(id)arg3 errorCode:(long long)arg4 retryCount:(int)arg5 reqResult:(int)arg6;
+ (int)reportException:(long long)arg1 url:(id)arg2 info:(id)arg3 errorCode:(long long)arg4;
+ (id)reportCtlWithCmd:(long long)arg1;
+ (long long)getTimeLengthWithStartTime:(struct timeval)arg1 endTime:(struct timeval)arg2;
@property(nonatomic) int key; // @synthesize key=_key;
@property long long firstLoadTime; // @synthesize firstLoadTime=_firstLoadTime;
@property(retain, nonatomic) NSMutableDictionary *dicMta; // @synthesize dicMta=_dicMta;
- (void).cxx_destruct;
- (int)Clear;
- (long long)setPlayerFirstLoadTimeWithBkgLength:(long long)arg1;
- (void)prepareFirstLoadStartTime;
- (int)SetStatistic:(unsigned short)arg1 pValue:(char *)arg2 uSize:(unsigned int)arg3;
- (int)SetStatisticTimeWithType:(unsigned short)arg1;
- (int)SetStatisticWithDic:(id)arg1;
- (int)SetStatistic:(unsigned short)arg1 string:(id)arg2;
- (int)SetStatistic:(unsigned short)arg1 doubleNumber:(double)arg2;
- (int)SetStatistic:(unsigned short)arg1 ulongNumber:(unsigned long long)arg2;
- (int)SetStatistic:(unsigned short)arg1 longNumber:(long long)arg2;
- (int)SetStatistic:(unsigned short)arg1 uIntNumber:(unsigned int)arg2;
- (int)SetStatistic:(unsigned short)arg1 intNumber:(int)arg2;
- (int)SetStatistic:(unsigned short)arg1 shortNumber:(short)arg2;
- (int)SetStatistic:(unsigned short)arg1 NSUIntegerNumber:(unsigned long long)arg2;
- (int)SetStatistic:(unsigned short)arg1 NSIntegerNumber:(long long)arg2;
- (_Bool)valueExsistForType:(int)arg1;
- (void)setCommand:(unsigned short)arg1;
- (id)init;

@end
