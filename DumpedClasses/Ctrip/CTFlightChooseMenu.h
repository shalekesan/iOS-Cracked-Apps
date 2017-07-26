//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIButton, UILabel;

@interface CTFlightChooseMenu : UIView
{
    id <CTFlightChooseMenuDelegate> _delegate;
    UIView *_maskView;
    UIView *_chooseMenu;
    NSLayoutConstraint *_chooseMenuHeight;
    UIButton *_button_1;
    UIButton *_button_2;
    UILabel *_infoLabel;
}

@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak UIButton *button_2; // @synthesize button_2=_button_2;
@property(nonatomic) __weak UIButton *button_1; // @synthesize button_1=_button_1;
@property(nonatomic) __weak NSLayoutConstraint *chooseMenuHeight; // @synthesize chooseMenuHeight=_chooseMenuHeight;
@property(nonatomic) __weak UIView *chooseMenu; // @synthesize chooseMenu=_chooseMenu;
@property(nonatomic) __weak UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) id <CTFlightChooseMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickButton_2:(id)arg1;
- (void)clickButton_1:(id)arg1;
- (void)addTapGesture;
- (void)hideChooseMenu;
- (void)showChooseMenu;
- (void)setupChooseMenuWithModel:(id)arg1 delegate:(id)arg2;
- (void)awakeFromNib;

@end
