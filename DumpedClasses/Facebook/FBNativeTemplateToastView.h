//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBRichTextView;

@interface FBNativeTemplateToastView : UIView
{
    unsigned long long _position;
    double _animateInDuration;
    double _animateOutDuration;
    UIView *_toastView;
    FBRichTextView *_textView;
}

- (void).cxx_destruct;
- (void)hideToastWithCompletion:(CDUnknownBlockType)arg1;
- (void)showToastWithCompletion:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (id)initWithMessage:(id)arg1 animateInDuration:(double)arg2 animateOutDuration:(double)arg3 position:(unsigned long long)arg4;

@end
