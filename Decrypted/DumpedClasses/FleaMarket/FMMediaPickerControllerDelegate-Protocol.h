//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMMediaDataObject, FMMediaPickerController, NSArray;

@protocol FMMediaPickerControllerDelegate <NSObject>
- (void)mediaPickControllerDidCancel:(FMMediaPickerController *)arg1;
- (void)mediaPickController:(FMMediaPickerController *)arg1 didFinishPickingImages:(NSArray *)arg2;
- (void)mediaPickController:(FMMediaPickerController *)arg1 didFinishPickingMediaWithInfo:(FMMediaDataObject *)arg2;
- (void)mediaPickController:(FMMediaPickerController *)arg1 setPageScrollEnabled:(_Bool)arg2;
@end

