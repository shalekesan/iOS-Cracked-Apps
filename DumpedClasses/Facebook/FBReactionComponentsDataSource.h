//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBComponentScrollEventListener-Protocol.h"
#import "FBPullToRefreshViewDelegate-Protocol.h"
#import "FBReactionCardAdapterDelegate-Protocol.h"
#import "FBReactionCardAdapterDelegateOptionalAdditions-Protocol.h"
#import "FBReactionGraphQLConnectionDataFetcherDelegate-Protocol.h"
#import "FBReactionPaginationHandlerListener-Protocol.h"
#import "FBReactionSurfaceSubscriptionDelegate-Protocol.h"
#import "FBReactionUnitReloaderDelegate-Protocol.h"

@class FBAnimationPerformanceLogger, FBFeedNewStoriesPillStickyHeader, FBPullToRefreshView, FBReactionComponentKitCardAdapterDelegate, FBReactionContext, FBReactionExperienceLogger, FBReactionGraphQLConnectionDataFetcher, FBReactionPaginationHandler, FBReactionSessionInfo, FBReactionUnitReloader, FBTransientViewStateManager, FBUserSession, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIScrollView;
@protocol FBIntentHandler, FBNavigationCoordinator, FBReactionComponentsDataSourceAdapterDelegate, FBReactionComponentsDataSourceDelegate, FBReactionStyleMapper, FBReactionSurfaceSubscription, FBSectionedDataSourceWriting;

@interface FBReactionComponentsDataSource : NSObject <FBPullToRefreshViewDelegate, FBReactionGraphQLConnectionDataFetcherDelegate, FBReactionPaginationHandlerListener, FBReactionCardAdapterDelegate, FBReactionCardAdapterDelegateOptionalAdditions, FBReactionUnitReloaderDelegate, FBReactionSurfaceSubscriptionDelegate, FBComponentScrollEventListener>
{
    FBUserSession *_session;
    NSString *_analyticsModule;
    id <FBNavigationCoordinator> _navigationCoordinator;
    id <FBIntentHandler> _intentHandler;
    FBReactionPaginationHandler *_paginationHandler;
    FBReactionContext *_context;
    _Bool _hasPendingPoll;
    FBReactionExperienceLogger *_logger;
    FBAnimationPerformanceLogger *_performanceTracker;
    FBReactionGraphQLConnectionDataFetcher *_reactionDataFetcher;
    id <FBSectionedDataSourceWriting> _writeInterface;
    unsigned long long _renderIdiom;
    FBReactionComponentKitCardAdapterDelegate *_cardAdapterDelegate;
    FBReactionUnitReloader *_unitReloader;
    NSMutableArray *_units;
    NSMutableDictionary *_pendingUnits;
    unsigned long long _feedLayoutIdiom;
    _Bool _isLoadingInitialContent;
    _Bool _isFirstLoad;
    id <FBReactionStyleMapper> _styleMapper;
    id <FBReactionSurfaceSubscription> _surfaceSubscription;
    NSDictionary *_userInfo;
    double _lastContentOffset;
    _Bool _isActive;
    _Bool _shouldPollHead;
    _Bool _canDisplayData;
    UIScrollView *_scrollView;
    FBPullToRefreshView *_ptrView;
    FBFeedNewStoriesPillStickyHeader *_unreadStoriesPill;
    FBTransientViewStateManager *_viewStateManager;
    id <FBReactionComponentsDataSourceDelegate> _delegate;
    NSArray *_clientCapabilities;
    FBReactionSessionInfo *_reactionSessionInfo;
    id <FBReactionComponentsDataSourceAdapterDelegate> _adapterDelegate;
}

@property(nonatomic) __weak id <FBReactionComponentsDataSourceAdapterDelegate> adapterDelegate; // @synthesize adapterDelegate=_adapterDelegate;
@property(nonatomic) _Bool canDisplayData; // @synthesize canDisplayData=_canDisplayData;
@property(nonatomic) _Bool shouldPollHead; // @synthesize shouldPollHead=_shouldPollHead;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) FBReactionSessionInfo *reactionSessionInfo; // @synthesize reactionSessionInfo=_reactionSessionInfo;
@property(readonly, copy, nonatomic) NSArray *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property(nonatomic) __weak id <FBReactionComponentsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBTransientViewStateManager *viewStateManager; // @synthesize viewStateManager=_viewStateManager;
@property(retain, nonatomic) FBFeedNewStoriesPillStickyHeader *unreadStoriesPill; // @synthesize unreadStoriesPill=_unreadStoriesPill;
@property(retain, nonatomic) FBPullToRefreshView *ptrView; // @synthesize ptrView=_ptrView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)_displayUnitsIfAllowed;
- (void)_handleNoContentLoaded;
- (long long)headLoadIndex;
- (void)_removeUnit:(id)arg1;
- (void)hardReload;
- (void)_clearDataSource;
- (void)_replaceUnit:(id)arg1 withUnit:(id)arg2;
- (void)_loadAdaptersForUnits:(id)arg1 atLocation:(unsigned long long)arg2;
- (void)_pollHead;
- (void)_initializeReactionDataFetcher;
- (void)reactionSurfaceSubscription:(id)arg1 didLoadUnit:(id)arg2;
- (void)unitReloader:(id)arg1 willAttemptToReloadUnit:(id)arg2 retryCount:(unsigned long long)arg3;
- (void)unitReloader:(id)arg1 didFailReloadingUnit:(id)arg2 withError:(id)arg3 retryCount:(unsigned long long)arg4;
- (void)unitReloader:(id)arg1 didFinishReloadingUnit:(id)arg2 withNewUnit:(id)arg3;
- (void)replaceUnit:(id)arg1 withUnit:(id)arg2;
- (void)hideCardForReactionUnit:(id)arg1;
- (void)cardHeightDidChangeForUnit:(id)arg1 shouldPreservePosition:(_Bool)arg2;
- (void)userDidGiveFeedback:(id)arg1 withExtras:(id)arg2 forReactionUnit:(id)arg3;
- (void)pullToRefreshViewDidNotAnimateLoadingState:(id)arg1;
- (void)pullToRefreshView:(id)arg1 didChangeVisibility:(_Bool)arg2 userInitiated:(_Bool)arg3;
- (void)pullToRefreshViewDidStartAnimatingLoadingState:(id)arg1;
- (void)pullToRefreshViewDidAttemptToTriggerRefresh:(id)arg1;
- (void)pullToRefreshViewDidTriggerRefresh:(id)arg1;
- (id)graphQLConnectionControllerUserInputForReactionDataFetcher:(id)arg1;
- (void)reactionDataFetcher:(id)arg1 loadType:(unsigned long long)arg2 experiencedError:(id)arg3;
- (void)emptyResultSetForReactionDataFetcher:(id)arg1 forLoadType:(unsigned long long)arg2;
- (void)reactionDataFetcher:(id)arg1 didLoadUnits:(id)arg2 loadType:(unsigned long long)arg3;
- (void)paginationHandler:(id)arg1 didReplaceUnit:(id)arg2 newUnit:(id)arg3 error:(id)arg4;
- (void)scrollViewDidEndDragging:(struct FBScrollViewState)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(struct FBScrollViewState)arg1;
- (void)scrollViewDidScrollToTop:(struct FBScrollViewState)arg1;
- (void)scrollViewDidScroll:(struct FBScrollViewState)arg1;
- (void)scrollViewWillBeginDragging:(struct FBScrollViewState)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 writeInterface:(id)arg2 styleMapper:(id)arg3 navigationCoordinator:(id)arg4 intentHandler:(id)arg5 reactionSessionInfo:(id)arg6 analyticsModule:(id)arg7 renderIdiom:(unsigned long long)arg8 layoutIdiom:(unsigned long long)arg9 userInfo:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
