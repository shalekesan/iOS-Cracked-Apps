//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMFishpondCardDO, FMImageView, UILabel;

@interface FMPersonalFishpondView : UIView
{
    FMFishpondCardDO *_fishpondCardDO;
    FMImageView *_picImageView;
    UILabel *_nameLable;
    FMImageView *_levelImageView;
    UILabel *_descLabel;
    UILabel *_extendLabel;
    UIView *_splitView;
}

@property(retain, nonatomic) UIView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) UILabel *extendLabel; // @synthesize extendLabel=_extendLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) FMImageView *levelImageView; // @synthesize levelImageView=_levelImageView;
@property(retain, nonatomic) UILabel *nameLable; // @synthesize nameLable=_nameLable;
@property(retain, nonatomic) FMImageView *picImageView; // @synthesize picImageView=_picImageView;
@property(retain, nonatomic) FMFishpondCardDO *fishpondCardDO; // @synthesize fishpondCardDO=_fishpondCardDO;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setupSubviews;
- (void)autoLayoutView:(struct CGRect)arg1;
- (id)init;

@end

