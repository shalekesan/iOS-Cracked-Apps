//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface TBCKEditorAttackmentView : UIView
{
    UIButton *_closeButton;
    UIButton *_controlButton;
    UIView *_controlView;
    UIView *_contrainerView;
}

@property(retain, nonatomic) UIView *contrainerView; // @synthesize contrainerView=_contrainerView;
@property(retain, nonatomic) UIView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) UIButton *controlButton; // @synthesize controlButton=_controlButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)onTransform:(id)arg1;
- (void)onPan:(id)arg1;
- (void)onCloseButtonClick:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

