//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBVideoHomeDataSourceUpdatesListener-Protocol.h"

@class FBReactionContext, NSString;
@protocol FBVideoHomeDataSourceListenerSubscription><FBVideoHomeDataSourceMutator;

@interface FBVideoHomeDataLivenessManager : NSObject <FBVideoHomeDataSourceUpdatesListener>
{
    id <FBVideoHomeDataSourceListenerSubscription><FBVideoHomeDataSourceMutator> _dataSource;
    FBReactionContext *_reactionContext;
}

@property(retain, nonatomic) FBReactionContext *reactionContext; // @synthesize reactionContext=_reactionContext;
- (void).cxx_destruct;
- (void)videoHomeDataSource:(id)arg1 didUpdateUnitModel:(id)arg2;
- (void)videoHomeDataSource:(id)arg1 didUpdateStories:(id)arg2;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
