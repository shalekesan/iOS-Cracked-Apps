//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBHorizontalCarouselViewController, UIViewController;
@protocol FBContentController;

@protocol FBHorizontalCarouselViewControllerDelegate <NSObject>
- (_Bool)carouselViewControllerCanBeginDismissal:(FBHorizontalCarouselViewController *)arg1;
- (void)carouselViewControllerDidFinishPanningCarousel:(FBHorizontalCarouselViewController *)arg1;
- (void)carouselViewControllerDidBeginPanningCarousel:(FBHorizontalCarouselViewController *)arg1;
- (void)carouselViewController:(FBHorizontalCarouselViewController *)arg1 didGiveActiveFocusToContentController:(UIViewController<FBContentController> *)arg2;
@end
