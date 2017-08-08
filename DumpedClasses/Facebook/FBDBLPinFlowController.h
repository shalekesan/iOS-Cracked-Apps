//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAuthControlling-Protocol.h"
#import "FBAuthControllingDelegate-Protocol.h"
#import "FBDBLPinAuthenticating-Protocol.h"

@class FBAuthenticationDeviceBasedLoginHandler, FBDBLPasswordFlowController, FBDBLPinRecoveryFlowController, FBDBLStoredUser, FBLoginErrorStateManager, NSString;
@protocol FBAuthControllingDelegate, FBAuthUIPresenting, FBDBLPinFlowUIProviding, FBNetworkDispatch;

@interface FBDBLPinFlowController : NSObject <FBAuthControllingDelegate, FBDBLPinAuthenticating, FBAuthControlling>
{
    FBDBLStoredUser *_storedUser;
    id <FBAuthUIPresenting> _uiPresenter;
    FBLoginErrorStateManager *_errorStateManager;
    id <FBNetworkDispatch> _requesterConfiguration;
    id <FBAuthControllingDelegate> _authDelegate;
    id <FBDBLPinFlowUIProviding> _uiProvider;
    FBDBLPasswordFlowController *_passwordFlowController;
    FBDBLPinRecoveryFlowController *_pinRecoveryFlowController;
    unsigned long long _failedAttempts;
    FBAuthenticationDeviceBasedLoginHandler *_authHandler;
    unsigned long long _fetchState;
}

@property(nonatomic) unsigned long long fetchState; // @synthesize fetchState=_fetchState;
@property(retain, nonatomic) FBAuthenticationDeviceBasedLoginHandler *authHandler; // @synthesize authHandler=_authHandler;
@property(nonatomic) unsigned long long failedAttempts; // @synthesize failedAttempts=_failedAttempts;
@property(retain, nonatomic) FBDBLPinRecoveryFlowController *pinRecoveryFlowController; // @synthesize pinRecoveryFlowController=_pinRecoveryFlowController;
@property(retain, nonatomic) FBDBLPasswordFlowController *passwordFlowController; // @synthesize passwordFlowController=_passwordFlowController;
@property(readonly, nonatomic) id <FBDBLPinFlowUIProviding> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(nonatomic) __weak id <FBAuthControllingDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
- (void).cxx_destruct;
- (void)_successWithCredential:(id)arg1 pin:(id)arg2 response:(id)arg3;
- (void)_deferForError:(id)arg1;
- (void)_handleIncorrectPasscode:(id)arg1;
- (void)_authenticateWithPassword;
- (void)_authenticateWithCredential:(id)arg1 pin:(id)arg2;
- (void)cancelLoginRequestFromViewController:(id)arg1;
- (void)submitPin:(id)arg1 fromViewController:(id)arg2;
- (void)authenticationDeferred:(id)arg1 withReason:(id)arg2;
- (void)authenticationCompleted:(id)arg1 withResponse:(id)arg2;
- (void)authenticate;
- (id)initWithUserInfo:(id)arg1 uiProvider:(id)arg2 uiPresenter:(id)arg3 requesterConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
