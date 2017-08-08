//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBGroupsCollegeCommunitiesOnboardingFlowCoordinatorDelegate-Protocol.h"

@class FBGroupFeedActionHandler, FBGroupsCollegeCommunitiesOnboardingFlowDataListenerAnnouncer, FBMemGroup, FBUserSession, NSArray, NSString;
@protocol FBNavigationCoordinator;

@interface FBGroupsCollegeCommunitiesOnboardingFlowCoordinator : NSObject <FBGroupsCollegeCommunitiesOnboardingFlowCoordinatorDelegate>
{
    FBGroupFeedActionHandler *_actionHandler;
    FBMemGroup *_group;
    FBUserSession *_session;
    id <FBNavigationCoordinator> _navigationCoordinator;
    NSArray *_nuxViewControllers;
    unsigned long long _onboardingFlowMode;
    FBGroupsCollegeCommunitiesOnboardingFlowDataListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)viewControllerDidPressBack:(id)arg1;
- (void)viewControllerDidPressNext:(id)arg1;
- (_Bool)viewControllerHasNext:(id)arg1;
- (void)presentOnboardingFlow;
- (id)initWithGroup:(id)arg1 session:(id)arg2 actionHandler:(id)arg3 navigationCoordinator:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
