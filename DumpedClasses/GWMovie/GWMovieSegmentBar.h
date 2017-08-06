//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol GWMoviewSegmentDelegate;

@interface GWMovieSegmentBar : UIView
{
    id <GWMoviewSegmentDelegate> _delegate;
    long long _currentIndex;
    UIView *_lineView;
    UIButton *_selectBtn;
}

@property(retain, nonatomic) UIButton *selectBtn; // @synthesize selectBtn=_selectBtn;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <GWMoviewSegmentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonClick:(id)arg1;
- (double)updateItemsData:(id)arg1;
- (void)setTitleArr:(id)arg1 segmentIndex:(long long)arg2;
- (void)setTitleArr:(id)arg1;
- (id)init;

@end
