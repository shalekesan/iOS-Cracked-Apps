//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SplashViewDelegate.h"

@class NSString, UIView<ISplashView>;

@interface SplashManager : NSObject <SplashViewDelegate>
{
    UIView<ISplashView> *_splashView;
    id <SplashManagerDelegate> _delegate;
}

+ (id)GetInstance;
@property(nonatomic) __weak id <SplashManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (void)onSplashDisappear:(id)arg1;
- (_Bool)preLoadDynamicSplash;
- (_Bool)preLoadFestivalSplash;
- (_Bool)preLoadBirthdaySplash;
- (void)forceDismissSplash;
- (void)doShowSplash;
- (_Bool)needShowSplash;
- (_Bool)preLoadSplashData;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
