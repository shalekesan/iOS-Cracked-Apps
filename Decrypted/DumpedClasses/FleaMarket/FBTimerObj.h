//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface FBTimerObj : NSObject
{
    _Bool _repeats;
    int _interval;
    NSTimer *_timer;
    void *_callback;
    struct fb_core *_core;
}

@property(nonatomic) struct fb_core *core; // @synthesize core=_core;
@property(nonatomic) void *callback; // @synthesize callback=_callback;
@property(nonatomic) int interval; // @synthesize interval=_interval;
@property(nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)timerFired:(id)arg1;

@end

