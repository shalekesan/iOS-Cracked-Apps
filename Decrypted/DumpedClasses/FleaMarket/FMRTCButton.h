//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class RTCButton, UILabel;

@interface FMRTCButton : UIView
{
    RTCButton *_button;
    UILabel *_buttonTitle;
}

@property(retain, nonatomic) UILabel *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) RTCButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)showShadow;
- (void)changeBackGround:(id)arg1 andTitle:(id)arg2;
- (id)initWithImage:(id)arg1 highlightImage:(id)arg2 withTitle:(id)arg3 scale:(double)arg4;
- (id)initWithImage:(id)arg1 withTitle:(id)arg2 scale:(double)arg3;

@end

