//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSArray<FMBannerDO>, NSArray<FMHomeCategoryDO>, NSArray<FMHomeTemplateDO>, NSArray<FMHomeThemeDO>, NSString;

@interface FMHomeMixDO : NSObject
{
    _Bool _showTime;
    NSArray<FMHomeThemeDO> *_themeInfoList;
    NSArray<FMBannerDO> *_bannerInfoList;
    NSArray<FMBannerDO> *_bannerInfos;
    NSArray<FMHomeCategoryDO> *_hotInfos;
    NSArray<FMHomeTemplateDO> *_mixInfos;
    NSArray *_poplayerInfos;
    NSString *_gifUrl;
}

@property(nonatomic) _Bool showTime; // @synthesize showTime=_showTime;
@property(copy, nonatomic) NSString *gifUrl; // @synthesize gifUrl=_gifUrl;
@property(copy, nonatomic) NSArray *poplayerInfos; // @synthesize poplayerInfos=_poplayerInfos;
@property(copy, nonatomic) NSArray<FMHomeTemplateDO> *mixInfos; // @synthesize mixInfos=_mixInfos;
@property(copy, nonatomic) NSArray<FMHomeCategoryDO> *hotInfos; // @synthesize hotInfos=_hotInfos;
@property(copy, nonatomic) NSArray<FMBannerDO> *bannerInfos; // @synthesize bannerInfos=_bannerInfos;
@property(copy, nonatomic) NSArray<FMBannerDO> *bannerInfoList; // @synthesize bannerInfoList=_bannerInfoList;
@property(copy, nonatomic) NSArray<FMHomeThemeDO> *themeInfoList; // @synthesize themeInfoList=_themeInfoList;
- (void).cxx_destruct;

@end

