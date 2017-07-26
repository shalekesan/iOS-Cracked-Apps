//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaskRecord.h"

@class NSDate, NSDictionary, UploadImageInfo;

@interface ImageTask : TaskRecord
{
    int _curDecodeTimes;
    unsigned long long _imageTaskType;
    long long _partialBytes;
    NSDate *_startNetworkTime;
    NSDate *_endNetworkTime;
    NSDate *_decodedTime;
    double _firstPJPEGCostTime;
    unsigned long long _cropMode;
    NSDictionary *_externalRemoteLogInfo;
    unsigned long long _imageContentType;
    UploadImageInfo *_uploadInfo;
}

@property(nonatomic) int curDecodeTimes; // @synthesize curDecodeTimes=_curDecodeTimes;
@property(retain, nonatomic) UploadImageInfo *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
@property(nonatomic) unsigned long long imageContentType; // @synthesize imageContentType=_imageContentType;
@property(copy, nonatomic) NSDictionary *externalRemoteLogInfo; // @synthesize externalRemoteLogInfo=_externalRemoteLogInfo;
@property(nonatomic) unsigned long long cropMode; // @synthesize cropMode=_cropMode;
@property(nonatomic) double firstPJPEGCostTime; // @synthesize firstPJPEGCostTime=_firstPJPEGCostTime;
@property(retain, nonatomic) NSDate *decodedTime; // @synthesize decodedTime=_decodedTime;
@property(retain, nonatomic) NSDate *endNetworkTime; // @synthesize endNetworkTime=_endNetworkTime;
@property(retain, nonatomic) NSDate *startNetworkTime; // @synthesize startNetworkTime=_startNetworkTime;
@property(nonatomic) long long partialBytes; // @synthesize partialBytes=_partialBytes;
@property(nonatomic) unsigned long long imageTaskType; // @synthesize imageTaskType=_imageTaskType;
- (void).cxx_destruct;
- (void)setRunningBlock:(CDUnknownBlockType)arg1;
- (void)handlePJPEGData:(id)arg1 config:(id)arg2 identifier:(id)arg3;
- (id)initWithTaskID:(id)arg1 imageTaskType:(unsigned long long)arg2;

@end
