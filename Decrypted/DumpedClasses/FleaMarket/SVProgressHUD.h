//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, NSTimer, UIActivityIndicatorView, UIColor, UIControl, UIFont, UIImage, UIImageView, UILabel;

@interface SVProgressHUD : UIView
{
    UIControl *overlayView;
    UIView *hudView;
    unsigned long long maskType;
    NSTimer *fadeOutTimer;
    UILabel *stringLabel;
    UIImageView *imageView;
    UIActivityIndicatorView *spinnerView;
    double visibleKeyboardHeight;
    UIColor *_uiHudBgColor;
    UIColor *_uiHudFgColor;
    UIColor *_uiHudStatusShColor;
    UIColor *_uiHudRingBgColor;
    UIColor *_uiHudRingFgColor;
    UIFont *_uiHudFont;
    UIImage *_uiHudSuccessImage;
    UIImage *_uiHudErrorImage;
    double _progress;
    unsigned long long _activityCount;
    CAShapeLayer *_backgroundRingLayer;
    CAShapeLayer *_ringLayer;
    struct UIOffset _offsetFromCenter;
}

+ (_Bool)isVisible;
+ (void)resetOffsetFromCenter;
+ (void)setOffsetFromCenter:(struct UIOffset)arg1;
+ (void)dismissAnimated:(_Bool)arg1;
+ (void)dismiss;
+ (void)popActivity;
+ (void)showImage:(id)arg1 status:(id)arg2;
+ (void)showErrorWithStatus:(id)arg1;
+ (void)showSuccessWithStatus:(id)arg1;
+ (void)showProgress:(float)arg1 status:(id)arg2 maskType:(unsigned long long)arg3;
+ (void)showProgress:(float)arg1 status:(id)arg2;
+ (void)showProgress:(float)arg1;
+ (void)showWithStatus:(id)arg1 maskType:(unsigned long long)arg2;
+ (void)showWithMaskType:(unsigned long long)arg1;
+ (void)showWithStatus:(id)arg1;
+ (void)show;
+ (void)setStatus:(id)arg1;
+ (id)sharedView;
@property(nonatomic) struct UIOffset offsetFromCenter; // @synthesize offsetFromCenter=_offsetFromCenter;
@property(retain, nonatomic) CAShapeLayer *ringLayer; // @synthesize ringLayer=_ringLayer;
@property(retain, nonatomic) CAShapeLayer *backgroundRingLayer; // @synthesize backgroundRingLayer=_backgroundRingLayer;
@property(nonatomic) unsigned long long activityCount; // @synthesize activityCount=_activityCount;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIImage *hudErrorImage; // @synthesize hudErrorImage=_uiHudErrorImage;
@property(retain, nonatomic) UIImage *hudSuccessImage; // @synthesize hudSuccessImage=_uiHudSuccessImage;
@property(retain, nonatomic) UIFont *hudFont; // @synthesize hudFont=_uiHudFont;
@property(retain, nonatomic) UIColor *hudRingForegroundColor; // @synthesize hudRingForegroundColor=_uiHudRingFgColor;
@property(retain, nonatomic) UIColor *hudRingBackgroundColor; // @synthesize hudRingBackgroundColor=_uiHudRingBgColor;
@property(retain, nonatomic) UIColor *hudStatusShadowColor; // @synthesize hudStatusShadowColor=_uiHudStatusShColor;
@property(retain, nonatomic) UIColor *hudForegroundColor; // @synthesize hudForegroundColor=_uiHudFgColor;
@property(retain, nonatomic) UIColor *hudBackgroundColor; // @synthesize hudBackgroundColor=_uiHudBgColor;
@property(readonly, nonatomic) NSTimer *fadeOutTimer; // @synthesize fadeOutTimer;
@property(nonatomic) unsigned long long maskType; // @synthesize maskType;
- (void).cxx_destruct;
@property(readonly, nonatomic) double visibleKeyboardHeight; // @synthesize visibleKeyboardHeight;
@property(readonly, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView;
@property(readonly, nonatomic) UILabel *stringLabel; // @synthesize stringLabel;
@property(readonly, nonatomic) UIView *hudView; // @synthesize hudView;
@property(readonly, nonatomic) UIControl *overlayView; // @synthesize overlayView;
@property(readonly, nonatomic, getter=isClear) _Bool clear;
- (double)displayDurationForString:(id)arg1;
- (id)createRingLayerWithCenter:(struct CGPoint)arg1 radius:(double)arg2 lineWidth:(double)arg3 color:(id)arg4;
- (id)createCirclePathWithCenter:(struct CGPoint)arg1 radius:(double)arg2 sampleCount:(long long)arg3;
- (struct CGPoint)pointOnCircleWithCenter:(struct CGPoint)arg1 radius:(double)arg2 angleInDegrees:(double)arg3;
- (void)cancelRingLayerAnimation;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)showImage:(id)arg1 status:(id)arg2 duration:(double)arg3;
- (void)showProgress:(float)arg1 status:(id)arg2 maskType:(unsigned long long)arg3;
- (void)overlayViewDidReceiveTouchEvent:(id)arg1 forEvent:(id)arg2;
- (void)moveToPoint:(struct CGPoint)arg1 rotateAngle:(double)arg2;
- (void)positionHUD:(id)arg1;
- (id)notificationUserInfo;
- (void)registerNotifications;
- (void)setFadeOutTimer:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)updatePosition;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

