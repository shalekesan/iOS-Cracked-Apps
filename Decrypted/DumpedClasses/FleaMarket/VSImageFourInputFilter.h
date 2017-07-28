//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageThreeInputFilter.h"

@class VSImageFramebuffer;

@interface VSImageFourInputFilter : VSImageThreeInputFilter
{
    VSImageFramebuffer *fourthInputFramebuffer;
    int filterFourthTextureCoordinateAttribute;
    int filterInputTextureUniform4;
    unsigned long long inputRotation4;
    unsigned int filterSourceTexture4;
    CDStruct_1b6d18a9 fourthFrameTime;
    _Bool hasSetThirdTexture;
    _Bool hasReceivedFourthFrame;
    _Bool fourthFrameWasVideo;
    _Bool fourthFrameCheckDisabled;
}

- (void).cxx_destruct;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (struct CGSize)rotatedSize:(struct CGSize)arg1 forIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)disableFourthFrameCheck;
- (void)initializeAttributes;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;

@end

