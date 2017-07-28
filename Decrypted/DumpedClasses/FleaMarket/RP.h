//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "ABFaceDetectCallback.h"
#import "RPTakePhotoControllerDelegate.h"

@class NSArray, NSMutableDictionary, NSString;

@interface RP : WVDynamicHandler <RPTakePhotoControllerDelegate, ABFaceDetectCallback>
{
    _Bool _autoUpload;
    CDUnknownBlockType _callback;
    NSArray *_photoTypeArray;
    NSArray *_gestureImageArray;
    NSMutableDictionary *_callBackDict;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSMutableDictionary *callBackDict; // @synthesize callBackDict=_callBackDict;
@property(retain, nonatomic) NSArray *gestureImageArray; // @synthesize gestureImageArray=_gestureImageArray;
@property(retain, nonatomic) NSArray *photoTypeArray; // @synthesize photoTypeArray=_photoTypeArray;
@property(nonatomic) _Bool autoUpload; // @synthesize autoUpload=_autoUpload;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)option:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)rpTrace:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (_Bool)judgeObject:(Class)arg1 FromDict:(id)arg2 withKey:(id)arg3;
- (id)actionStringBaseOnActionType:(long long)arg1;
- (void)deviceInfo:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)finish:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)setTitle:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)cancelUpload:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)uploadPhoto:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)doRecord:(id)arg1;
- (void)onFaceDetected:(id)arg1 FaceDetectResult:(struct ABFaceDetectResult)arg2;
- (void)onLivenessDetectFailed:(long long)arg1 withLivenessResult:(id)arg2;
- (void)onLivenessDetectSuccess:(id)arg1;
- (void)liveness:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)noCameraPermission;
- (void)cancelTakePhoto:(long long)arg1;
- (void)didTakePhoto:(id)arg1:(long long)arg2 extendParam:(id)arg3;
- (void)takePhoto:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

