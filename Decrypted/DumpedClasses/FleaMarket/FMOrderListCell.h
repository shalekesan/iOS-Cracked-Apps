//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseTableViewCell.h"

#import "UIActionSheetDelegate.h"

@class FMButton, FMImageView, FMOrderInfoDO, NSMutableArray, NSString, UIButton, UILabel;

@interface FMOrderListCell : FMBaseTableViewCell <UIActionSheetDelegate>
{
    FMImageView *_headImage;
    UIButton *_chatButton;
    FMButton *_moreButton;
    FMButton *_leftButton;
    NSMutableArray *_actionArray;
    FMOrderInfoDO *_orderList;
    UILabel *_itemPrice;
}

@property(retain, nonatomic) UILabel *itemPrice; // @synthesize itemPrice=_itemPrice;
@property(retain, nonatomic) FMOrderInfoDO *orderList; // @synthesize orderList=_orderList;
- (void).cxx_destruct;
- (id)buildTimeoutString:(long long)arg1;
- (id)buildTimeoutHint:(int)arg1;
- (void)chatButtonTapped:(id)arg1;
- (void)handleButtonTapped:(long long)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)moreButtonTapped:(id)arg1;
- (void)leftButtonTapped:(id)arg1;
- (id)getStatusImageWithStatus:(int)arg1;
- (id)getStatusColorWithStatus:(int)arg1;
- (id)getStatusStringWithStatus:(id)arg1;
- (void)setupDynamicAcions;
- (void)setupActions;
- (void)setData:(id)arg1;
- (void)initOrderAction;
- (void)setupRemainingTimeLabel;
- (void)initOrderInfo;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

