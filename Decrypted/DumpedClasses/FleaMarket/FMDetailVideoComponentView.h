//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FMComponentCellProtocol.h"

@class FMImageView, NSString, TBEmbededVideoView, UIButton, UIWebView;

@interface FMDetailVideoComponentView : UIView <FMComponentCellProtocol>
{
    FMImageView *_imageView;
    TBEmbededVideoView *_videoView;
    UIButton *_playButton;
    UIWebView *_audioAnimationView;
}

+ (id)IdentifierForComponent:(id)arg1;
+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) UIWebView *audioAnimationView; // @synthesize audioAnimationView=_audioAnimationView;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) TBEmbededVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) FMImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (_Bool)shouldAutoPlay;
- (void)reachabilityReachableChanged:(id)arg1;
- (void)changeHeight:(id)arg1;
- (void)bindComponent:(id)arg1;
- (void)enterFullScreanToPlay:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

