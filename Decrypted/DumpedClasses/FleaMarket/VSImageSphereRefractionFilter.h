//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilter.h"

@interface VSImageSphereRefractionFilter : VSImageFilter
{
    int radiusUniform;
    int centerUniform;
    int aspectRatioUniform;
    int refractiveIndexUniform;
    double _radius;
    double _aspectRatio;
    double _refractiveIndex;
    struct CGPoint _center;
}

@property(nonatomic) double refractiveIndex; // @synthesize refractiveIndex=_refractiveIndex;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)adjustAspectRatio;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)init;

@end

