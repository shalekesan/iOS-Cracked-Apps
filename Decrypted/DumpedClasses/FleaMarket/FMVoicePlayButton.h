//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class FMVoiceProgressView, NSNumber, NSString, UIImageView, UILabel, UIView;

@interface FMVoicePlayButton : UIButton
{
    FMVoiceProgressView *_progressView;
    UIView *_witheView;
    UILabel *_timeLabel;
    UIImageView *_imageView;
    unsigned char _isStart;
    CDUnknownBlockType _clickButtonBlock;
    _Bool _homeStyle;
    NSNumber *_voiceTime;
    NSString *_voiceUrl;
    NSString *_itemId;
}

@property(nonatomic) _Bool homeStyle; // @synthesize homeStyle=_homeStyle;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *voiceUrl; // @synthesize voiceUrl=_voiceUrl;
@property(retain, nonatomic) NSNumber *voiceTime; // @synthesize voiceTime=_voiceTime;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeProgress;
- (void)refreshProgress:(double)arg1 finish:(_Bool)arg2 url:(id)arg3;
- (void)clickButton:(id)arg1;
- (void)setClickVoiceBlock:(CDUnknownBlockType)arg1;
- (void)resetSubviewFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

