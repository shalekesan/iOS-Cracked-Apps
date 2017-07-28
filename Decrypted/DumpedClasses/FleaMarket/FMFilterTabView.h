//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage, UIImageView, UILabel;

@interface FMFilterTabView : UIView
{
    _Bool _isSelected;
    _Bool _showImage;
    UIImage *_customImage;
    UILabel *_nameLabel;
    UIImageView *_selectedImage;
    CDUnknownBlockType _selectedBlk;
}

@property(copy, nonatomic) CDUnknownBlockType selectedBlk; // @synthesize selectedBlk=_selectedBlk;
@property(retain, nonatomic) UIImageView *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImage *customImage; // @synthesize customImage=_customImage;
@property(nonatomic) _Bool showImage; // @synthesize showImage=_showImage;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (void)refreshName:(id)arg1;
- (void)layoutSubviews;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1 name:(id)arg2 selectedBlk:(CDUnknownBlockType)arg3;

@end

