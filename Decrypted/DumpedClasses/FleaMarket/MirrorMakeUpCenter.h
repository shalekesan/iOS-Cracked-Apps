//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRecursiveLock;

@interface MirrorMakeUpCenter : NSObject
{
    _Bool _initialized;
    NSRecursiveLock *_dataLock;
    struct CGSize _bufferSize;
    struct CCosmetic3DTryonEngine *p_cosmetic_engine;
    struct {
        struct CosmeticTemplateData *_field1;
        float *_field2;
        int _field3;
        int _field4;
    } *p_cosmetic_param;
    struct {
        char *_field1;
        char *_field2;
        int _field3;
        int _field4;
        int _field5;
        int _field6;
    } *p_glass_param;
    struct {
        struct FaceBeautifyParam *_field1;
        int _field2;
        int _field3;
    } *p_cosmetic_beauty_param;
    struct {
        struct PlasticBeautiyParam *_field1;
        int _field2;
        int _field3;
    } *p_plastic_beauty_param;
    int _referenceCount;
    unsigned int uBeautyFlags;
    unsigned int uPlasticBeautyFlags;
    _Bool _useNewApis;
}

+ (id)sharedCenter;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedMirrorMakeUpCenter;
@property(nonatomic) _Bool useNewApis; // @synthesize useNewApis=_useNewApis;
@property(nonatomic) struct CGSize bufferSize; // @synthesize bufferSize=_bufferSize;
@property(readonly, nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
- (void)updateCosmeticParams;
- (char *)mirrorImage2YUVData:(id)arg1;
- (id)takePhotoWithImg:(id)arg1;
- (_Bool)setPlasticBeautyArray:(id)arg1;
- (_Bool)setFaceBeautyArray:(id)arg1;
- (_Bool)setBeautyArray:(id)arg1;
- (id)getColorList:(id)arg1;
- (_Bool)setMakeUpArray:(id)arg1;
- (int)intFromColor:(id)arg1;
- (_Bool)inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)clear;
- (void)clearGlass;
- (void)clearPlasticBeauty;
- (void)clearFaceBeauty;
- (void)clearCosmetic;
- (void)clearAllLocks;
- (void)unlock;
- (void)lock;
- (void)initializer:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (id)init;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

