//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class FMImageView, NSString, UIImage;

@interface FMImageScrollView : UIScrollView <UIScrollViewDelegate>
{
    FMImageView *_imgView;
    NSString *_imageUrl;
    _Bool _isLoad;
    struct CGRect _initRect;
    UIImage *_initImg;
    double _currentScale;
    _Bool _needAnimation;
    UIImage *_oriImage;
    NSString *_waterMaskTitle;
    struct CGPoint _touchPoint;
}

@property(retain, nonatomic) NSString *waterMaskTitle; // @synthesize waterMaskTitle=_waterMaskTitle;
@property(nonatomic) struct CGPoint touchPoint; // @synthesize touchPoint=_touchPoint;
@property(nonatomic) _Bool needAnimation; // @synthesize needAnimation=_needAnimation;
@property(retain, nonatomic) UIImage *oriImage; // @synthesize oriImage=_oriImage;
@property(retain, nonatomic) FMImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)rectToZoom;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)aniImage;
- (void)downLoad;
- (void)reChangeInitRect;
- (void)setContentWithFrame:(struct CGRect)arg1;
- (void)setInitImg:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

