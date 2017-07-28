//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMPostAuctionBidNoneUserView, FMPostAuctionBidNormalUserView, FMPostAuctionBidVipUserView, FMPostViewModel, MASConstraint;

@interface FMPostAuctionAttributesView : UIView
{
    FMPostViewModel *_viewModel;
    FMPostAuctionBidVipUserView *_vipUserView;
    FMPostAuctionBidNoneUserView *_noneUserView;
    FMPostAuctionBidNormalUserView *_normalUserView;
    MASConstraint *_bottomConstraint;
}

@property(retain, nonatomic) MASConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) FMPostAuctionBidNormalUserView *normalUserView; // @synthesize normalUserView=_normalUserView;
@property(retain, nonatomic) FMPostAuctionBidNoneUserView *noneUserView; // @synthesize noneUserView=_noneUserView;
@property(retain, nonatomic) FMPostAuctionBidVipUserView *vipUserView; // @synthesize vipUserView=_vipUserView;
@property(retain, nonatomic) FMPostViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)refreshView;
- (void)bind;
- (id)initWithViewModel:(id)arg1;

@end

