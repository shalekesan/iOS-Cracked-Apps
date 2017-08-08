//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSearchGeneralDataProviderDelegate-Protocol.h"
#import "FBSearchResultsTabConfigDownloaderDelegate-Protocol.h"

@class FBSearchGeneralDataProvider, FBSearchResultsAnnouncers, FBSearchResultsStore, FBSerpConfig, FBUserSession, NSString;
@protocol FBSearchModuleResultsDataBridgeDelegate;

@interface FBSearchModuleResultsDataBridge : NSObject <FBSearchResultsTabConfigDownloaderDelegate, FBSearchGeneralDataProviderDelegate>
{
    FBUserSession *_session;
    NSObject *_scenePath;
    FBSearchResultsStore *_masterResultsStore;
    FBSearchResultsAnnouncers *_announcers;
    FBSerpConfig *_serpConfig;
    FBSearchGeneralDataProvider *_resultsDataProvider;
    id <FBSearchModuleResultsDataBridgeDelegate> _delegate;
}

@property(nonatomic) __weak id <FBSearchModuleResultsDataBridgeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveInitalContentWithAppliedFilters:(id)arg1 isOfflineContent:(_Bool)arg2;
- (_Bool)hasAppliedFilters;
- (void)didUpdateFromState:(long long)arg1 toState:(long long)arg2 error:(id)arg3;
- (_Bool)hasClientModule;
- (_Bool)waitForClientModule;
- (void)releaseAllCachedData;
- (void)retry;
- (void)loadTail;
- (id)clientModuleRolesToLog;
- (id)edgesToLog;
- (id)downloaderFiltersChangeSet;
- (id)filteredSemantic;
- (id)currentFilterTypeSets;
- (id)searchResultsStoreRootQuery:(id)arg1;
- (void)downloader:(id)arg1 didLoadTabConfigs:(id)arg2;
- (_Bool)_searchResultsHasMoreData;
- (_Bool)searchResultsIsEmpty;
- (id)queryRewriteModel;
- (id)spellingCorrectionModel;
- (id)resultsSessionLoggingUnitId;
- (id)postSearchIntentLog;
- (id)verticalToLog;
- (id)appliedFilters;
- (id)cursorForForwardPagination;
- (id)lastGraphQLQuery;
- (id)lastGraphSearchQuery;
- (unsigned long long)enqueueChangeset:(const struct Changeset *)arg1 userInfo:(id)arg2;
- (void)loadHeadIfEmpty;
- (id)initWithSession:(id)arg1 serpConfig:(id)arg2 announcers:(id)arg3 scenePath:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
