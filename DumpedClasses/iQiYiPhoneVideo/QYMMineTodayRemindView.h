//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UILabel, UIScrollView;

@interface QYMMineTodayRemindView : UIImageView <UIScrollViewDelegate>
{
    UIImageView *_remindViewBg;
    UIScrollView *_remindScrollView;
    UIImageView *_userIconShadow;
    UIImageView *_userIcon;
    UILabel *_userName;
    UIImageView *_userVipIcon;
}

- (void).cxx_destruct;
- (void)initRemindScrollView:(long long)arg1;
- (void)layoutTodayRemindView:(id)arg1 withRecentEndCoupons:(id)arg2 withStoreMoviesShowToday:(id)arg3 withSelectOrderIndex:(long long)arg4;
- (void)layoutUserInfoView:(id)arg1 userIconShadowSize:(struct CGRect)arg2 userIconDefaultImage:(id)arg3 userIconDefaultImageSize:(struct CGRect)arg4 hasRemindInfo:(_Bool)arg5;
- (void)loginAccount;
- (void)setSubviewPropertyInParentView:(id)arg1;
- (void)backAction;
- (void)initRemindViewBg:(id)arg1;
- (void)initBackButton;
- (id)initWithFrame:(struct CGRect)arg1 backgroundImage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

