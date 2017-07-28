//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"
#import "UIGestureRecognizerDelegate.h"

@class FMCardItemInterestSelectView, FMFeedActionView, FMFeedFavorButton, FMFeedFavorCommentView, FMFeedFromFishpondView, FMFeedInteractiveView, FMFeedPriceView, FMFeedTitleView, FMFeedUserInfoView, FMFeedView, FMFeedsVideoPlayer, FMHomePicView, FMHouseHomeItemPicView, FMImageView, NSString, UIView;

@interface FMItemFeedCardCell : UITableViewCell <UIGestureRecognizerDelegate, FMComponentCellProtocol>
{
    FMFeedView *_feedView;
    FMFeedUserInfoView *_feedUserInfoView;
    FMFeedPriceView *_feedPriceView;
    FMHomePicView *_feedMultimediaView;
    FMHouseHomeItemPicView *_feedHouseMultimediaView;
    FMFeedsVideoPlayer *_feedVideoView;
    FMFeedTitleView *_feedTitleView;
    FMFeedInteractiveView *_feedInteractiveView;
    FMFeedFromFishpondView *_feedFromFishpondView;
    FMFeedFavorCommentView *_feedFavorCommentView;
    FMFeedFavorButton *_feedFavorButton;
    FMFeedActionView *_feedActionView;
    UIView *_cellSeparator;
    FMImageView *_statusImgView;
    FMCardItemInterestSelectView *_interestSelectView;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) FMCardItemInterestSelectView *interestSelectView; // @synthesize interestSelectView=_interestSelectView;
@property(retain, nonatomic) FMImageView *statusImgView; // @synthesize statusImgView=_statusImgView;
@property(retain, nonatomic) UIView *cellSeparator; // @synthesize cellSeparator=_cellSeparator;
@property(retain, nonatomic) FMFeedActionView *feedActionView; // @synthesize feedActionView=_feedActionView;
@property(retain, nonatomic) FMFeedFavorButton *feedFavorButton; // @synthesize feedFavorButton=_feedFavorButton;
@property(retain, nonatomic) FMFeedFavorCommentView *feedFavorCommentView; // @synthesize feedFavorCommentView=_feedFavorCommentView;
@property(retain, nonatomic) FMFeedFromFishpondView *feedFromFishpondView; // @synthesize feedFromFishpondView=_feedFromFishpondView;
@property(retain, nonatomic) FMFeedInteractiveView *feedInteractiveView; // @synthesize feedInteractiveView=_feedInteractiveView;
@property(retain, nonatomic) FMFeedTitleView *feedTitleView; // @synthesize feedTitleView=_feedTitleView;
@property(retain, nonatomic) FMFeedsVideoPlayer *feedVideoView; // @synthesize feedVideoView=_feedVideoView;
@property(retain, nonatomic) FMHouseHomeItemPicView *feedHouseMultimediaView; // @synthesize feedHouseMultimediaView=_feedHouseMultimediaView;
@property(retain, nonatomic) FMHomePicView *feedMultimediaView; // @synthesize feedMultimediaView=_feedMultimediaView;
@property(retain, nonatomic) FMFeedPriceView *feedPriceView; // @synthesize feedPriceView=_feedPriceView;
@property(retain, nonatomic) FMFeedUserInfoView *feedUserInfoView; // @synthesize feedUserInfoView=_feedUserInfoView;
@property(retain, nonatomic) FMFeedView *feedView; // @synthesize feedView=_feedView;
- (void).cxx_destruct;
- (id)getPlayer;
- (void)deleteAlert;
- (void)searchTagDO:(id)arg1 withItemDO:(id)arg2;
- (void)searchTagWithItemDO:(id)arg1;
- (_Bool)gotoDetailPageWithItemDO:(id)arg1 isScrollToComment:(_Bool)arg2;
- (_Bool)gotoPersonalPageWithItemDO:(id)arg1;
- (void)didSelectCell;
- (void)bindComponent:(id)arg1;
- (void)didEndDisplayingForRowAtIndexPath:(id)arg1;
- (void)willDisplayForRowAtIndexPath:(id)arg1;
- (void)cellLongPressAction:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

