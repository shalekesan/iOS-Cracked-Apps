//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class FMAsset, UIButton, UIImageView;

@interface FMSelectedAssetBarItemCell : UICollectionViewCell
{
    id <FMSelectedAssetBarItemCellDelegate> _delegate;
    UIImageView *_imageView;
    UIButton *_removeButton;
    FMAsset *_asset;
}

@property(retain, nonatomic) FMAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) UIButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <FMSelectedAssetBarItemCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setCellModel:(id)arg1;
- (void)didRemoveAsset;
- (id)initWithFrame:(struct CGRect)arg1;

@end

