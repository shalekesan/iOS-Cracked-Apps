//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMViewComponent.h"

#import "FMRTCSessionMgrProtocol.h"
#import "FMXEventHandlerDelegate.h"

@class FMRTCSessionMgr, FMXEventHandler, NSString, RACCommand, UIView;

@interface FMRTCViewComponent : FMViewComponent <FMXEventHandlerDelegate, FMRTCSessionMgrProtocol>
{
    _Bool _switchAudioWaiting;
    _Bool _isCallTimeOut;
    _Bool _hasSelfVideo;
    _Bool _hasPeerVideo;
    _Bool _isMicroMute;
    int _status;
    int _startType;
    int _audioDevicEvent;
    int _teleEvent;
    int _rtcType;
    NSString *_sessionID;
    NSString *_roomID;
    NSString *_token;
    NSString *_peerUserId;
    NSString *_peerUserNick;
    NSString *_selfUserId;
    NSString *_selfUserNick;
    NSString *_busnessId;
    NSString *_transferUrl;
    RACCommand *_hangupCommand;
    RACCommand *_rejectCommand;
    RACCommand *_acceptCommand;
    RACCommand *_switchCameraCommand;
    RACCommand *_handsFreeCommand;
    RACCommand *_switchAudioCommand;
    RACCommand *_microMuteCommand;
    RACCommand *_videoShowCommand;
    RACCommand *_logCommand;
    UIView *_localView;
    UIView *_remoteView;
    UIView *_debugView;
    FMRTCSessionMgr *_sessionMgr;
    FMXEventHandler *_eventHandler;
}

@property(retain, nonatomic) FMXEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(nonatomic) __weak FMRTCSessionMgr *sessionMgr; // @synthesize sessionMgr=_sessionMgr;
@property(nonatomic) __weak UIView *debugView; // @synthesize debugView=_debugView;
@property(nonatomic) __weak UIView *remoteView; // @synthesize remoteView=_remoteView;
@property(nonatomic) __weak UIView *localView; // @synthesize localView=_localView;
@property(retain, nonatomic) RACCommand *logCommand; // @synthesize logCommand=_logCommand;
@property(retain, nonatomic) RACCommand *videoShowCommand; // @synthesize videoShowCommand=_videoShowCommand;
@property(retain, nonatomic) RACCommand *microMuteCommand; // @synthesize microMuteCommand=_microMuteCommand;
@property(retain, nonatomic) RACCommand *switchAudioCommand; // @synthesize switchAudioCommand=_switchAudioCommand;
@property(retain, nonatomic) RACCommand *handsFreeCommand; // @synthesize handsFreeCommand=_handsFreeCommand;
@property(retain, nonatomic) RACCommand *switchCameraCommand; // @synthesize switchCameraCommand=_switchCameraCommand;
@property(retain, nonatomic) RACCommand *acceptCommand; // @synthesize acceptCommand=_acceptCommand;
@property(retain, nonatomic) RACCommand *rejectCommand; // @synthesize rejectCommand=_rejectCommand;
@property(retain, nonatomic) RACCommand *hangupCommand; // @synthesize hangupCommand=_hangupCommand;
@property(nonatomic) int rtcType; // @synthesize rtcType=_rtcType;
@property(nonatomic) int teleEvent; // @synthesize teleEvent=_teleEvent;
@property(nonatomic) int audioDevicEvent; // @synthesize audioDevicEvent=_audioDevicEvent;
@property(nonatomic) _Bool isMicroMute; // @synthesize isMicroMute=_isMicroMute;
@property(nonatomic) _Bool hasPeerVideo; // @synthesize hasPeerVideo=_hasPeerVideo;
@property(nonatomic) _Bool hasSelfVideo; // @synthesize hasSelfVideo=_hasSelfVideo;
@property(nonatomic) _Bool isCallTimeOut; // @synthesize isCallTimeOut=_isCallTimeOut;
@property(copy, nonatomic) NSString *transferUrl; // @synthesize transferUrl=_transferUrl;
@property(copy, nonatomic) NSString *busnessId; // @synthesize busnessId=_busnessId;
@property(copy, nonatomic) NSString *selfUserNick; // @synthesize selfUserNick=_selfUserNick;
@property(copy, nonatomic) NSString *selfUserId; // @synthesize selfUserId=_selfUserId;
@property(copy, nonatomic) NSString *peerUserNick; // @synthesize peerUserNick=_peerUserNick;
@property(copy, nonatomic) NSString *peerUserId; // @synthesize peerUserId=_peerUserId;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) int startType; // @synthesize startType=_startType;
@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onTelephoneEvent:(int)arg1;
- (void)onAudioDeviceEvent:(int)arg1;
- (void)setSwitchAudioWaiting:(_Bool)arg1;
- (void)recvCallTimeOut;
- (void)callTimeOut;
- (void)registerToSession;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

