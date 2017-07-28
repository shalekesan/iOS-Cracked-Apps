//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class FMAsset, UIButton, UIImageView, UILabel, UIView;

@interface FMSelectAssetCollectionViewCell : UICollectionViewCell
{
    id <FMSelectAssetCollectionViewCellDelegate> _delegate;
    UIImageView *_imageView;
    UIImageView *_videoImageView;
    UILabel *_videoDurationLabel;
    UIView *_selectedView;
    UIButton *_selectButton;
    FMAsset *_asset;
}

@property(retain, nonatomic) FMAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) UILabel *videoDurationLabel; // @synthesize videoDurationLabel=_videoDurationLabel;
@property(retain, nonatomic) UIImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <FMSelectAssetCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setVideoDuration:(double)arg1;
- (void)setVideoEnabled:(_Bool)arg1;
- (void)setCellSelected:(_Bool)arg1;
- (void)setCellModel:(id)arg1;
- (void)didSelectAsset;
- (id)initWithFrame:(struct CGRect)arg1;

@end

