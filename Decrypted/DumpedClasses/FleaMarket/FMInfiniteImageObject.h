//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage, UIImageView;

@interface FMInfiniteImageObject : NSObject
{
    _Bool _isLocalImage;
    _Bool _waterMarked;
    UIImage *_image;
    NSString *_imagePath;
    NSString *_waterMaskTitle;
    UIImageView *_containerView;
}

+ (id)imageObjWithImage:(id)arg1;
+ (id)webImageWithUrl:(id)arg1;
+ (id)localImageWithName:(id)arg1;
@property(nonatomic) _Bool waterMarked; // @synthesize waterMarked=_waterMarked;
@property(nonatomic) __weak UIImageView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSString *waterMaskTitle; // @synthesize waterMaskTitle=_waterMaskTitle;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool isLocalImage; // @synthesize isLocalImage=_isLocalImage;
- (void).cxx_destruct;
- (void)generateWaterMarkForImage:(id)arg1;
- (void)fitInContainer:(id)arg1;

@end

