//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AppMonitorEventConfig : NSObject
{
    _Bool _isOpen;
    long long _triggerCount;
    long long _statisticsInterval;
    NSString *_eventId;
    NSString *_aggregateEventArgsKey;
    long long _eventType;
}

+ (long long)eventType;
+ (long long)statisticsInterval;
+ (void)setStatisticsInterval:(long long)arg1;
+ (void)setTriggerCount:(long long)arg1;
+ (long long)triggerCount:(id)arg1;
+ (void)setIsOpen:(_Bool)arg1;
+ (_Bool)isOpen;
+ (id)eventId;
+ (id)sharedInstance;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) NSString *aggregateEventArgsKey; // @synthesize aggregateEventArgsKey=_aggregateEventArgsKey;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(nonatomic) long long statisticsInterval; // @synthesize statisticsInterval=_statisticsInterval;
@property(nonatomic) long long triggerCount; // @synthesize triggerCount=_triggerCount;
- (void).cxx_destruct;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
- (id)init;

@end

