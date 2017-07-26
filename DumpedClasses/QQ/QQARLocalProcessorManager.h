//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQARFaceEngine;

@interface QQARLocalProcessorManager : NSObject
{
    QQARFaceEngine *_faceRecogManager;
}

- (void).cxx_destruct;
- (float *)getMakerProjectMatrix;
- (_Bool)loadCloudFaceRecogResult:(id)arg1;
- (_Bool)loadPretreatmentResult:(id)arg1;
- (_Bool)loadDynamicFeature:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)stopLocalRecog:(int)arg1;
- (_Bool)resetLocalRecogEnv:(int)arg1;
- (_Bool)resumeLocalRecog:(int)arg1;
- (_Bool)pauseLocalRecog:(int)arg1;
- (void)doLocalRecogPerFrame:(id)arg1 model:(id)arg2;
- (_Bool)startLocalRecog:(int)arg1;
- (_Bool)doInitLocalRecog:(struct CGRect)arg1 drawRect:(struct CGRect *)arg2 avCaptureSize:(struct CGSize *)arg3 delegate:(id)arg4;

@end
