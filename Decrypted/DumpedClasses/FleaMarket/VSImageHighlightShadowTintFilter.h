//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilter.h"

@interface VSImageHighlightShadowTintFilter : VSImageFilter
{
    int shadowTintIntensityUniform;
    int highlightTintIntensityUniform;
    int shadowTintColorUniform;
    int highlightTintColorUniform;
    float _shadowTintIntensity;
    float _highlightTintIntensity;
    struct VSVector4 _shadowTintColor;
    struct VSVector4 _highlightTintColor;
}

@property(nonatomic) struct VSVector4 highlightTintColor; // @synthesize highlightTintColor=_highlightTintColor;
@property(nonatomic) struct VSVector4 shadowTintColor; // @synthesize shadowTintColor=_shadowTintColor;
@property(nonatomic) float highlightTintIntensity; // @synthesize highlightTintIntensity=_highlightTintIntensity;
@property(nonatomic) float shadowTintIntensity; // @synthesize shadowTintIntensity=_shadowTintIntensity;
- (void)setHighlightTintColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setShadowTintColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)init;

@end

