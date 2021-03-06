//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, ReadViewToolBarItem, UIButton, UISlider;

@interface SettingView : UIView
{
    UIButton *_fontUpBtn;
    UIButton *_fontDownBtn;
    UISlider *_lightSlider;
    id _target;
    UIButton *_lightWithSystem;
    UIButton *_autoPayButton;
    NSString *_bookID;
    ReadViewToolBarItem *_fontMore;
}

@property(retain, nonatomic) ReadViewToolBarItem *fontMore; // @synthesize fontMore=_fontMore;
@property(copy, nonatomic) NSString *bookID; // @synthesize bookID=_bookID;
@property(retain, nonatomic) UIButton *autoPayButton; // @synthesize autoPayButton=_autoPayButton;
@property(retain, nonatomic) UIButton *lightWithSystem; // @synthesize lightWithSystem=_lightWithSystem;
@property(nonatomic) id target; // @synthesize target=_target;
- (void)enableFontButtonsWithIsUpButton:(_Bool)arg1 withEnable:(_Bool)arg2 andSize:(int)arg3;
- (void)setLighShouldtWithSystem:(_Bool)arg1;
- (void)setLightValue:(float)arg1;
- (void)setFontSize:(int)arg1;
- (void)setFloatText:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)moreFontItemPressed;
- (void)willMoveToSuperview:(id)arg1;
- (float)getButtonImageAndLabelWidht:(id)arg1;
- (id)getOptionButtonWithTitleName:(id)arg1 withStartFrame:(struct CGRect)arg2 withTarget:(id)arg3 withSelectorName:(id)arg4;
- (void)readFontChangeHandler:(id)arg1;
- (void)flashFontBtn;
- (id)getNextButtonWithTitleName:(id)arg1 withStartFrame:(struct CGRect)arg2 withTarget:(id)arg3 withSelectorName:(id)arg4;
- (void)setIsAutoPayOn:(_Bool)arg1;
- (id)createAutoPayAndSeniorSetting:(struct CGRect)arg1 withTarget:(id)arg2 showAutoPay:(_Bool)arg3;
- (id)createSliderView:(struct CGRect)arg1 withTarget:(id)arg2;
- (id)createThemeView:(struct CGRect)arg1;
- (id)createFontView:(struct CGRect)arg1 withTarget:(id)arg2 isDayMode:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 isPhone:(_Bool)arg2 target:(id)arg3 isDayMode:(_Bool)arg4 showAutoPay:(_Bool)arg5;
- (void)layoutSubviews;

@end

