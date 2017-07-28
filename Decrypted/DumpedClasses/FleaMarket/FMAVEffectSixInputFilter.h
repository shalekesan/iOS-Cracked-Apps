//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMAVEffectFiveInputFilter.h"

@class FMAVEffectFramebuffer;

@interface FMAVEffectSixInputFilter : FMAVEffectFiveInputFilter
{
    FMAVEffectFramebuffer *sixthInputFramebuffer;
    int filterSixthTextureCoordinateAttribute;
    int filterInputTextureUniform6;
    unsigned long long inputRotation6;
    _Bool hasSetFifthTexture;
    _Bool hasReceivedSixthFrame;
}

- (void)dealloc;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (struct CGSize)rotatedSize:(struct CGSize)arg1 forIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)initializeAttributes;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;

@end

