//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UTMCConfigInterfaceUpdate.h"

@class NSLock, NSMutableArray, NSString, UTMCTask;

@interface AMTempEventService : NSObject <UTMCConfigInterfaceUpdate>
{
    NSString *duration;
    long long _aggregateTimeInterval;
    UTMCTask *_storeTask;
    UTMCTask *_aggregateTask;
    NSMutableArray *_tempAlarmEvents;
    NSMutableArray *_tempCounterEvents;
    NSMutableArray *_tempStatEvents;
    long long _currentIntervalTime;
    NSLock *_lock;
}

+ (void)registerStatEventWithModule:(id)arg1 monitorPoint:(id)arg2 measureData:(id)arg3 dimensionData:(id)arg4 commitDetail:(_Bool)arg5;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property long long currentIntervalTime; // @synthesize currentIntervalTime=_currentIntervalTime;
@property(retain, nonatomic) NSMutableArray *tempStatEvents; // @synthesize tempStatEvents=_tempStatEvents;
@property(retain, nonatomic) NSMutableArray *tempCounterEvents; // @synthesize tempCounterEvents=_tempCounterEvents;
@property(retain, nonatomic) NSMutableArray *tempAlarmEvents; // @synthesize tempAlarmEvents=_tempAlarmEvents;
@property(retain, nonatomic) UTMCTask *aggregateTask; // @synthesize aggregateTask=_aggregateTask;
@property(retain, nonatomic) UTMCTask *storeTask; // @synthesize storeTask=_storeTask;
@property(nonatomic) long long aggregateTimeInterval; // @synthesize aggregateTimeInterval=_aggregateTimeInterval;
- (void).cxx_destruct;
- (long long)tableForEventType:(long long)arg1;
- (void)flushEvents:(id)arg1 toTable:(long long)arg2;
- (void)cleanExpiredDataWithTable:(long long)arg1;
- (void)cleanExceededDataWithTable:(long long)arg1;
- (void)clearStore;
- (void)checkAndCleanStore;
- (void)startAggregateTimerTask;
- (void)startStoreTimerTask;
- (void)didEnterForeground;
- (void)didEnterBackground;
- (void)_commitEventWithType:(long long)arg1;
- (void)commitEvent;
- (id)getEarlyEventsWithType:(long long)arg1 intervalTime:(long long)arg2 limit:(long long)arg3;
- (void)store;
- (void)addEvent:(id)arg1;
- (void)updateSysConfigValue:(id)arg1 sysKey:(id)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

