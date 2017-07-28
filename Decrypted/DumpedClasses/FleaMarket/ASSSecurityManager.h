//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASSStorageModel, NSOperationQueue, NSString;

@interface ASSSecurityManager : NSObject
{
    NSOperationQueue *_asyncTaskQueue;
    ASSStorageModel *_modelCache;
    NSString *_prevApdid;
    NSString *_randomIC4;
    NSString *_lastLoginTime;
    NSString *_randomKey;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *randomKey; // @synthesize randomKey=_randomKey;
@property(retain, nonatomic) NSString *lastLoginTime; // @synthesize lastLoginTime=_lastLoginTime;
@property(retain, nonatomic) NSString *randomIC4; // @synthesize randomIC4=_randomIC4;
@property(retain, nonatomic) NSString *prevApdid; // @synthesize prevApdid=_prevApdid;
@property(retain) ASSStorageModel *modelCache; // @synthesize modelCache=_modelCache;
@property(retain, nonatomic) NSOperationQueue *asyncTaskQueue; // @synthesize asyncTaskQueue=_asyncTaskQueue;
- (void).cxx_destruct;
- (void)resetCache;
- (void)updateApdidAndToken:(id)arg1;
- (id)urlEncode:(id)arg1;
- (void)uploadAgentInfo:(id)arg1;
- (_Bool)checkEnvModeChanged:(id)arg1;
- (_Bool)checkIfTodayFirst;
- (_Bool)verifyNetworkResult:(id)arg1;
- (id)getApdidToken:(id)arg1;
- (_Bool)compareDateWithBenchmark:(id)arg1;
- (_Bool)checkDate;
- (void)initializeSecuritySDKTask:(id)arg1;
- (id)loadTrustData;
- (void)saveTrustData:(id)arg1;
- (id)getUtdid;
- (id)getTid;
- (id)getApdidResult:(id)arg1;
- (id)getTokenResult;
- (void)init:(int)arg1 utdid:(id)arg2 tid:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)init:(int)arg1 parameters:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)init;

@end

