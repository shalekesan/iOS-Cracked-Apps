//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBScanPlugin.h"

@class FMHouseScanInfoItemDO, UIImage;

@interface FMScanBitmapPlugin : TBScanPlugin
{
    struct CldDescriptor descriptorTarget;
    _Bool _isFind;
    _Bool _isScan;
    UIImage *_targetImg;
    UIImage *_screenshotImg;
    double _pictrueSimilar;
    FMHouseScanInfoItemDO *_itemDO;
}

@property(retain, nonatomic) FMHouseScanInfoItemDO *itemDO; // @synthesize itemDO=_itemDO;
@property(nonatomic) double pictrueSimilar; // @synthesize pictrueSimilar=_pictrueSimilar;
@property(nonatomic) _Bool isScan; // @synthesize isScan=_isScan;
@property(nonatomic) _Bool isFind; // @synthesize isFind=_isFind;
@property(retain, nonatomic) UIImage *screenshotImg; // @synthesize screenshotImg=_screenshotImg;
@property(retain, nonatomic) UIImage *targetImg; // @synthesize targetImg=_targetImg;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)compressImage:(id)arg1;
- (double)compareImage:(id)arg1;
- (struct CGContext *)newBitmapRGBA8ContextFromImage:(struct CGImage *)arg1;
- (id)imageFromSamplePlanerPixelBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveScreenShot;
- (void)onProcess:(id)arg1;

@end

