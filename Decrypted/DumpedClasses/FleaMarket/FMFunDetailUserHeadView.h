//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMAvatarImageView, FMUserTagLabel, FMUserTagListDO, NSString, UILabel;

@interface FMFunDetailUserHeadView : UIView
{
    NSString *_userId;
    NSString *_userNick;
    FMUserTagListDO *_userTag;
    FMAvatarImageView *_avatarView;
    UILabel *_nickLabel;
    FMUserTagLabel *_tagLabel;
    UIView *_bgView;
}

@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) FMUserTagLabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) FMAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) FMUserTagListDO *userTag; // @synthesize userTag=_userTag;
@property(retain, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)bindUserId:(id)arg1 userNick:(id)arg2 userTag:(id)arg3;
- (void)setupViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

