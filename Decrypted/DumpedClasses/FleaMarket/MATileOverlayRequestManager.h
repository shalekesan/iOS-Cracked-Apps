//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSRunLoop, NSThread;

@interface MATileOverlayRequestManager : NSObject
{
    NSMutableArray *_waitingStack;
    NSThread *_loadThread;
    NSRunLoop *_currentLoop;
    _Bool _startOperating;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool startOperating; // @synthesize startOperating=_startOperating;
- (void).cxx_destruct;
- (void)addRequestOperation:(id)arg1;
- (void)cancelAllOperations;
- (void)executeOperation;
- (void)stopLoadThread;
- (void)startLoadThread:(id)arg1;
- (void)dealloc;
- (id)init;

@end

