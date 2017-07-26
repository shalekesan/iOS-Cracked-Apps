//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString;

@interface TBMagicCubeScrollView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _jumpFlag;
    _Bool _isSubviewsUnload;
    id <TBMagicCubeScrollViewDataSource> _mcDataSource;
    id <TBMagicCubeScrollViewDelegate> _mcDelegate;
    NSMutableArray *_layouts;
    double _previewPointY;
    long long _currentOnTopIndex;
    long long _jumpIndex;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(nonatomic) _Bool isSubviewsUnload; // @synthesize isSubviewsUnload=_isSubviewsUnload;
@property(nonatomic) long long jumpIndex; // @synthesize jumpIndex=_jumpIndex;
@property(nonatomic) _Bool jumpFlag; // @synthesize jumpFlag=_jumpFlag;
@property(nonatomic) long long currentOnTopIndex; // @synthesize currentOnTopIndex=_currentOnTopIndex;
@property(nonatomic) double previewPointY; // @synthesize previewPointY=_previewPointY;
@property(retain, nonatomic) NSMutableArray *layouts; // @synthesize layouts=_layouts;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) __weak id <TBMagicCubeScrollViewDelegate> mcDelegate; // @synthesize mcDelegate=_mcDelegate;
@property(nonatomic) __weak id <TBMagicCubeScrollViewDataSource> mcDataSource; // @synthesize mcDataSource=_mcDataSource;
- (void).cxx_destruct;
- (void)viewUnloadSubviews;
- (void)viewReloadSubviews;
- (void)viewDidDisappearForComponent:(id)arg1 index:(long long)arg2;
- (void)viewWillDisappearForComponent:(id)arg1 index:(long long)arg2;
- (void)viewDidAppearForComponent:(id)arg1 index:(long long)arg2;
- (void)viewWillAppearForComponent:(id)arg1 withLayout:(id)arg2 index:(long long)arg3;
- (void)viewDidLoadForComponent:(id)arg1 withLayout:(id)arg2;
- (int)direction:(double)arg1;
- (void)didDisappearComponentForLayout:(id)arg1 atIndex:(long long)arg2;
- (void)willDisappearComponentForLayout:(id)arg1 atIndex:(long long)arg2;
- (void)didAppearComponnetForLayout:(id)arg1 atIndex:(long long)arg2;
- (void)willAppearComponnetForLayout:(id)arg1 atIndex:(long long)arg2;
- (void)handleDirectionNone:(id)arg1 index:(long long)arg2 currentPointY:(double)arg3 currentBottom:(double)arg4;
- (void)handleDirectionDown:(id)arg1 index:(long long)arg2 currentPointY:(double)arg3 currentBottom:(double)arg4;
- (void)handleDirectionUp:(id)arg1 index:(long long)arg2 currentPointY:(double)arg3 currentBottom:(double)arg4;
- (void)handleComponentForIndex:(long long)arg1 direction:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (_Bool)checkJumpAnimated:(long long)arg1;
- (void)viewAdjustSubviews;
- (_Bool)scrollToRowAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)scrollToRowAtIndex:(long long)arg1 offset:(double)arg2 animated:(_Bool)arg3;
- (void)refresh:(id)arg1;
- (_Bool)scrollToRowAtIndex:(long long)arg1 offset:(double)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reloadScrollViewAtIndex:(long long)arg1;
- (void)reloadScrollView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
