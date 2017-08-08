//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBCaptureManagerListener-Protocol.h"
#import "FBComposerDestinationNavigationListener-Protocol.h"
#import "FBComposerPickerController-Protocol.h"

@class FBInspirationCameraComponentModelManager, FBInspirationCameraComponentModelPersistence, FBInspirationCameraEffectAssetOnDemandDownloader, FBInspirationCameraFilterManager, FBUserSession, NSString, UIViewController;
@protocol FBComposerCompositionStateChangedListeningRegister, FBComposerUpdateHandler, FBInspirationUpdateHandler;

@interface FBComposerInspirationPickerController : NSObject <FBCaptureManagerListener, FBComposerDestinationNavigationListener, FBComposerPickerController>
{
    id <FBComposerUpdateHandler> _updateHandler;
    id <FBInspirationUpdateHandler> _inspirationUpdateHandler;
    FBInspirationCameraComponentModelPersistence *_inspirationCameraComponentModelPersistence;
    id <FBComposerCompositionStateChangedListeningRegister> _compositionStateChangedListeningRegister;
    FBUserSession *_userSession;
    UIViewController *_viewController;
    FBInspirationCameraFilterManager *_filterManager;
    FBInspirationCameraComponentModelManager *_componentModelManager;
    FBInspirationCameraEffectAssetOnDemandDownloader *_onDemandDownloader;
}

- (void).cxx_destruct;
- (void)_prepareCameraSession;
- (void)_constructViewControllerWithBootstrapContent:(id)arg1;
- (void)willBecomeCurrentDestinationFromDestination:(unsigned long long)arg1 presentedMethod:(unsigned long long)arg2 dismissing:(_Bool)arg3;
- (void)captureManagerUpdatedPreviousCaptureDevice:(id)arg1 toCurrentCaptureDevice:(id)arg2;
- (void)captureManagerHasFinishedLoadingCaptureSession;
- (void)captureManagerDidEncounterRuntimeError:(id)arg1 willRetry:(_Bool)arg2;
- (void)captureManagerDidResignInterrupted;
- (void)captureManagerDidBecomeInterruptedWithReason:(unsigned char)arg1;
- (void)captureManagerHasEndedCaptureSession;
- (void)captureManagerDidFailToLoadAudioSessionWithError:(id)arg1;
- (void)captureManagerHasFinishedLoadingAudioSession;
- (void)captureManagerPreviewDidLoad;
- (void)popoverWantsPickerToCloseItself;
- (struct CGSize)popoverContentSizeForOrientation:(long long)arg1;
- (unsigned long long)popoverStyle;
- (id)presentableViewControllerWithNavigationPayload:(id)arg1;
- (void)dealloc;
- (id)initWithUpdateHandler:(id)arg1 compositionStateChangedListeningRegister:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
