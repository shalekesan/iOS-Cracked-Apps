//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBCDNImageURLParser : NSObject
{
}

+ (_Bool)hasNotSupportCdnRule:(id)arg1;
+ (long long)getSharpValue:(long long)arg1 config:(id)arg2;
+ (long long)getQualityValue:(long long)arg1 config:(id)arg2;
+ (_Bool)useWebp:(id)arg1 switchCenterWebp:(_Bool)arg2 config:(id)arg3;
+ (_Bool)isCompressGif:(id)arg1 config:(id)arg2;
+ (struct CGSize)adaptImageSizeWithImageSize:(struct CGSize)arg1 andCutType:(long long)arg2;
+ (long long)adaptHeightOf10000WidthWithImageHeight:(long long)arg1;
+ (long long)adaptWidthOf10000HeightWithImageWidth:(long long)arg1;
+ (double)scaleSideLengthForOriginalLength:(double)arg1;
+ (struct CGSize)adjustImageSize:(struct CGSize)arg1 viewSize:(struct CGSize)arg2 andCutType:(long long)arg3;
+ (struct CGSize)adjustImageSize:(struct CGSize)arg1 andCutType:(long long)arg2;
+ (struct CGSize)imageSizeFromContainerSize:(struct CGSize)arg1 andCutType:(long long)arg2;
+ (struct CGSize)imageSizeFromParamSize:(struct CGSize)arg1 andCutType:(long long)arg2;
+ (id)analysisUrlInfo:(id)arg1;
+ (id)imageBaseUrlStringFromURLString:(id)arg1;
+ (id)imageBaseUrlStringFromURL:(id)arg1;
+ (struct CGSize)imageSizeFromURLString:(id)arg1;
+ (struct CGSize)imageSizeFromURL:(id)arg1;
+ (_Bool)isAliCDN:(id)arg1;
+ (id)domainSwicthForURL:(id)arg1;
+ (id)domainSwitchForURL:(id)arg1;
+ (id)parseImageURLForWebViewURL:(id)arg1;
+ (id)parseImageURLForCDNURL:(id)arg1 module:(id)arg2 imageSize:(struct CGSize)arg3 viewSize:(struct CGSize)arg4 cutType:(long long)arg5 config:(id)arg6;
+ (id)parseImageURLForCDNURL:(id)arg1 module:(id)arg2 imageSize:(struct CGSize)arg3 viewSize:(struct CGSize)arg4 cutType:(long long)arg5;

@end

