//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMRTCViewComponent, NSTimer;

@interface FMRTCBaseControlView : UIView
{
    _Bool _hasSelfVideo;
    _Bool _hasPeerVideo;
    int _callingDuration;
    id <FMRTCControlViewDelegate> _delegate;
    FMRTCViewComponent *_component;
    NSTimer *_rtcTimer;
}

@property(nonatomic) _Bool hasPeerVideo; // @synthesize hasPeerVideo=_hasPeerVideo;
@property(nonatomic) _Bool hasSelfVideo; // @synthesize hasSelfVideo=_hasSelfVideo;
@property(nonatomic) int callingDuration; // @synthesize callingDuration=_callingDuration;
@property(retain, nonatomic) NSTimer *rtcTimer; // @synthesize rtcTimer=_rtcTimer;
@property(nonatomic) __weak FMRTCViewComponent *component; // @synthesize component=_component;
@property(nonatomic) id <FMRTCControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rtcTimerAction:(int)arg1;
- (void)changeVideoShowType:(int)arg1;
- (void)changeAudioDevicEvent:(int)arg1;
- (void)changeTeleEvent:(int)arg1;
- (void)changeMicroMute:(_Bool)arg1;
- (void)changeRTCType:(int)arg1;
- (void)changeRTCStutas:(int)arg1;
- (void)controlVideoShow;
- (void)repeatTime:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 component:(id)arg2;

@end

