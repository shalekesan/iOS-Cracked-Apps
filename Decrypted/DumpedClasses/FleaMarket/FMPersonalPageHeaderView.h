//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMAccountMyViewMemberInfoTab, FMAvatarImageView, FMImageView, FMPersonalTabsComponent, FMUserTagLabel, NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface FMPersonalPageHeaderView : UIView
{
    FMPersonalTabsComponent *_personalComponent;
    FMImageView *_bgImageView;
    UIImageView *_blurImageView;
    UIImageView *_layerView;
    UIButton *_bgImageChangeBtn;
    UIView *_riskView;
    UILabel *_riskLabel;
    FMAvatarImageView *_avatarImageView;
    UIButton *_avatarImageChangeBtn;
    UILabel *_nameLabel;
    UILabel *_lastTimeLabel;
    FMUserTagLabel *_tagLabel;
    UIButton *_actionButton;
    UIView *_bottomLine;
    NSLayoutConstraint *_constraint;
    FMAccountMyViewMemberInfoTab *_collect;
    FMAccountMyViewMemberInfoTab *_follow;
    FMAccountMyViewMemberInfoTab *_fans;
    struct CGRect _originFrame;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) FMAccountMyViewMemberInfoTab *fans; // @synthesize fans=_fans;
@property(retain, nonatomic) FMAccountMyViewMemberInfoTab *follow; // @synthesize follow=_follow;
@property(retain, nonatomic) FMAccountMyViewMemberInfoTab *collect; // @synthesize collect=_collect;
@property(retain, nonatomic) NSLayoutConstraint *constraint; // @synthesize constraint=_constraint;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) FMUserTagLabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UILabel *lastTimeLabel; // @synthesize lastTimeLabel=_lastTimeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIButton *avatarImageChangeBtn; // @synthesize avatarImageChangeBtn=_avatarImageChangeBtn;
@property(retain, nonatomic) FMAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *riskLabel; // @synthesize riskLabel=_riskLabel;
@property(retain, nonatomic) UIView *riskView; // @synthesize riskView=_riskView;
@property(retain, nonatomic) UIButton *bgImageChangeBtn; // @synthesize bgImageChangeBtn=_bgImageChangeBtn;
@property(retain, nonatomic) UIImageView *layerView; // @synthesize layerView=_layerView;
@property(retain, nonatomic) UIImageView *blurImageView; // @synthesize blurImageView=_blurImageView;
@property(retain, nonatomic) FMImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) __weak FMPersonalTabsComponent *personalComponent; // @synthesize personalComponent=_personalComponent;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setActionBtnGray;
- (void)setActionBtnBlack;
- (void)handleTapTagLabel:(id)arg1;
- (void)changeImageTapped:(id)arg1;
- (void)changeBGImageTapped:(id)arg1;
- (void)changeAvatarImageTapped:(id)arg1;
- (void)actionButtonTapped:(id)arg1;
- (void)setupRiskView:(id)arg1;
- (void)setFollowRelation:(id)arg1;
- (void)bindComponent:(id)arg1;
- (void)bind;
- (void)autoLayoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

