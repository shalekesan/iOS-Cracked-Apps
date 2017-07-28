//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, WXThreadSafeMutableArray;

@interface WXRootViewController : UINavigationController <UIGestureRecognizerDelegate>
{
    _Bool _operationInProcess;
    WXThreadSafeMutableArray *_operationArray;
}

@property(nonatomic) _Bool operationInProcess; // @synthesize operationInProcess=_operationInProcess;
@property(retain, nonatomic) WXThreadSafeMutableArray *operationArray; // @synthesize operationArray=_operationArray;
- (void).cxx_destruct;
- (id)pendingBlocks;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)addOperationBlock:(CDUnknownBlockType)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (id)initWithSourceURL:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

