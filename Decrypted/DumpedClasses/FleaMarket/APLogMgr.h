//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APLogMgrInner;

@interface APLogMgr : NSObject
{
    APLogMgrInner *_inner;
    id <APLogMgrDelegate> _delegate;
}

+ (void)fileArrAtPath:(const char *)arg1 outArr:(id)arg2;
+ (id)sharedInstance;
@property(nonatomic) __weak id <APLogMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reportUploadFinish:(id)arg1;
- (void)reportTaskStatus:(id)arg1;
- (id)buildbody:(id)arg1 isSuccess:(id)arg2 diagnoseMsg:(id)arg3;
- (id)buildReportStatusRequest;
- (void)reportSatus:(id)arg1;
- (void)uploadLog:(id)arg1 params:(id)arg2;
- (id)removeTask:(id)arg1 fromTaskArray:(id)arg2;
- (id)getTaskById:(id)arg1 from:(id)arg2;
- (_Bool)TaskArry:(id)arg1 CotainsThisTask:(id)arg2;
- (void)handleAutoUpload:(id)arg1;
- (void)handleSyncUploadCmd:(id)arg1;
- (void)handleConfigUploadCmd:(id)arg1;
- (void)handleUserChanged;
- (id)oneServerURL;
- (id)oneOpQueue;
- (id)oneNetQueue;
- (id)oneTaskArray;
- (void)delayInitInner;
- (id)init;

@end

