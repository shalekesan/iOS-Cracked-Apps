//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XKeepStateCenter : NSObject
{
}

+ (id)sharedInstance;
- (void)runNowAndDealyed:(id)arg1;
- (void)runDealyed:(id)arg1;
- (void)runRightNow:(id)arg1;
- (void)keepIt:(id)arg1;
- (void)needRun:(id)arg1;
- (id)make:(id)arg1 runInQueue:(int)arg2 withInterval:(double)arg3 andMode:(unsigned long long)arg4;

@end

