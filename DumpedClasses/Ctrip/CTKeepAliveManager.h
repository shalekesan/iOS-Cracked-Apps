//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTConnectionPool, NSMutableArray, NSTimer;

@interface CTKeepAliveManager : NSObject
{
    CTConnectionPool *_connectionPool;
    NSMutableArray *_taskSet;
    NSTimer *_timer;
}

+ (id)getInstance;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain) NSMutableArray *taskSet; // @synthesize taskSet=_taskSet;
@property(retain, nonatomic) CTConnectionPool *connectionPool; // @synthesize connectionPool=_connectionPool;
- (void).cxx_destruct;
- (void)closeAllConnection;
- (void)cancelTaskByToken:(id)arg1;
- (void)removeTask:(id)arg1;
- (void)addTask:(id)arg1;
- (void)doScanConnectionPool:(id)arg1;
- (void)timerStart;
- (id)init;

@end
