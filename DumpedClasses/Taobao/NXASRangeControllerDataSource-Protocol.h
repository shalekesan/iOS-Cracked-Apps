//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath, NSString, NXASRangeController, NXNode;

@protocol NXASRangeControllerDataSource <NSObject>
- (NSString *)nameForRangeControllerDataSource;
- (NSArray *)completedNodes;
- (NXNode *)rangeController:(NXASRangeController *)arg1 nodeAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)interfaceStateForRangeController:(NXASRangeController *)arg1;
- (struct CGSize)viewportSizeForRangeController:(NXASRangeController *)arg1;
- (long long)scrollDirectionForRangeController:(NXASRangeController *)arg1;
- (NSArray *)visibleNodeIndexPathsForRangeController:(NXASRangeController *)arg1;
@end
