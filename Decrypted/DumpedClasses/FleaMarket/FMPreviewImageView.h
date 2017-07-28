//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMImageView, NSString, UIImage, UIImageView;

@interface FMPreviewImageView : UIView
{
    FMImageView *_fmImageView;
    UIImageView *_imageView;
    UIView *_maskView;
    struct CGRect _originFrame;
    float _maskLevel;
    NSString *_imageURL;
    UIImage *_image;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) float maskLevel; // @synthesize maskLevel=_maskLevel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

