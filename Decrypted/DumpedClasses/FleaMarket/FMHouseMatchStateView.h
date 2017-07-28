//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMHouseMatchStateModel, UIImageView, UILabel;

@interface FMHouseMatchStateView : UIView
{
    UIView *_topInsetView;
    UIImageView *_gifView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    FMHouseMatchStateModel *_viewModel;
}

@property(retain, nonatomic) FMHouseMatchStateModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *gifView; // @synthesize gifView=_gifView;
- (void).cxx_destruct;
- (void)refreshGifImage;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

