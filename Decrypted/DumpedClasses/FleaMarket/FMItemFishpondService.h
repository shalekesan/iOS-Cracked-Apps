//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseService.h"

@interface FMItemFishpondService : FMBaseService
{
}

+ (void)recommendItem:(id)arg1 fishpoolId:(id)arg2 themeId:(id)arg3 result:(CDUnknownBlockType)arg4;
+ (void)recommendQuery:(id)arg1 fishpondId:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)shieldItem:(id)arg1 fishpondId:(id)arg2 reason:(id)arg3 result:(CDUnknownBlockType)arg4;
+ (void)cancelStickItem:(id)arg1 fishpondId:(id)arg2 fishpoolTopicId:(id)arg3 result:(CDUnknownBlockType)arg4;
+ (void)stickItem:(id)arg1 fishpondId:(id)arg2 fishpoolTopicId:(id)arg3 result:(CDUnknownBlockType)arg4;
+ (void)cancelSelectItem:(id)arg1 fishpondId:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)selectItem:(id)arg1 fishpondId:(id)arg2 result:(CDUnknownBlockType)arg3;

@end

