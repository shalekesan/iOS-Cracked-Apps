//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue, NSThread;

@interface TBIURunInCurrent : NSObject
{
    _Bool _isMainThread;
    NSOperationQueue *_currentOperationQueue;
    NSThread *_currentThread;
    NSObject<OS_dispatch_queue> *_currentQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *currentQueue; // @synthesize currentQueue=_currentQueue;
@property(retain, nonatomic) NSThread *currentThread; // @synthesize currentThread=_currentThread;
@property(retain, nonatomic) NSOperationQueue *currentOperationQueue; // @synthesize currentOperationQueue=_currentOperationQueue;
- (void).cxx_destruct;
- (void)runBlock:(CDUnknownBlockType)arg1;
- (void)runInType:(int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)run:(CDUnknownBlockType)arg1 inType:(int)arg2;
- (void)run:(CDUnknownBlockType)arg1;
- (id)init;

@end

