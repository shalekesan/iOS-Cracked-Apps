//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBAVBoardCastViewProtocol.h"
#import "TBLiveMessageProtocol.h"

@class NSDictionary, NSString, TBAVBoardCastOptions, TBAVBoardCastView, TBLiveDataModel;

@interface TBLiveVideoEngine : NSObject <TBLiveMessageProtocol, TBAVBoardCastViewProtocol>
{
    TBLiveDataModel *_liveDataModel;
    TBAVBoardCastView *_broadCastView;
    NSDictionary *_broadCastCustomOpt;
    long long _broadCasetStatus;
    CDUnknownBlockType _broadCastStatusChangedBlock;
    CDUnknownBlockType _statusChangedBlock;
    long long _liveStartTime;
    long long _liveStatus;
    CDUnknownBlockType _getMKTMsgErrorBlock;
    CDUnknownBlockType _getCommitMessageBlock;
    CDUnknownBlockType _getSystemMessageBlock;
    CDUnknownBlockType _getShareItemMessageBlock;
    CDUnknownBlockType _getInteractiveMessageBlock;
    CDUnknownBlockType _getDigMessageBlock;
    CDUnknownBlockType _getLiveGiftMessageBlock;
    CDUnknownBlockType _getStartAppointmentVideoMessageBlock;
    CDUnknownBlockType _getTopicStatMessage;
    CDUnknownBlockType _getTopicUserListMessage;
    CDUnknownBlockType _getTopicHistoryMsgListMessage;
    CDUnknownBlockType _getSwitchPlayQualityMessage;
    CDUnknownBlockType _getSwitchActorQualityMessage;
    CDUnknownBlockType _getUnknownMessage;
    CDUnknownBlockType _getHandGesture;
    NSString *_liveId;
    NSString *_hostId;
    TBAVBoardCastOptions *_boardCastOpt;
    NSDictionary *_boardCastConfig;
}

@property(retain, nonatomic) NSDictionary *boardCastConfig; // @synthesize boardCastConfig=_boardCastConfig;
@property(retain, nonatomic) TBAVBoardCastOptions *boardCastOpt; // @synthesize boardCastOpt=_boardCastOpt;
@property(retain, nonatomic) NSString *hostId; // @synthesize hostId=_hostId;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) CDUnknownBlockType getHandGesture; // @synthesize getHandGesture=_getHandGesture;
@property(copy, nonatomic) CDUnknownBlockType getUnknownMessage; // @synthesize getUnknownMessage=_getUnknownMessage;
@property(copy, nonatomic) CDUnknownBlockType getSwitchActorQualityMessage; // @synthesize getSwitchActorQualityMessage=_getSwitchActorQualityMessage;
@property(copy, nonatomic) CDUnknownBlockType getSwitchPlayQualityMessage; // @synthesize getSwitchPlayQualityMessage=_getSwitchPlayQualityMessage;
@property(copy, nonatomic) CDUnknownBlockType getTopicHistoryMsgListMessage; // @synthesize getTopicHistoryMsgListMessage=_getTopicHistoryMsgListMessage;
@property(copy, nonatomic) CDUnknownBlockType getTopicUserListMessage; // @synthesize getTopicUserListMessage=_getTopicUserListMessage;
@property(copy, nonatomic) CDUnknownBlockType getTopicStatMessage; // @synthesize getTopicStatMessage=_getTopicStatMessage;
@property(copy, nonatomic) CDUnknownBlockType getStartAppointmentVideoMessageBlock; // @synthesize getStartAppointmentVideoMessageBlock=_getStartAppointmentVideoMessageBlock;
@property(copy, nonatomic) CDUnknownBlockType getLiveGiftMessageBlock; // @synthesize getLiveGiftMessageBlock=_getLiveGiftMessageBlock;
@property(copy, nonatomic) CDUnknownBlockType getDigMessageBlock; // @synthesize getDigMessageBlock=_getDigMessageBlock;
@property(copy, nonatomic) CDUnknownBlockType getInteractiveMessageBlock; // @synthesize getInteractiveMessageBlock=_getInteractiveMessageBlock;
@property(copy, nonatomic) CDUnknownBlockType getShareItemMessageBlock; // @synthesize getShareItemMessageBlock=_getShareItemMessageBlock;
@property(copy, nonatomic) CDUnknownBlockType getSystemMessageBlock; // @synthesize getSystemMessageBlock=_getSystemMessageBlock;
@property(copy, nonatomic) CDUnknownBlockType getCommitMessageBlock; // @synthesize getCommitMessageBlock=_getCommitMessageBlock;
@property(copy, nonatomic) CDUnknownBlockType getMKTMsgErrorBlock; // @synthesize getMKTMsgErrorBlock=_getMKTMsgErrorBlock;
@property(readonly, nonatomic) long long liveStatus; // @synthesize liveStatus=_liveStatus;
@property(nonatomic) long long liveStartTime; // @synthesize liveStartTime=_liveStartTime;
@property(copy, nonatomic) CDUnknownBlockType statusChangedBlock; // @synthesize statusChangedBlock=_statusChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType broadCastStatusChangedBlock; // @synthesize broadCastStatusChangedBlock=_broadCastStatusChangedBlock;
@property(nonatomic) long long broadCasetStatus; // @synthesize broadCasetStatus=_broadCasetStatus;
@property(retain, nonatomic) NSDictionary *broadCastCustomOpt; // @synthesize broadCastCustomOpt=_broadCastCustomOpt;
@property(retain, nonatomic) TBAVBoardCastView *broadCastView; // @synthesize broadCastView=_broadCastView;
@property(retain, nonatomic) TBLiveDataModel *liveDataModel; // @synthesize liveDataModel=_liveDataModel;
- (void).cxx_destruct;
- (void)didGetUnknownMsg:(long long)arg1 data:(id)arg2 timestamp:(long long)arg3;
- (void)didGetTopicHistoryMsgListMessage:(id)arg1 errorInfo:(id)arg2;
- (void)didGetTopicUserListMessage:(id)arg1 errorInfo:(id)arg2;
- (void)didGetTopicStatMessage:(id)arg1 errorInfo:(id)arg2;
- (void)didGetLiveGiftMessage:(id)arg1;
- (void)didGetStartAppointmentVideoMessage:(id)arg1;
- (void)didGetCtrlCommandMessage:(id)arg1;
- (void)didGetSwitchPlayQualityMessage:(id)arg1;
- (void)didGetSwitchActorQualityMessage:(id)arg1;
- (void)didGetDigMessage:(long long)arg1;
- (void)didGetInteractiveMessage:(id)arg1;
- (void)didGetShareItemMessage:(id)arg1;
- (void)didGetLiveStreamRestoreMessage;
- (void)didGetLiveStreamBreakMessage;
- (void)didGetEndLiveMessage:(id)arg1;
- (void)didGetSystemMessage:(id)arg1;
- (void)didGetCommitMessage:(id)arg1;
- (void)didMKTMsgError:(id)arg1;
- (void)refreshGlobalContextAndRoomInfo:(id)arg1;
- (void)requestLiveDetailInfo;
- (void)requestLiveStatus;
- (void)requestLiveEnd;
- (void)requestStartLiveWithLiveId:(id)arg1;
- (void)requestCreateLiveWithTitle:(id)arg1 imgUrl:(id)arg2 city:(id)arg3 sourceType:(id)arg4 tag:(id)arg5 channelId:(id)arg6 columnId:(id)arg7 longAndLat:(id)arg8 preTime:(id)arg9;
- (void)notifyStatusChanged:(long long)arg1;
- (void)onVideoCoreErrActive:(id)arg1;
- (void)didAddCameraSource;
- (void)checkGestureDetectionResult:(int)arg1 gestureZone:(struct CGRect)arg2;
- (void)connectionStatusChanged:(long long)arg1;
- (void)destory:(long long)arg1 closeByOpenSameLiveRoom:(_Bool)arg2;
- (void)pause;
- (void)resume;
- (void)leaveLiveRoom:(long long)arg1;
- (_Bool)enterLiveRoom:(long long)arg1;
- (void)getLiveDataAndStatusWithLiveId:(id)arg1 HostId:(id)arg2;
- (void)checkStatusWithLiveId:(id)arg1 HostId:(id)arg2;
- (id)getBroadCastViewWithFrame:(struct CGRect)arg1 Opt:(id)arg2;
- (void)broadcastViewWillDisappear;
- (void)broadcastViewStop;
- (void)broadcastViewResume;
- (void)endLive;
- (void)startLiveWithLiveId:(id)arg1;
- (void)createLiveWithTitle:(id)arg1 imgUrl:(id)arg2 city:(id)arg3 sourceType:(id)arg4 channelId:(id)arg5 columnId:(id)arg6 longAndLat:(id)arg7 preTime:(id)arg8;
- (void)createLiveWithTitle:(id)arg1 imgUrl:(id)arg2 city:(id)arg3 sourceType:(id)arg4 tag:(id)arg5 longAndLat:(id)arg6 preTime:(id)arg7;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

