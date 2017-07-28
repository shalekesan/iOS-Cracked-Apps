//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageTwoPassFilter.h"

@interface VSImageSobelEdgeDetectionFilter : VSImageTwoPassFilter
{
    int texelWidthUniform;
    int texelHeightUniform;
    int edgeStrengthUniform;
    _Bool hasOverriddenImageSizeFactor;
    double _texelWidth;
    double _texelHeight;
    double _edgeStrength;
}

@property(nonatomic) double edgeStrength; // @synthesize edgeStrength=_edgeStrength;
@property(nonatomic) double texelHeight; // @synthesize texelHeight=_texelHeight;
@property(nonatomic) double texelWidth; // @synthesize texelWidth=_texelWidth;
- (_Bool)providesMonochromeOutput;
- (_Bool)wantsMonochromeInput;
- (void)setUniformsForProgramAtIndex:(unsigned long long)arg1;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)init;

@end

