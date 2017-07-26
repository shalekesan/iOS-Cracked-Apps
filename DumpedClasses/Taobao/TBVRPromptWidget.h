//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIFont, UILabel;

@interface TBVRPromptWidget : UIView
{
    _Bool _animated;
    int _iconFontSize;
    NSString *_textColor;
    UIFont *_textFont;
    NSString *_text;
    NSString *_iconFontName;
    UILabel *_textLabel;
    UILabel *_iconFontLabel;
}

@property(retain, nonatomic) UILabel *iconFontLabel; // @synthesize iconFontLabel=_iconFontLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(copy, nonatomic) NSString *iconFontName; // @synthesize iconFontName=_iconFontName;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int iconFontSize; // @synthesize iconFontSize=_iconFontSize;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(copy, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (void)clearIconFontLabel;
- (void)stopAnimation;
- (void)startAnimation;
- (void)resizeToFitSubviews;
- (void)setText:(id)arg1 iconFont:(id)arg2 animated:(_Bool)arg3;
- (void)setText:(id)arg1 iconFont:(id)arg2;
- (void)dealloc;
- (id)init;

@end
