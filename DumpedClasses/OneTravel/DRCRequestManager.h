//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ONEAppDelegateStoreDelegate.h"

@class NSOperationQueue, NSString;

@interface DRCRequestManager : NSObject <ONEAppDelegateStoreDelegate>
{
    NSOperationQueue *_drcMainQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSOperationQueue *drcMainQueue; // @synthesize drcMainQueue=_drcMainQueue;
- (void).cxx_destruct;
- (void)applicationWillTerminate;
- (void)addOperation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
