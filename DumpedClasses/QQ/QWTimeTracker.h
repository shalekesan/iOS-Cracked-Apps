//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QWTimeTracker : NSObject
{
    NSMutableDictionary *_allBeginTimeMap;
}

+ (id)shareTracker;
- (void).cxx_destruct;
- (void)endTrackWithOPName:(id)arg1 userType:(int)arg2 result:(_Bool)arg3;
- (double)timeCostWithOPName:(id)arg1;
- (void)startTrackWithOPName:(id)arg1;
- (id)init;

@end
