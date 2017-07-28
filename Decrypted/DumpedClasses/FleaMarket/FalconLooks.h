//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, MaterialManager, NSCondition, NSLock, NSObject<OS_dispatch_queue>, NSString, UIImage;

@interface FalconLooks : NSObject
{
    long long height;
    long long width;
    struct __CVOpenGLESTextureCache *coreVideoTextureCache;
    unsigned int position;
    unsigned int inputTextureCoordinate;
    unsigned int singleStepOffset;
    unsigned int params;
    unsigned int gauWeight;
    unsigned int beautyLevel;
    int inputImageTexture;
    unsigned int program;
    unsigned int vertShader;
    unsigned int fragShader;
    unsigned int rotateFramebuffer;
    unsigned int rotateFramebufferS;
    unsigned int rotateFramebufferT;
    unsigned int rotateTexture;
    unsigned int rotateTextureS;
    unsigned int rotateTextureT;
    unsigned int positionRotate;
    unsigned int inputTextureCoordinateRotate;
    unsigned int orthographicMatrix;
    unsigned int modelviewRotateTrans;
    unsigned int modelviewScale;
    int inputImageTextureRotate;
    unsigned int programRotate;
    unsigned int vertShaderRotate;
    unsigned int fragShaderRotate;
    unsigned int lookupr;
    unsigned int lookupg;
    unsigned int lookupb;
    unsigned int cameraprogram;
    unsigned int cameravertShader;
    unsigned int camerafragShader;
    unsigned int cameraposition;
    unsigned int camerainputTextureCoordinate;
    int camerainputImageTexture;
    unsigned int materialFramebuffer;
    unsigned int _fboMaterialTexture;
    unsigned int materialprogram;
    unsigned int materialvertShader;
    unsigned int materialfragShader;
    unsigned int materialposition;
    unsigned int materialinputTextureCoordinate;
    unsigned int materialTextureCoordinate2;
    unsigned int materialTextureCoordinate3;
    unsigned int materialTextureCoordinate4;
    int materialinputImageTexture;
    int materialImageTextureF;
    int materialImageTextureS;
    int materialImageTextureT;
    unsigned int materialTexture;
    unsigned int movieFramebuffer;
    _Bool isInit;
    _Bool isInitOri;
    _Bool isInitFilter;
    _Bool isInitMaterial;
    _Bool isInitRotate;
    _Bool isInitRotateS;
    _Bool isInitRotateT;
    _Bool isCreateBeautyFBO;
    _Bool isCreateMaterialBuffer;
    _Bool isGenerateMaterialTexture;
    unsigned int _fboTexture;
    float beaytupara[4];
    float beautyL;
    unsigned int filterFramebuffer;
    unsigned int _fbofilterTexture;
    unsigned int filterprogram;
    unsigned int filtervertShader;
    unsigned int filterfragShader;
    unsigned int filterposition;
    unsigned int filterinputTextureCoordinate;
    unsigned int filterTextureCoordinate;
    int filterinputImageTexture;
    int filterMaterialinputImageTexture2;
    int filterMaterialinputImageTexture3;
    unsigned int filtermaterialTexture2;
    unsigned int filtermaterialTexture3;
    long long falconFilterType;
    float desTextureCoordinates[8];
    EAGLContext *_context;
    struct CGSize desTextureSize;
    struct CGSize srcTextureSize;
    struct CGSize srcTextureSize_old;
    MaterialManager *mmanager;
    NSLock *lock;
    NSLock *lockstring;
    float offsetVecf[3][2];
    float scaleVecf[3][2];
    char *imageDataCache;
    _Bool isCaptureImage;
    UIImage *CaptureImage;
    NSObject<OS_dispatch_queue> *_oprationQueue;
    NSCondition *taskPenddingCondition;
    unsigned int emptyTexture;
    unsigned int facematerialTexture[20];
    _Bool isDeleteOpenGLMemory;
    struct _opaque_pthread_mutex_t _openGLLock;
    _Bool renderEnabled;
    _Bool _enableSkinFilter;
    _Bool _enableStyleFilter;
    _Bool _isHighDegree;
    _Bool _isFalconMirror;
    _Bool _isCaptureStillImage;
    id <FalconLooksFrameRenderDelegate> _delegate;
    NSString *_materialpath;
    long long _filtertype;
    long long _VideoOrientation;
}

+ (struct CGContext *)newBitmapRGBA8ContextFromImageLooks:(struct CGImage *)arg1;
+ (char *)convertUIImageToBitmapRGBA8Looks:(id)arg1;
+ (id)convertBitmapRGBA8ToUIImageLooks:(char *)arg1 withWidth:(int)arg2 withHeight:(int)arg3 isMirror:(_Bool)arg4;
+ (void)initImageProcessingContext;
+ (struct __CVOpenGLESTextureCache *)sharedTextureCache;
+ (id)sharedImageProcessingContext;
@property(nonatomic) long long VideoOrientation; // @synthesize VideoOrientation=_VideoOrientation;
@property(nonatomic) long long filtertype; // @synthesize filtertype=_filtertype;
@property(retain, nonatomic) NSString *materialpath; // @synthesize materialpath=_materialpath;
@property(nonatomic) _Bool isCaptureStillImage; // @synthesize isCaptureStillImage=_isCaptureStillImage;
@property(nonatomic) _Bool isFalconMirror; // @synthesize isFalconMirror=_isFalconMirror;
@property(nonatomic) _Bool isHighDegree; // @synthesize isHighDegree=_isHighDegree;
@property(nonatomic) _Bool enableStyleFilter; // @synthesize enableStyleFilter=_enableStyleFilter;
@property(nonatomic) _Bool enableSkinFilter; // @synthesize enableSkinFilter=_enableSkinFilter;
@property(nonatomic) __weak id <FalconLooksFrameRenderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 string:(id)arg3;
- (void)setupGLLow:(id)arg1;
- (void)setupGL:(id)arg1;
- (void)setupGLOri:(id)arg1;
- (void)setupGLFilter:(id)arg1 filtertype:(long long)arg2;
- (void)createFBO3;
- (void)createFBO2;
- (void)createFBO;
- (void)rendersourceTextureMaterial:(unsigned int)arg1;
- (void)rendersourceTextureMaterialWithCut:(unsigned int)arg1;
- (void)rendersourceTextureStyle:(unsigned int)arg1 filtertype:(long long)arg2;
- (void)setupGLMaterial:(id)arg1;
- (void)rendersourceTexture:(unsigned int)arg1;
- (void)rendersourceTexturewithcordinate:(unsigned int)arg1 matirialVertices:(float *)arg2;
- (void)rendersourceTextureRotate:(unsigned int)arg1 index:(long long)arg2;
- (void)rendersourceTextureRotateT:(unsigned int)arg1 index:(long long)arg2;
- (void)rendersourceTextureRotateS:(unsigned int)arg1 index:(long long)arg2;
- (void)setupGLRotate:(id)arg1;
- (void)createFBORotateT;
- (void)createFBORotateS;
- (void)createFBORotate;
- (void)rendersourceTextureLow:(unsigned int)arg1;
- (void)rendersourceTextureLowWithcordinate:(unsigned int)arg1 matirialVertices:(float *)arg2;
- (void)rendersourceTextureOri:(unsigned int)arg1;
- (void)rendersourceTextureOriWithcordinate:(unsigned int)arg1 matirialVertices:(float *)arg2;
- (void)changeFilterValue:(double)arg1;
- (void)processTexture:(unsigned int)arg1 size:(struct CGSize)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)setEAGLContext:(id)arg1;
- (id)context;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (id)getImgFromSmplebuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 size:(struct CGSize)arg2 block:(CDUnknownBlockType)arg3;
- (id)ProcessData:(char *)arg1 imgwidth:(long long)arg2 imgheight:(long long)arg3;
- (void)calStillImageFacePT:(long long)arg1 imgheight:(long long)arg2;
- (void)freeAllFrameBufferAndTexture:(long long)arg1 imgheight:(long long)arg2;
- (id)ImgResizeWHFalcon:(id)arg1 FrameW:(int)arg2 FrameH:(int)arg3 ResizeType:(int)arg4;
- (id)scaleImgFalcon:(id)arg1 toScale:(float)arg2;
- (id)scaleImgpreciseFalcon:(id)arg1 towidth:(long long)arg2 toheight:(long long)arg3;
- (void)DeleteOpenGLMemory;
- (void)processSkinImage:(id)arg1 value:(double)arg2 block:(CDUnknownBlockType)arg3;
- (id)scaleAndRotateImageLooks:(id)arg1 andMax:(long long)arg2;
- (struct CGSize)sizeThatFitsWithinATextureForSize:(struct CGSize)arg1;
- (int)maximumTextureSizeForThisDevice;
- (void)createEmptyTexture:(long long)arg1 mheight:(long long)arg2;
- (void)createEmptyMaterialTexture;
- (void)getGLErrorInfo:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)tryLock;
- (void)unlock;
- (void)lock;
- (void)disableRender;
- (void)enableRender;
- (id)initWithSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (struct CGRect)GetImgRectForHead:(id)arg1 FrameW:(long long)arg2 FrameH:(long long)arg3;
- (id)getImgFeaturePoint:(id)arg1;
- (id)init;
- (id)initForIntelligentCut;
- (void)loadfilterMaterilaTexture:(long long)arg1;
- (void)bind_FilterMaterial3_To_Texture3:(id)arg1;
- (void)bind_FilterMaterial2_To_Texture0:(id)arg1;

@end

