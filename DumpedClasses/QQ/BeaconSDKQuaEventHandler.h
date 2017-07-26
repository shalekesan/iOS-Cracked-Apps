//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface BeaconSDKQuaEventHandler : NSObject
{
    _Bool _enable;
    _Bool _isUploaded;
    int _uploadCnt;
    NSMutableArray *_list;
}

+ (void)addQuaRecordWithParam:(id)arg1;
+ (_Bool)isEnable;
+ (void)enable:(_Bool)arg1;
+ (id)getDefaultHandler;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(nonatomic) int uploadCnt; // @synthesize uploadCnt=_uploadCnt;
@property(nonatomic) _Bool isUploaded; // @synthesize isUploaded=_isUploaded;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (id)getQuaEventParams;
- (void)addQuaRecordWithParam:(id)arg1;
- (void)flushObjectsToLocalDB;

@end
