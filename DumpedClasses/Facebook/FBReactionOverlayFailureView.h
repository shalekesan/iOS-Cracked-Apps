//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBRichTextView, UILabel;

@interface FBReactionOverlayFailureView : UIView
{
    UILabel *_titleLabel;
    FBRichTextView *_detailTextView;
}

- (void).cxx_destruct;
- (void)_setTextForDetailTextViewWithSurface:(id)arg1;
- (void)_configSubViewsWithSurface:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 surface:(id)arg2;

@end
