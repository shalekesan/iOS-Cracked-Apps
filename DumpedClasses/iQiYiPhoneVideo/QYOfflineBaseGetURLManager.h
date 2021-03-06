//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataLoadManager.h"

@class NSError, NSMutableArray, NSMutableDictionary, NSString, QYDownloadTask;

@interface QYOfflineBaseGetURLManager : DataLoadManager
{
    int _requestType;
    NSString *_requestUrl;
    NSError *_myError;
    QYDownloadTask *_task;
    long long _requestNum;
    long long _f4vFileSize;
    NSMutableDictionary *_muVipDic;
    NSMutableDictionary *_crcDic;
    NSMutableArray *_oldSectionArray;
    NSMutableArray *_downloadSectionArray;
}

@property(retain, nonatomic) NSMutableArray *downloadSectionArray; // @synthesize downloadSectionArray=_downloadSectionArray;
@property(retain, nonatomic) NSMutableArray *oldSectionArray; // @synthesize oldSectionArray=_oldSectionArray;
@property(retain, nonatomic) NSMutableDictionary *crcDic; // @synthesize crcDic=_crcDic;
@property(retain, nonatomic) NSMutableDictionary *muVipDic; // @synthesize muVipDic=_muVipDic;
@property(nonatomic) long long f4vFileSize; // @synthesize f4vFileSize=_f4vFileSize;
@property(nonatomic) long long requestNum; // @synthesize requestNum=_requestNum;
@property(retain, nonatomic) QYDownloadTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSError *myError; // @synthesize myError=_myError;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) NSString *requestUrl; // @synthesize requestUrl=_requestUrl;
- (void).cxx_destruct;
- (void)parseJsonWithDic:(id)arg1 WithIsHasCRC:(_Bool)arg2;
- (id)parseF4VXXXWithDic:(id)arg1;
- (id)parseCRCWithDic:(id)arg1;
- (_Bool)parse:(id)arg1;
- (id)valueDicForPost;
- (id)urlStl;
- (id)init;

@end

