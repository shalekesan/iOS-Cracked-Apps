//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSMutableArray;

@interface POPAnimator : NSObject
{
    CADisplayLink *_displayLink;
    list_670f5810 _list;
    struct __CFDictionary *_dict;
    NSMutableArray *_observers;
    list_670f5810 _pendingList;
    struct __CFRunLoopObserver *_pendingListObserver;
    double _slowMotionStartTime;
    double _slowMotionLastTime;
    double _slowMotionAccumulator;
    double _beginTime;
    struct _opaque_pthread_mutex_t _lock;
    _Bool _disableDisplayLink;
    id <POPAnimatorDelegate> _delegate;
}

+ (id)sharedAnimator;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) _Bool disableDisplayLink; // @synthesize disableDisplayLink=_disableDisplayLink;
@property(nonatomic) __weak id <POPAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)renderTime:(double)arg1;
- (void)render;
- (double)_currentRenderTime;
@property(readonly, nonatomic) double refreshPeriod;
- (id)animationForObject:(id)arg1 key:(id)arg2;
- (id)animationKeysForObject:(id)arg1;
- (void)removeAnimationForObject:(id)arg1 key:(id)arg2;
- (void)removeAnimationForObject:(id)arg1 key:(id)arg2 cleanupDict:(_Bool)arg3;
- (void)removeAllAnimationsForObject:(id)arg1;
- (void)addAnimation:(id)arg1 forObject:(id)arg2 key:(id)arg3;
- (id)observers;
- (void)_renderTime:(double)arg1 item:(shared_ptr_1553c9f8)arg2;
- (void)_renderTime:(double)arg1 items:(list_670f5810)arg2;
- (void)_scheduleProcessPendingList;
- (void)_clearPendingListObserver;
- (void)_processPendingList;
- (void)dealloc;
- (id)init;

@end

