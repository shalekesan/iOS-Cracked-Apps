//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVMonitorInfoProtocol.h"

@class NSString;

@interface WVWebPerformanceCheckResultStat : NSObject <WVMonitorInfoProtocol>
{
    double _score;
    NSString *_url;
    NSString *_version;
    NSString *_result;
    NSString *_bizCode;
}

+ (id)monitorMeasureRange:(id)arg1;
+ (id)monitorPoint;
@property(retain, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
@property(retain, nonatomic) NSString *result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) double score; // @synthesize score=_score;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

