//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface NCover : UIView
{
    UIImageView *_cover;
    UILabel *_text;
}

@property(retain, nonatomic) UILabel *text; // @synthesize text=_text;
@property(retain, nonatomic) UIImageView *cover; // @synthesize cover=_cover;
- (void).cxx_destruct;
- (void)layout:(id)arg1 frame:(struct CGRect)arg2;
- (void)configSelf;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
