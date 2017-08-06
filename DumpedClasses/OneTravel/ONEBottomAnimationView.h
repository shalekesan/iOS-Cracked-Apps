//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ONECircularRing, UIImageView, UILabel;

@interface ONEBottomAnimationView : UIView
{
    double _aniViewHeigh;
    double _aniViewWidth;
    _Bool _stopAnimaiton;
    UIImageView *_imageViewA;
    UIImageView *_imageViewB;
    double _cencerX;
    UILabel *_messageLabel;
    ONECircularRing *_rightRing;
}

@property(retain, nonatomic) ONECircularRing *rightRing; // @synthesize rightRing=_rightRing;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) double cencerX; // @synthesize cencerX=_cencerX;
@property(retain, nonatomic) UIImageView *imageViewB; // @synthesize imageViewB=_imageViewB;
@property(retain, nonatomic) UIImageView *imageViewA; // @synthesize imageViewA=_imageViewA;
- (void).cxx_destruct;
- (void)startRollAnimation;
- (void)outTime:(double)arg1;
- (void)willChangeAnimation:(int)arg1 outTime:(double)arg2 currentStep:(long long)arg3;
- (void)recoveryWithTitle:(id)arg1;
- (void)recovery;
- (void)showMessageView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
