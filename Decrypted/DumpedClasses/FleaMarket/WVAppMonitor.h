//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WVAppMonitor : NSObject
{
}

+ (void)commitAlarmWithModule:(id)arg1 monitorPoint:(id)arg2 error:(id)arg3 arg:(id)arg4;
+ (void)commitAlarmPoint:(id)arg1 error:(id)arg2 arg:(id)arg3;
+ (id)getStatData:(id)arg1;
+ (id)getStatData:(id)arg1 withClass:(Class)arg2;
+ (void)commit:(id)arg1 withPoint:(id)arg2;
+ (void)commit:(id)arg1;
+ (id)registeredMonitorPoint;
+ (void)registerStatMonitor:(Class)arg1 withPoint:(id)arg2;
+ (void)registerStatMonitor:(Class)arg1;
+ (id)getResolvedMonitorInfo:(Class)arg1;

@end

