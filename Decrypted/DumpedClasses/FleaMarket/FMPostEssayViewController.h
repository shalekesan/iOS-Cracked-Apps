//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBasePostViewController.h"

#import "FMPostEssayComponentDelegate.h"

@class NSString;

@interface FMPostEssayViewController : FMBasePostViewController <FMPostEssayComponentDelegate>
{
}

- (void)onEditEssaySuccess:(id)arg1;
- (void)onPostEssaySuccess:(id)arg1;
- (void)showSuccessTipView:(id)arg1;
- (void)leftAction:(id)arg1;
- (void)loadView;
- (id)initWithURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

