//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@protocol FBAccountRecoveryOtherSessionsComponentListener;

@interface FBAccountRecoveryOtherSessionsComponent : CKCompositeComponent
{
    id <FBAccountRecoveryOtherSessionsComponentListener> _listener;
}

+ (id)newWithLogOutOtherSessions:(_Bool)arg1 listener:(id)arg2;
- (void).cxx_destruct;
- (void)didTapLogOutView;
- (void)didTapNoLogOutView;
- (void)continueTapped;

@end
