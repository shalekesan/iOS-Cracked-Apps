//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WPCinemaFilterViewController;

@protocol WPCinemaFilterViewControllerDelegate <NSObject>

@optional
- (void)wpCinemaFilterViewController:(WPCinemaFilterViewController *)arg1 didDismissAnimated:(_Bool)arg2;
- (void)wpCinemaFilterViewController:(WPCinemaFilterViewController *)arg1 didSelectSubTypeKey:(NSString *)arg2 areaId:(NSString *)arg3 brand:(NSString *)arg4 feature:(NSString *)arg5 serve:(NSString *)arg6;
@end

