//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMShareScreenShotMenuViewDelegate.h"

@class NMScreenShotImageObject, NMShareScreenShotMenuView, NSString, UIImage;

@interface NMShareScreenShotHandler : NSObject <NMShareScreenShotMenuViewDelegate>
{
    NSString *_shareWords;
    NSString *_shareLink;
    UIImage *_sharingImage;
    id _resource;
    _Bool _menuShowOrientationAside;
    NSString *_viewControllerPageStr;
    NMShareScreenShotMenuView *_shareScreenShotMenuView;
    NMScreenShotImageObject *_screenShotImageObject;
}

+ (id)defaultHandler;
@property(retain, nonatomic) NMScreenShotImageObject *screenShotImageObject; // @synthesize screenShotImageObject=_screenShotImageObject;
@property(retain, nonatomic) NMShareScreenShotMenuView *shareScreenShotMenuView; // @synthesize shareScreenShotMenuView=_shareScreenShotMenuView;
- (void).cxx_destruct;
- (_Bool)_isUsedExtensionInputMode;
- (_Bool)_needSkipWindowDrawView:(id)arg1;
- (id)imageForView:(id)arg1;
- (id)statusBarForScreenShot;
- (id)imageForScreenShotWithoutStatusBar;
- (id)replaceRect:(struct CGRect)arg1 withImage:(id)arg2 withBackgroudImage:(id)arg3;
- (id)imageScreenShotWithStatusBar;
- (void)shareScreenShotMenuManulClose:(id)arg1;
- (void)shareScreenShotButtonTouched:(id)arg1 type:(unsigned long long)arg2;
- (void)dismissMenu;
- (void)showMenu;
- (void)showShareMenuWithImage:(id)arg1;
- (void)showShareMenu;
- (_Bool)judgeShowOrientationAside:(_Bool)arg1 isVerticalVideo:(_Bool)arg2;
- (void)showShareMenuForController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

