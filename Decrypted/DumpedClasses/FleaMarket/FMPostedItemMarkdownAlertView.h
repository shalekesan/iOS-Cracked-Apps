//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMImageView, FMPostedItemCardCellDO, UIButton, UILabel;

@interface FMPostedItemMarkdownAlertView : UIView
{
    FMPostedItemCardCellDO *_postedItemDO;
    FMImageView *_iconImageView;
    UILabel *_titleLabel;
    UIView *_listView;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) FMImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) FMPostedItemCardCellDO *postedItemDO; // @synthesize postedItemDO=_postedItemDO;
- (void).cxx_destruct;
- (void)discountPrice:(id)arg1;
- (id)btnActionWithPrice:(id)arg1 discount:(unsigned long long)arg2;
- (void)setTitlePrice:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)addCellList:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

