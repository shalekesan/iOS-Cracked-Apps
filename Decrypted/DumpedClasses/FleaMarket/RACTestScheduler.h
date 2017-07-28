//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RACScheduler.h"

@interface RACTestScheduler : RACScheduler
{
    struct __CFBinaryHeap *_scheduledActions;
    unsigned long long _numberOfDirectlyScheduledBlocks;
}

@property(nonatomic) unsigned long long numberOfDirectlyScheduledBlocks; // @synthesize numberOfDirectlyScheduledBlocks=_numberOfDirectlyScheduledBlocks;
@property(readonly, nonatomic) struct __CFBinaryHeap *scheduledActions; // @synthesize scheduledActions=_scheduledActions;
- (id)after:(id)arg1 repeatingEvery:(double)arg2 withLeeway:(double)arg3 schedule:(CDUnknownBlockType)arg4;
- (id)after:(id)arg1 schedule:(CDUnknownBlockType)arg2;
- (id)schedule:(CDUnknownBlockType)arg1;
- (void)stepAll;
- (void)step:(unsigned long long)arg1;
- (void)step;
- (void)dealloc;
- (id)init;

@end

