//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMAssetItem, NMAssetPageViewController;

@protocol NMAssetPageViewControllerDelegate <NSObject>
- (void)pageViewControllerDoneButtonClicked:(NMAssetPageViewController *)arg1;
- (void)pageViewController:(NMAssetPageViewController *)arg1 didSelectAssetItem:(NMAssetItem *)arg2;
@end
