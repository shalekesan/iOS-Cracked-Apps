//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBVideoPlayerMonitor : NSObject
{
}

+ (void)commitPlayKeyStatisticsWithTBMediaInfo:(id)arg1 StatisticsInfo:(id)arg2;
+ (void)commitSmoothSwitchStatisticsWithTBMediaBaseInfo:(id)arg1 SmoothSwitchStatisticsInfo:(id)arg2;
+ (void)commitFluentStatisticsWithTBFluentBaseInfo:(id)arg1 FluentStatisticsInfo:(id)arg2;
+ (void)commitImpairmentStatisticsWithTBMediaBaseInfo:(id)arg1 ImpairmentStatisticsInfo:(id)arg2;
+ (void)commitPlayErrInfoStatisticsWithTBVideoPlayErrInfo:(id)arg1 isPlaying:(_Bool)arg2;
+ (void)commitPlayErrInfoStatisticsWithTBVideoPlayErrInfo:(id)arg1 isPlaying:(_Bool)arg2 TBVideoPlayErrStatisticsInfo:(id)arg3;
+ (void)commitRequestErrInfoStatisticsWithTBRequestErrInfo:(id)arg1;
+ (void)commitRequestErrInfoStatisticsWithTBRequestErrInfo:(id)arg1 TBRequestErrStatisticsInfo:(id)arg2;
+ (void)commitVideoVIPErrInfoStatisticsWithTBVideoVIPErrInfo:(id)arg1;
+ (void)commitVideoVIPErrInfoStatisticsWithTBVideoVIPErrInfo:(id)arg1 TBVideoVIPErrStatisticsInfo:(id)arg2;
+ (void)commitVideoAdPlayErrInfoStatisticsWithTBAdPlayErrInfo:(id)arg1 TBAdPlayErrStatisticsInfo:(id)arg2;

@end

