//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAUserLocationView.h"

@class CALayer, UIColor;

@interface MAUserLocationView7 : MAUserLocationView
{
    CALayer *_innerCircleLayer;
    CALayer *_innerBaseLayer;
    UIColor *_baseColor;
    UIColor *_innerColor;
    float _innerDiameter;
    _Bool _allowInnerPulse;
}

@property(nonatomic) _Bool allowInnerPulse; // @synthesize allowInnerPulse=_allowInnerPulse;
- (void).cxx_destruct;
- (id)getInnerAnimationWithDuration:(float)arg1;
- (void)initLayers;
- (void)initAttributes;
- (void)updateRepresentation:(id)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

