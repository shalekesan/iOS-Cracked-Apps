//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMImageView, UIButton, UILabel;

@interface FMScanGetRedEnvelopeView : UIView
{
    CDUnknownBlockType _dismissAction;
    UIView *_bgView;
    FMImageView *_houseImageView;
    FMImageView *_logoImageView;
    UILabel *_alertLabel;
    UIButton *_gotoButton;
    double _houseImageWidth;
    double _houseImageHeight;
}

@property(nonatomic) double houseImageHeight; // @synthesize houseImageHeight=_houseImageHeight;
@property(nonatomic) double houseImageWidth; // @synthesize houseImageWidth=_houseImageWidth;
@property(retain, nonatomic) UIButton *gotoButton; // @synthesize gotoButton=_gotoButton;
@property(retain, nonatomic) UILabel *alertLabel; // @synthesize alertLabel=_alertLabel;
@property(retain, nonatomic) FMImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) FMImageView *houseImageView; // @synthesize houseImageView=_houseImageView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType dismissAction; // @synthesize dismissAction=_dismissAction;
- (void).cxx_destruct;
- (void)bindComponent:(id)arg1;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

