//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface AppMonitorMetricValueSet : NSObject
{
    int _oslock;
    NSMutableDictionary *_eventsDict;
}

@property(retain, nonatomic) NSMutableDictionary *eventsDict; // @synthesize eventsDict=_eventsDict;
- (void).cxx_destruct;
- (id)eventForId:(id)arg1 module:(id)arg2 monitorPoint:(id)arg3 extraInfo:(id)arg4 realTimeDebug:(_Bool)arg5;
- (id)eventForId:(id)arg1 module:(id)arg2 monitorPoint:(id)arg3 extraInfo:(id)arg4;
- (long long)metricsCount;
- (id)events;
- (id)init;

@end

