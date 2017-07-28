//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioRecorderDelegate.h"

@class AVAudioRecorder, AVAudioSession, NSString, NSTimer;

@interface FMVoiceRecorder : NSObject <AVAudioRecorderDelegate>
{
    AVAudioRecorder *_recorder;
    CDUnknownBlockType _powerBlock;
    CDUnknownBlockType _finishBlock;
    AVAudioSession *_session;
    NSTimer *_recordTimer;
    double _recorderTime;
    NSString *_armFile;
    double _startTime;
}

+ (void)setMaxRecordTime:(double)arg1;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) AVAudioSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(copy, nonatomic) CDUnknownBlockType powerBlock; // @synthesize powerBlock=_powerBlock;
@property(readonly, nonatomic) AVAudioRecorder *recorder; // @synthesize recorder=_recorder;
- (void).cxx_destruct;
- (void)dealloc;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (id)_recordSetting;
- (void)resetSessionWithRecord;
- (void)recordPowerUpdate;
- (void)deleteArmFile;
- (void)stop;
@property(readonly, nonatomic) double recordTime;
- (_Bool)recording;
- (void)record;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

