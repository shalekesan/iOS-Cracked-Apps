//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageGaussianBlurFilter.h"

@interface VSImageBilateralFilter : VSImageGaussianBlurFilter
{
    double firstDistanceNormalizationFactorUniform;
    double secondDistanceNormalizationFactorUniform;
    double _distanceNormalizationFactor;
}

@property(nonatomic) double distanceNormalizationFactor; // @synthesize distanceNormalizationFactor=_distanceNormalizationFactor;
- (id)init;

@end

