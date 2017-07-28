//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMPostImagesView.h"

#import "FMMediaPreviewControllerDelegate.h"
#import "FMMultiMediaSelectorViewControllerDelegate.h"
#import "FMPostImagesItemViewDelegate.h"
#import "FMPostVideoViewDelegate.h"

@class NSString;

@interface FMEssayMultiMediaView : FMPostImagesView <FMPostVideoViewDelegate, FMMediaPreviewControllerDelegate, FMPostImagesItemViewDelegate, FMMultiMediaSelectorViewControllerDelegate>
{
}

- (void)selectorViewController:(id)arg1 didFinishWithImageList:(id)arg2;
- (void)selectorViewController:(id)arg1 didFinishWithMediaInfo:(id)arg2;
- (void)onPreviewImageView:(id)arg1;
- (void)mediaPreviewController:(id)arg1 didDeleteImage:(long long)arg2;
- (void)mediaPreviewController:(id)arg1 didSetMainImage:(long long)arg2;
- (void)mediaPreviewControllerDidCancel:(id)arg1;
- (void)mediaPreviewController:(id)arg1 didFinishEditingWithMediaInfo:(id)arg2;
- (void)mediaPreviewController:(id)arg1 didFinishEditingImages:(id)arg2;
- (void)onPreviewVideo:(id)arg1;
- (void)onPostVideoDeleted:(id)arg1;
- (void)bindComponent:(id)arg1;
- (void)relayoutSubviewForStyle:(long long)arg1;
- (void)handleAddButtonClicked:(id)arg1;
- (void)setupPostVideoView;
- (void)setupPostImageButton;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

