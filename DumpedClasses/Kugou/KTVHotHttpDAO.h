//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVBaseNetHelper.h"

@interface KTVHotHttpDAO : KTVBaseNetHelper
{
}

- (void)callBackGetAutoRecommendSongListSuccess:(id)arg1;
- (void)AsyncGetAutoRecommendDeviceId:(id)arg1 delegate:(id)arg2 onSuccess:(SEL)arg3 onFailure:(SEL)arg4;
- (void)callBackAddThemeSongRecordPlaySuccess:(id)arg1;
- (void)AsyncRequestThemeSongRecordWithSongId:(int)arg1 themeType:(int)arg2 delegate:(id)arg3 onSuccess:(SEL)arg4 onFailure:(SEL)arg5;
- (void)callBackFailed:(id)arg1;
- (void)callHotSingerBackFailed:(id)arg1;
- (void)callThemeBackFailed:(id)arg1;
- (void)callBackAddRecordPlaySuccess:(id)arg1;
- (void)AsyncRequestAddRecordWithSongId:(long long)arg1 singer:(int)arg2 delegate:(id)arg3 onSuccess:(SEL)arg4 onFailure:(SEL)arg5;
- (void)callBackGetTopicSongListSuccess:(id)arg1;
- (void)AsyncGetTopicSongListWithTagId:(long long)arg1 page:(int)arg2 size:(int)arg3 delegate:(id)arg4 onSuccess:(SEL)arg5 onFailure:(SEL)arg6;
- (void)AsyncGetTopicSongListWithType:(int)arg1 page:(int)arg2 size:(int)arg3 delegate:(id)arg4 onSuccess:(SEL)arg5 onFailure:(SEL)arg6;
- (void)AsyncGetTagBannerInfoWithTagId:(long long)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (void)AsyncGetThemeInfoWithThemeType:(long long)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (void)callBackGetTopicListSuccess:(id)arg1;
- (void)AsyncGetTopicList:(id)arg1 onSuccess:(SEL)arg2 onFailure:(SEL)arg3;
- (void)callBackGetHotSingerListSuccess:(id)arg1;
- (void)AsyncGetHotSingerList:(int)arg1 delegate:(id)arg2 onSuccess:(SEL)arg3 onFailure:(SEL)arg4;
- (void)AsyncGetHotTopSong:(id)arg1 onSuccess:(SEL)arg2 onFailure:(SEL)arg3;
- (void)AsyncGetHotSongList:(id)arg1 pageSize:(long long)arg2 onSuccess:(SEL)arg3 onFailure:(SEL)arg4;
- (void)AsyncGetHistoryTopicListSize:(int)arg1 page:(int)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)AsyncGetRegionHotSingerList:(int)arg1 region:(int)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)AsyncGetChinaSingerList:(int)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)AsyncGetHotSingerList:(int)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)AsyncGetAllSingerList:(int)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;

@end
