//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "HHHMediaWriterDelegate.h"

@class AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureOutput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, CIContext, EAGLContext, HHHGLProgram, HHHMediaWriter, NSDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface HHHVision : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, HHHMediaWriterDelegate>
{
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_captureDeviceFront;
    AVCaptureDevice *_captureDeviceBack;
    AVCaptureDevice *_captureDeviceAudio;
    AVCaptureDeviceInput *_captureDeviceInputFront;
    AVCaptureDeviceInput *_captureDeviceInputBack;
    AVCaptureDeviceInput *_captureDeviceInputAudio;
    AVCaptureStillImageOutput *_captureOutputPhoto;
    AVCaptureAudioDataOutput *_captureOutputAudio;
    AVCaptureVideoDataOutput *_captureOutputVideo;
    HHHMediaWriter *_mediaWriter;
    NSObject<OS_dispatch_queue> *_captureSessionDispatchQueue;
    NSObject<OS_dispatch_queue> *_captureCaptureDispatchQueue;
    long long _cameraDevice;
    long long _cameraMode;
    long long _cameraOrientation;
    long long _previewOrientation;
    _Bool _autoUpdatePreviewOrientation;
    _Bool _autoFreezePreviewDuringCapture;
    _Bool _usesApplicationAudioSession;
    long long _focusMode;
    long long _exposureMode;
    long long _flashMode;
    long long _mirroringMode;
    NSString *_captureSessionPreset;
    NSString *_captureDirectory;
    long long _outputFormat;
    NSMutableSet *_captureThumbnailTimes;
    NSMutableSet *_captureThumbnailFrames;
    double _videoBitRate;
    long long _audioBitRate;
    long long _videoFrameRate;
    NSDictionary *_additionalCompressionProperties;
    NSDictionary *_additionalVideoProperties;
    AVCaptureDevice *_currentDevice;
    AVCaptureDeviceInput *_currentInput;
    AVCaptureOutput *_currentOutput;
    AVCaptureVideoPreviewLayer *_previewLayer;
    struct CGRect _cleanAperture;
    CDStruct_1b6d18a9 _startTimestamp;
    CDStruct_1b6d18a9 _timeOffset;
    CDStruct_1b6d18a9 _maximumCaptureDuration;
    long long _bufferDevice;
    long long _bufferOrientation;
    unsigned long long _bufferWidth;
    unsigned long long _bufferHeight;
    struct CGRect _presentationFrame;
    EAGLContext *_context;
    HHHGLProgram *_program;
    struct __CVBuffer *_lumaTexture;
    struct __CVBuffer *_chromaTexture;
    struct __CVOpenGLESTextureCache *_videoTextureCache;
    CIContext *_ciContext;
    struct {
        unsigned int previewRunning:1;
        unsigned int changingModes:1;
        unsigned int recording:1;
        unsigned int paused:1;
        unsigned int interrupted:1;
        unsigned int videoWritten:1;
        unsigned int videoRenderingEnabled:1;
        unsigned int audioCaptureEnabled:1;
        unsigned int thumbnailEnabled:1;
        unsigned int defaultVideoThumbnails:1;
        unsigned int videoCaptureFrame:1;
    } _flags;
    id <HHHVisionDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) CDStruct_1b6d18a9 maximumCaptureDuration; // @synthesize maximumCaptureDuration=_maximumCaptureDuration;
@property(copy, nonatomic) NSDictionary *additionalVideoProperties; // @synthesize additionalVideoProperties=_additionalVideoProperties;
@property(retain, nonatomic) NSDictionary *additionalCompressionProperties; // @synthesize additionalCompressionProperties=_additionalCompressionProperties;
@property(nonatomic) double videoBitRate; // @synthesize videoBitRate=_videoBitRate;
@property(nonatomic) long long audioBitRate; // @synthesize audioBitRate=_audioBitRate;
@property(copy, nonatomic) NSString *captureDirectory; // @synthesize captureDirectory=_captureDirectory;
@property(copy, nonatomic) NSString *captureSessionPreset; // @synthesize captureSessionPreset=_captureSessionPreset;
@property(nonatomic) struct CGRect presentationFrame; // @synthesize presentationFrame=_presentationFrame;
@property(readonly, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(nonatomic) long long outputFormat; // @synthesize outputFormat=_outputFormat;
@property(nonatomic) long long mirroringMode; // @synthesize mirroringMode=_mirroringMode;
@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(nonatomic) long long exposureMode; // @synthesize exposureMode=_exposureMode;
@property(nonatomic) long long focusMode; // @synthesize focusMode=_focusMode;
@property(nonatomic) long long cameraMode; // @synthesize cameraMode=_cameraMode;
@property(nonatomic) long long cameraDevice; // @synthesize cameraDevice=_cameraDevice;
@property(nonatomic) _Bool usesApplicationAudioSession; // @synthesize usesApplicationAudioSession=_usesApplicationAudioSession;
@property(nonatomic) _Bool autoFreezePreviewDuringCapture; // @synthesize autoFreezePreviewDuringCapture=_autoFreezePreviewDuringCapture;
@property(nonatomic) _Bool autoUpdatePreviewOrientation; // @synthesize autoUpdatePreviewOrientation=_autoUpdatePreviewOrientation;
@property(nonatomic) long long previewOrientation; // @synthesize previewOrientation=_previewOrientation;
@property(nonatomic) long long cameraOrientation; // @synthesize cameraOrientation=_cameraOrientation;
@property(readonly, nonatomic) struct CGRect cleanAperture; // @synthesize cleanAperture=_cleanAperture;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) AVCaptureDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(nonatomic) __weak id <HHHVisionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_destroyGL;
- (void)_setupGL;
- (void)_setupBuffers;
- (void)_cleanUpTextures;
- (void)clean;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)mediaWriterDidObserveVideoAuthorizationStatusDenied:(id)arg1;
- (void)mediaWriterDidObserveAudioAuthorizationStatusDenied:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_deviceSubjectAreaDidChange:(id)arg1;
- (void)_inputPortFormatDescriptionDidChange:(id)arg1;
- (void)_sessionInterruptionEnded:(id)arg1;
- (void)_sessionWasInterrupted:(id)arg1;
- (void)_sessionStopped:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)_automaticallyEndCaptureIfMaximumDurationReachedWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)_setupMediaWriterVideoInputWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)_setupMediaWriterAudioInputWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_failPhotoCaptureWithErrorCode:(long long)arg1;
- (void)_failVideoCaptureWithErrorCode:(long long)arg1;
- (void)_generateThumbnailsForVideoWithURL:(id)arg1 inDictionary:(id)arg2;
- (void)captureVideoThumbnailAtFrame:(long long)arg1;
- (void)captureVideoThumbnailAtTime:(double)arg1;
- (void)captureCurrentVideoThumbnail;
- (void)captureVideoFrameAsPhoto;
- (void)cancelVideoCapture;
- (void)endVideoCapture;
- (void)resumeVideoCapture;
- (void)pauseVideoCapture;
- (void)startVideoCapture;
@property(readonly, nonatomic) _Bool canCaptureVideo;
@property(readonly, nonatomic) _Bool supportsVideoCapture;
- (void)capturePhoto;
- (void)_capturePhotoFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_didCapturePhoto;
- (void)_willCapturePhoto;
- (long long)_imageOrientationFromExifOrientation:(long long)arg1;
- (id)_thumbnailJPEGData:(id)arg1;
- (id)_uiimageFromJPEGData:(id)arg1;
@property(readonly, nonatomic) _Bool canCapturePhoto;
- (void)focusExposeAndAdjustWhiteBalanceAtAdjustedPoint:(struct CGPoint)arg1;
- (void)_adjustFocusExposureAndWhiteBalance;
- (_Bool)isAdjustingExposure;
- (void)exposeAtAdjustedPointOfInterest:(struct CGPoint)arg1;
- (_Bool)isAdjustingFocus;
- (void)focusAtAdjustedPointOfInterest:(struct CGPoint)arg1;
- (void)_whiteBalanceChangeEnded;
- (void)_whiteBalanceChangeStarted;
- (void)_exposureChangeEnded;
- (void)_exposureChangeStarted;
- (void)_focusEnded;
- (void)_focusStarted;
- (void)unfreezePreview;
- (void)freezePreview;
- (void)stopPreview;
- (void)startPreview;
- (void)_setupSession;
- (_Bool)_canSessionCaptureWithOutput:(id)arg1;
- (void)_destroyCamera;
- (void)_setupCamera;
- (void)_commitBlock:(CDUnknownBlockType)arg1;
- (void)_executeBlockOnMainQueue:(CDUnknownBlockType)arg1;
- (void)_enqueueBlockOnMainQueue:(CDUnknownBlockType)arg1;
- (void)_enqueueBlockOnCaptureVideoQueue:(CDUnknownBlockType)arg1;
- (void)_enqueueBlockOnCaptureSessionQueue:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)supportsVideoFrameRate:(long long)arg1;
@property(nonatomic) long long videoFrameRate;
@property(readonly, nonatomic, getter=isFlashAvailable) _Bool flashAvailable;
- (void)_setCurrentDevice:(id)arg1;
@property(readonly, nonatomic, getter=isExposureLockSupported) _Bool exposureLockSupported;
@property(readonly, nonatomic, getter=isFocusLockSupported) _Bool focusLockSupported;
- (_Bool)isFocusPointOfInterestSupported;
- (_Bool)isCameraDeviceAvailable:(long long)arg1;
- (void)_setCameraMode:(long long)arg1 cameraDevice:(long long)arg2 outputFormat:(long long)arg3;
- (void)_setOrientationForConnection:(id)arg1;
@property(readonly, nonatomic) double capturedVideoSeconds;
@property(readonly, nonatomic) double capturedAudioSeconds;
@property(nonatomic) _Bool defaultVideoThumbnails;
@property(nonatomic) _Bool thumbnailEnabled;
@property(nonatomic, getter=isAudioCaptureEnabled) _Bool audioCaptureEnabled;
@property(nonatomic, getter=isVideoRenderingEnabled) _Bool videoRenderingEnabled;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
@property(readonly, nonatomic, getter=isCaptureSessionActive) _Bool captureSessionActive;
- (_Bool)isVideoWritten;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

