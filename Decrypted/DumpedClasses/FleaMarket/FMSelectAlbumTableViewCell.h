//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface FMSelectAlbumTableViewCell : UITableViewCell
{
    UIImageView *_leftImg;
    UILabel *_contentLabel;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *leftImg; // @synthesize leftImg=_leftImg;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 title:(id)arg2;
- (void)layout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

