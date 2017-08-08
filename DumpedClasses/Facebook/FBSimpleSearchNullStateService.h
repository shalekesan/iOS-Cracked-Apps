//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSimpleSearchNullStateServiceProtocol-Protocol.h"

@class FBUserSession, NSArray, NSAttributedString, NSDate, NSString;

@interface FBSimpleSearchNullStateService : NSObject <FBSimpleSearchNullStateServiceProtocol>
{
    FBUserSession *_session;
    NSObject *_lock;
    NSAttributedString *_recentSearchesSectionTitle;
    NSAttributedString *_trendingTopicsSectionTitle;
    NSArray *_recentSearchesSuggestions;
    NSArray *_trendingTopicsSuggestions;
    NSDate *_lastRecentSearchesDownloadDate;
    NSDate *_lastTrendingTopicRefreshDate;
    _Bool _hasEditableSearchHistory;
    unsigned long long _simpleSearchRecentSearchesFullLengthMaxCount;
    _Bool _isNullStateReady;
    NSArray *_nullStateTitlesAndSuggestions;
    unsigned long long _numberOfRecentSearches;
}

@property(nonatomic) _Bool isNullStateReady; // @synthesize isNullStateReady=_isNullStateReady;
@property(nonatomic) unsigned long long numberOfRecentSearches; // @synthesize numberOfRecentSearches=_numberOfRecentSearches;
@property(copy) NSArray *nullStateTitlesAndSuggestions; // @synthesize nullStateTitlesAndSuggestions=_nullStateTitlesAndSuggestions;
- (void).cxx_destruct;
- (_Bool)_hasTrendingNewsInNullState;
- (_Bool)_isNullStateReady;
- (id)_trendingTopicsSuggestions:(id)arg1;
- (void)_handleTrendingSuccessWithRequest:(id)arg1 response:(id)arg2 status:(id)arg3;
- (void)_requestTrendingEntities;
- (_Bool)_isDuplicate:(id)arg1 and:(id)arg2;
- (id)_recentSearchesSuggestions:(id)arg1;
- (void)_handleSuccessWithRequest:(id)arg1 response:(id)arg2 status:(id)arg3;
- (void)_requestRecentSearches;
- (void)_insertToRecentSearchesInternal:(id)arg1;
- (_Bool)isSectionTitleRecentSearches:(id)arg1;
- (void)insertToRecentSearches:(id)arg1;
- (void)clearRecentSearches;
- (void)loadNullStateFromCache:(_Bool)arg1;
- (void)stopAppService;
- (void)startAppService;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
