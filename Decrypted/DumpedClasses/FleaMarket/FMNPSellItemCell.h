//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"

@class FMCheckBoxView, FMImageView, NSString, UIImageView, UILabel, UIView;

@interface FMNPSellItemCell : UITableViewCell <FMComponentCellProtocol>
{
    FMImageView *_invalidImageView;
    FMCheckBoxView *_checkbox;
    UIImageView *_itemImageview;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_statusLabel;
    UIView *_fmContentView;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) UIView *fmContentView; // @synthesize fmContentView=_fmContentView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *itemImageview; // @synthesize itemImageview=_itemImageview;
@property(retain, nonatomic) FMCheckBoxView *checkbox; // @synthesize checkbox=_checkbox;
@property(retain, nonatomic) FMImageView *invalidImageView; // @synthesize invalidImageView=_invalidImageView;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)bindComponent:(id)arg1;
- (void)setupConstranits;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

