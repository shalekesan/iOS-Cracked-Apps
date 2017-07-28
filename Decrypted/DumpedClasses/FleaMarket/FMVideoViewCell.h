//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMHorListViewCell.h"

@class FMImageView, FMItemDO, UIButton;

@interface FMVideoViewCell : FMHorListViewCell
{
    FMImageView *_coverImageView;
    UIButton *_playButton;
    CDUnknownBlockType _clickButtonBlock;
    FMItemDO *_itemDO;
}

@property(retain, nonatomic) FMItemDO *itemDO; // @synthesize itemDO=_itemDO;
@property(copy, nonatomic) CDUnknownBlockType clickButtonBlock; // @synthesize clickButtonBlock=_clickButtonBlock;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) FMImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)setClickVideoBlock:(CDUnknownBlockType)arg1;
- (void)play:(id)arg1;
- (void)setupViews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

