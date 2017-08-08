//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "FBAccessibilityInvalidationEventsListener-Protocol.h"
#import "FBBookmarksRowTableViewCellProtocol-Protocol.h"

@class FBBookmarkPostNameIcon, FBMemImage, FBRichTextView, NSString, UIImageView, UIView;

@interface FBBookmarksRowTableViewCell : UITableViewCell <FBAccessibilityInvalidationEventsListener, FBBookmarksRowTableViewCellProtocol>
{
    unsigned long long _cardStyle;
    unsigned long long _style;
    unsigned long long _disclosureIndicatorType;
    FBRichTextView *_textView;
    FBRichTextView *_subtitleView;
    UIView *_imageView;
    FBMemImage *_image;
    FBBookmarkPostNameIcon *_postNameIcon;
    UIView *_separatorView;
    UIImageView *_accessoryView;
    struct UIEdgeInsets _contentViewInsets;
    _Bool _hasCustomSelectedView;
    _Bool _isLastCell;
}

+ (double)separatorInset;
+ (double)imageSize;
+ (void)setOverrideConfigClass:(Class)arg1;
+ (id)_configuredSubtitleView;
+ (id)_configuredTextView;
+ (id)_subtitleFont;
+ (id)_textFont;
+ (double)height;
+ (double)heightForCardStyle:(unsigned long long)arg1 isFirstCell:(_Bool)arg2 isLastCell:(_Bool)arg3;
- (void).cxx_destruct;
- (void)_configureDetailTextAndAccessibilityLabelWithType:(unsigned long long)arg1 text:(id)arg2 detailText:(id)arg3;
- (void)_configureSubtitleViewWithSubtitleText:(id)arg1;
- (void)_configureTextViewWithText:(id)arg1 postNameIcon:(id)arg2 imageDownloader:(id)arg3;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)setStyle:(unsigned long long)arg1 text:(id)arg2 subtitleText:(id)arg3 unreadText:(id)arg4 detailTextType:(unsigned long long)arg5 image:(id)arg6 postNameIcon:(id)arg7 imageDownloader:(id)arg8 staticImage:(id)arg9 hasImageBorder:(_Bool)arg10 roundingStyle:(unsigned long long)arg11 cardStyle:(unsigned long long)arg12 isFirstCell:(_Bool)arg13 isLastCell:(_Bool)arg14 isDeepLinkItem:(_Bool)arg15 accessoryType:(long long)arg16 indicatorType:(unsigned long long)arg17 separatorInset:(struct UIEdgeInsets)arg18 dividerColor:(id)arg19;
- (void)prepareForReuse;
- (void)didReceiveAccessibilityInvalidation;
- (void)setDividerColor:(id)arg1;
- (void)setAccessoryType:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
