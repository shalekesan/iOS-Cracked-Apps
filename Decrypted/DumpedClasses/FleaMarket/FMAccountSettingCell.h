//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMAccountSettingBaseCell.h"

@class FMImageView, UIImageView, UILabel;

@interface FMAccountSettingCell : FMAccountSettingBaseCell
{
    UIImageView *_accessoryView;
    UILabel *_leftTitleLabel;
    UILabel *_subTitleLabel;
    FMImageView *_subImageView;
}

@property(readonly, nonatomic) FMImageView *subImageView; // @synthesize subImageView=_subImageView;
@property(readonly, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(readonly, nonatomic) UILabel *leftTitleLabel; // @synthesize leftTitleLabel=_leftTitleLabel;
- (void).cxx_destruct;
- (void)setSubTitleLabelText:(id)arg1;
- (void)setLeftTitleLabelText:(id)arg1;
- (void)updateViewConstraints;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

