//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWMovieWalaBaseView.h"

@class GWCommentLabel, UILabel, UIView;

@interface GWAskAnswerWalaView : GWMovieWalaBaseView
{
    UIView *_bgView;
    GWCommentLabel *_answerLabel;
    UILabel *_numLabel;
}

@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) GWCommentLabel *answerLabel; // @synthesize answerLabel=_answerLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (double)viewHeightWithComment:(id)arg1;
- (double)updateWalaLayout;
- (double)walaBackViewPadding;
- (id)initWithFrame:(struct CGRect)arg1;

@end

