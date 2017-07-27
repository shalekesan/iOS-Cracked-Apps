//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NVMThemeConfigDataManager : NSObject
{
}

+ (id)themeConfigImagePathForImageHash:(id)arg1 index:(unsigned long long)arg2 object:(id)arg3 shouldEnsureIntermediateFolderExists:(_Bool)arg4;
+ (id)themeConfigImageForImageHash:(id)arg1 index:(unsigned long long)arg2 object:(id)arg3;
+ (_Bool)themeConfigImageExistsForImageHash:(id)arg1 index:(unsigned long long)arg2 object:(id)arg3;
+ (void)saveThemeConfigImage:(id)arg1 forImageHash:(id)arg2 index:(unsigned long long)arg3 object:(id)arg4;
+ (id)themeConfigFolderPathWithEnsureFolderExistsOption:(_Bool)arg1;
+ (void)removeCurrentConfigData;
+ (id)currentThemeConfigDict;
+ (void)saveThemeConfigDict:(id)arg1;

@end
