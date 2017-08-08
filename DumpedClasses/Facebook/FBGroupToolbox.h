//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBComposerFlowDelegateProxy, FBFeedQueryConfiguration, FBFeedToolbox, FBFeedViewComposerOpenHandler, FBFontFoundry, FBGroupCasualGroupsEventListenerAnnouncer, FBGroupColorEventListenerAnnouncer, FBGroupFeedActionHandler, FBGroupFeedCollectionStickyFooterListenerAnnouncer, FBGroupFeedVisibleUnitsManager, FBInlineComposerComponentToolbox, FBSectionComponentFeedComposerToolbox, FBSectionComponentFeedToolbox, FBSectionComponentToolbox, FBUserSession, NSArray, NSDictionary, NSString;
@protocol FBIntentHandler, FBNavigationCoordinator;

@interface FBGroupToolbox : NSObject
{
    FBGroupFeedActionHandler *_actionHandler;
    FBUserSession *_session;
    unsigned long long _layoutIdiom;
    FBFeedQueryConfiguration *_queryConfiguration;
    NSString *_targetID;
    NSString *_viewerFBID;
    NSArray *_hoistedStoryIDs;
    long long _source;
    FBGroupFeedCollectionStickyFooterListenerAnnouncer *_stickyFooterListenerAnnouncer;
    FBGroupCasualGroupsEventListenerAnnouncer *_casualGroupsEventListenerAnnouncer;
    FBGroupFeedVisibleUnitsManager *_feedVisibleUnitsManager;
    FBGroupColorEventListenerAnnouncer *_colorEventListenerAnnouncer;
    FBFeedToolbox *_feedToolbox;
    FBInlineComposerComponentToolbox *_inlineComposerToolbox;
    FBComposerFlowDelegateProxy *_composerFlowDelegateProxy;
    FBSectionComponentToolbox *_sectionComponentToolbox;
    FBSectionComponentFeedToolbox *_sectionComponentFeedToolbox;
    FBSectionComponentFeedComposerToolbox *_sectionComponentFeedComposerToolbox;
}

@property(readonly, nonatomic) FBSectionComponentFeedComposerToolbox *sectionComponentFeedComposerToolbox; // @synthesize sectionComponentFeedComposerToolbox=_sectionComponentFeedComposerToolbox;
@property(readonly, nonatomic) FBSectionComponentFeedToolbox *sectionComponentFeedToolbox; // @synthesize sectionComponentFeedToolbox=_sectionComponentFeedToolbox;
@property(readonly, nonatomic) FBSectionComponentToolbox *sectionComponentToolbox; // @synthesize sectionComponentToolbox=_sectionComponentToolbox;
@property(readonly, nonatomic) FBComposerFlowDelegateProxy *composerFlowDelegateProxy; // @synthesize composerFlowDelegateProxy=_composerFlowDelegateProxy;
@property(readonly, nonatomic) FBInlineComposerComponentToolbox *inlineComposerToolbox; // @synthesize inlineComposerToolbox=_inlineComposerToolbox;
@property(readonly, nonatomic) FBFeedToolbox *feedToolbox; // @synthesize feedToolbox=_feedToolbox;
@property(readonly, nonatomic) FBGroupColorEventListenerAnnouncer *colorEventListenerAnnouncer; // @synthesize colorEventListenerAnnouncer=_colorEventListenerAnnouncer;
@property(readonly, nonatomic) FBGroupFeedVisibleUnitsManager *feedVisibleUnitsManager; // @synthesize feedVisibleUnitsManager=_feedVisibleUnitsManager;
@property(readonly, nonatomic) FBGroupCasualGroupsEventListenerAnnouncer *casualGroupsEventListenerAnnouncer; // @synthesize casualGroupsEventListenerAnnouncer=_casualGroupsEventListenerAnnouncer;
@property(readonly, nonatomic) FBGroupFeedCollectionStickyFooterListenerAnnouncer *stickyFooterListenerAnnouncer; // @synthesize stickyFooterListenerAnnouncer=_stickyFooterListenerAnnouncer;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) NSArray *hoistedStoryIDs; // @synthesize hoistedStoryIDs=_hoistedStoryIDs;
@property(readonly, copy, nonatomic) NSString *viewerFBID; // @synthesize viewerFBID=_viewerFBID;
@property(readonly, copy, nonatomic) NSString *targetID; // @synthesize targetID=_targetID;
@property(readonly, nonatomic) FBFeedQueryConfiguration *queryConfiguration; // @synthesize queryConfiguration=_queryConfiguration;
@property(readonly, nonatomic) unsigned long long layoutIdiom; // @synthesize layoutIdiom=_layoutIdiom;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) FBGroupFeedActionHandler *actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
@property(readonly, nonatomic) FBFeedViewComposerOpenHandler *composerOpenHandler;
@property(readonly, copy, nonatomic) NSString *analyticsUUID;
@property(readonly, copy, nonatomic) NSDictionary *optionalDependencies;
@property(readonly, nonatomic) FBFontFoundry *fontFoundry;
@property(readonly, nonatomic) NSObject *scenePath;
@property(readonly, nonatomic) id <FBIntentHandler> intentHandler;
@property(readonly, nonatomic) id <FBNavigationCoordinator> navigationCoordinator;
- (id)initWithSession:(id)arg1 targetID:(id)arg2 hoistedStoryIDs:(id)arg3 source:(long long)arg4 queryConfiguration:(id)arg5 layoutIdiom:(unsigned long long)arg6 creationConfig:(id)arg7 composerFlowDelegateProxy:(id)arg8 feedToolbox:(id)arg9 inlineCoposerToolbox:(id)arg10 sectionComponentContext:(id)arg11 actionHandler:(id)arg12 stickyFooterListenerAnnouncer:(id)arg13 casualGroupsEventListenerAnnouncer:(id)arg14 feedVisibleUnitsManager:(id)arg15 colorEventListenerAnnouncer:(id)arg16;

@end
