//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UILabel;

@interface QLBulletinBoardAnimationMaskView : UIView
{
    UILabel *_LblCountNumber;
    UILabel *_LblCountDesc;
    UILabel *_LblTitle;
    NSTimer *_countDownTimer;
    long long _countDownTimeTick;
    id <QLBulletinBoardAnimationMaskViewDelegate> _actionDelegate;
}

@property(nonatomic) __weak id <QLBulletinBoardAnimationMaskViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void).cxx_destruct;
- (void)viewInvisibleAction;
- (void)appBecomeResignActiveAction;
- (void)cancelCountDownTimer;
- (void)countDownTimerFire;
- (void)updateAnimationViewWithTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
