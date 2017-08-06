//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIDevice.h"

@class NSArray, NSDate, NSString;

@interface UIDevice (YYAdd)
+ (double)systemVersion;
@property(readonly, nonatomic) NSArray *cpuUsagePerProcessor;
@property(readonly, nonatomic) float cpuUsage;
@property(readonly, nonatomic) unsigned long long cpuCount;
@property(readonly, nonatomic) long long memoryPurgable;
@property(readonly, nonatomic) long long memoryWired;
@property(readonly, nonatomic) long long memoryInactive;
@property(readonly, nonatomic) long long memoryActive;
@property(readonly, nonatomic) long long memoryFree;
@property(readonly, nonatomic) long long memoryUsed;
@property(readonly, nonatomic) long long memoryTotal;
@property(readonly, nonatomic) long long diskSpaceUsed;
@property(readonly, nonatomic) long long diskSpaceFree;
@property(readonly, nonatomic) long long diskSpace;
@property(readonly, nonatomic) NSDate *systemUptime;
@property(readonly, nonatomic) NSString *machineModelName;
@property(readonly, nonatomic) NSString *machineModel;
- (unsigned long long)getNetworkTrafficBytes:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *ipAddressCell;
@property(readonly, nonatomic) NSString *ipAddressWIFI;
- (id)ipAddressWithIfaName:(id)arg1;
@property(readonly, nonatomic) _Bool canMakePhoneCalls;
@property(readonly, nonatomic) _Bool isJailbroken;
@property(readonly, nonatomic) _Bool isSimulator;
@property(readonly, nonatomic) _Bool yy_isPad;
@end
