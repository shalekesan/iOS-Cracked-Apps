//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVGLFilterMgr, EAGLContext, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface FMImageProcMgr : NSObject
{
    unsigned int _vertexShaderHandle;
    unsigned int _fragmentShaderHandle;
    unsigned int _programHandle;
    unsigned int _indexBuffer;
    unsigned int _vetexBuffer;
    EAGLContext *_context;
    unsigned int *_textureUniforms;
    unsigned int _positionAttributeLocation;
    unsigned int _texCoordAttributeLocation;
    unsigned int _rotateZMatrixUniform;
    unsigned int _displayTypeUiform;
    unsigned int _frameBuffer;
    unsigned int _renderBuffer;
    unsigned int _rotateTexture;
    unsigned int _decorateTexture;
    unsigned int _luminanceTexture;
    unsigned int _chromaTexture;
    struct CGSize _preset;
    struct __CVOpenGLESTextureCache *_coreVideoTextureCache;
    struct __CVBuffer *_offscreenRenderTarget;
    struct __CVBuffer *_offscreenRenderTexture;
    char *_imageBuf;
    char *_yuvBuf;
    int _imageWidth;
    int _imageHeight;
    float _yRotateMatrix[16];
    NSObject<OS_dispatch_queue> *_glRenderQueue;
    AVGLFilterMgr *_filterMgr;
    int _curFilter;
    int _beautyEnable;
    double _beautyLevel;
    NSMutableArray *_filterUser;
    _Bool _filterStarted;
    int _duprecatedFrameCount;
}

+ (id)shareInstance;
@property(nonatomic) struct CGSize preset; // @synthesize preset=_preset;
- (void).cxx_destruct;
- (id)localDefaultConfig;
- (void)addFilter:(id)arg1;
- (id)getFilterlist;
- (void)setBeautyEnable:(_Bool)arg1;
- (void)setBeautyLevel:(double)arg1;
- (void)setFilter:(int)arg1;
- (void)dealloc;
- (void)compileShaders;
- (unsigned int)compileShaderString:(id)arg1 withType:(unsigned int)arg2;
- (void)setupContext;
- (void)setupTexture;
- (void)setupIndices;
- (void)setupVBO;
- (void)setupFrameBuffer;
- (void)setupRenderBuffer;
- (void)textureYUV:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3;
- (void)textureNV12:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3;
- (void)getOffScreenImageToBuf:(char *)arg1;
- (void)uninitOffscreenRenderTarget;
- (_Bool)initOffscreenRenderTarget;
- (void)renderToTexture:(char *)arg1;
- (void)laterProcessInputTex:(unsigned int)arg1 ToTexRef:(unsigned int)arg2 withOutPutType:(int)arg3 toRenderBuffer:(_Bool)arg4 needMirror:(_Bool)arg5;
- (void)I420ToNV12:(char *)arg1 dst:(char *)arg2 wid:(int)arg3 hei:(int)arg4;
- (void)decorateBuffer:(char *)arg1 toBuf:(char *)arg2;
- (void)decorateBuffer:(char *)arg1 toRGBBuf:(char *)arg2;
- (void)decorateTexture:(unsigned int)arg1 toTexture:(unsigned int *)arg2;
- (void)decorateImage:(struct CGImage *)arg1 toBuf:(char *)arg2 withFilter:(long long)arg3 andBeauty:(_Bool)arg4 andMirror:(_Bool)arg5;
- (void)useCurrentContext;
- (void)applyRotationWithDegree:(float)arg1;
- (void)destroyOpenGL;
- (void)initOpenGL;
- (void)stopFilterProc:(id)arg1;
- (void)startFilterProc:(id)arg1;
- (id)init;

@end

