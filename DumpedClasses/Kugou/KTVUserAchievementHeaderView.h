//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KFUserAvatar, NSString, UIImageView;

@interface KTVUserAchievementHeaderView : UIView
{
    int _userAuthtype;
    long long _historyCount;
    NSString *_headImageURLStr;
    KFUserAvatar *_userAvatarView;
    UIImageView *_noDateImageView;
    UIImageView *_headerNumberImageView;
    UIImageView *_firstNumberImageView;
    UIImageView *_secondNumberImageView;
    double _adaptScale;
}

@property(nonatomic) double adaptScale; // @synthesize adaptScale=_adaptScale;
@property(retain, nonatomic) UIImageView *secondNumberImageView; // @synthesize secondNumberImageView=_secondNumberImageView;
@property(retain, nonatomic) UIImageView *firstNumberImageView; // @synthesize firstNumberImageView=_firstNumberImageView;
@property(retain, nonatomic) UIImageView *headerNumberImageView; // @synthesize headerNumberImageView=_headerNumberImageView;
@property(retain, nonatomic) UIImageView *noDateImageView; // @synthesize noDateImageView=_noDateImageView;
@property(retain, nonatomic) KFUserAvatar *userAvatarView; // @synthesize userAvatarView=_userAvatarView;
@property(nonatomic) int userAuthtype; // @synthesize userAuthtype=_userAuthtype;
@property(copy, nonatomic) NSString *headImageURLStr; // @synthesize headImageURLStr=_headImageURLStr;
@property(nonatomic) long long historyCount; // @synthesize historyCount=_historyCount;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

