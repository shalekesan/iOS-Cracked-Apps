//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class UILabel, UIView;

@interface ExploreAddEntryGroupCell : SSThemedTableViewCell
{
    _Bool _userTouched;
    UIView *_leftLineView;
    UILabel *_groupTitleLabel;
}

+ (double)defaultHeight;
@property(retain, nonatomic) UILabel *groupTitleLabel; // @synthesize groupTitleLabel=_groupTitleLabel;
@property(retain, nonatomic) UIView *leftLineView; // @synthesize leftLineView=_leftLineView;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setGroupTitle:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)changeHighlight:(_Bool)arg1;
- (void)themeChanged:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

