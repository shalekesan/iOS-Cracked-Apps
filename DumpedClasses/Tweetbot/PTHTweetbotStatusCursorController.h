//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTHTweetbotCursorController.h"

@class UISegmentedControl, UIView;

@interface PTHTweetbotStatusCursorController : PTHTweetbotCursorController
{
    UIView *_accessoryView;
    UISegmentedControl *_segmentedControl;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)shouldShowItem:(id)arg1;
- (_Bool)shouldShowHeaderContainer;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)hideSeparator:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateMediaTimeline;
- (void)viewDidLayoutSubviews;
- (_Bool)needsCustomSeparators;
- (void)loadView;
- (id)nothingFoundTitle;
- (id)itemsTitle;
- (id)itemTitle;
- (Class)cellClass;
- (void)_didRetweet:(id)arg1;
- (id)initWithTweetbotCursor:(id)arg1;

@end
