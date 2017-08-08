//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBInstantGameUIMetrics, FBUserSession, NSArray, UILabel;

@interface FBQuicksilverChatHeadsView : UIView
{
    FBUserSession *_session;
    FBInstantGameUIMetrics *_metrics;
    UIView *_chatHeadsView;
    UILabel *_numChatHeadsLabel;
    NSArray *_chatHeadViewCells;
    unsigned long long _numberOfTotalChatHeads;
    unsigned long long _numberOfDisplayedChatHeads;
    long long _chatHeadsViewState;
}

- (void).cxx_destruct;
- (_Bool)_hasChatHeadLabel;
- (void)_animateLabelWithDirection:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateCellsWithDirection:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateWithDirection:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareDisplayedChatHeadsViewCells:(unsigned long long)arg1;
- (void)_setChatHeadsData:(id)arg1;
- (struct CGRect)_chatHeadCellFrameAtIndex:(unsigned long long)arg1 state:(long long)arg2;
- (void)_layoutChatHeadsViewCells;
- (void)_initNumChatHeadsLabel;
- (void)setChatHeadsData:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (id)initWithSession:(id)arg1;

@end
