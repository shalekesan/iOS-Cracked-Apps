//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PSPromotionButton, PSTemplateModel, UIButton, UIImageView, UILabel;

@interface PSTemplateView : UIView
{
    unsigned long long _columIndex;
    PSTemplateModel *_psTemplate;
    UIImageView *_templateImg;
    UILabel *_templateNameLabel;
    int _xo;
    UIImageView *_selectionIndicator;
    UIImageView *_vipMarkView;
    UIImageView *_svipMarkView;
    UIImageView *_actMarkView;
    UIImageView *_yearSvipMarkView;
    UIImageView *_yearVipMarkView;
    UIImageView *_leftUpCornerMarkView;
    UIImageView *_limitedFreeView;
    UIImageView *_freeView;
    UIButton *_maskButton;
    id _target;
    int _type;
    PSPromotionButton *_promotionButton;
    SEL _action;
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) UIImageView *yearVipMarkView; // @synthesize yearVipMarkView=_yearVipMarkView;
@property(retain, nonatomic) UIImageView *yearSvipMarkView; // @synthesize yearSvipMarkView=_yearSvipMarkView;
@property(retain, nonatomic) UIImageView *selectionIndicator; // @synthesize selectionIndicator=_selectionIndicator;
@property(readonly, nonatomic) PSPromotionButton *promotionButton; // @synthesize promotionButton=_promotionButton;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)templateClicked:(id)arg1;
- (void)setTapedTarget:(id)arg1 action:(SEL)arg2;
- (void)refreshUserInterface;
@property(retain, nonatomic) PSTemplateModel *psTemplate; // @dynamic psTemplate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) UIImageView *actMarkView; // @dynamic actMarkView;
@property(nonatomic) unsigned long long columIndex; // @dynamic columIndex;
@property(retain, nonatomic) UIImageView *freeView; // @dynamic freeView;
@property(retain, nonatomic) UIImageView *leftUpCornerMarkView; // @dynamic leftUpCornerMarkView;
@property(retain, nonatomic) UIImageView *limitedFreeView; // @dynamic limitedFreeView;
@property(retain, nonatomic) UIButton *maskButton; // @dynamic maskButton;
@property(retain, nonatomic) UIImageView *svipMarkView; // @dynamic svipMarkView;
@property(nonatomic) id target; // @dynamic target;
@property(retain, nonatomic) UIImageView *templateImg; // @dynamic templateImg;
@property(retain, nonatomic) UILabel *templateNameLabel; // @dynamic templateNameLabel;
@property(retain, nonatomic) UIImageView *vipMarkView; // @dynamic vipMarkView;

@end
