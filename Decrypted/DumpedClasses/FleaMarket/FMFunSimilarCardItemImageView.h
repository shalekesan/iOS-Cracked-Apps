//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMFunRecommendItemDO, UIImageView, UILabel;

@interface FMFunSimilarCardItemImageView : UIView
{
    FMFunRecommendItemDO *_itemDO;
    UIImageView *_imgView;
    UIImageView *_videoIndicator;
    UILabel *_priceLabel;
    UIImageView *_mask;
}

@property(retain, nonatomic) UIImageView *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *videoIndicator; // @synthesize videoIndicator=_videoIndicator;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) FMFunRecommendItemDO *itemDO; // @synthesize itemDO=_itemDO;
- (void).cxx_destruct;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

