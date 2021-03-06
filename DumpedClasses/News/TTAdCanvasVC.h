//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

@class CAGradientLayer, NSDate, NSDictionary, NSMutableArray, SSThemedView, TTAdCanvasJsonLayoutModel, TTAdCanvasProjectModel, TTAdCanvasVCDelegate, TTAlphaThemedButton, UIScrollView, UIView;

@interface TTAdCanvasVC : SSViewControllerBase
{
    _Bool _hasLayout;
    id <TTAdCanvasVCDelegate> _delegate;
    SSThemedView *_naviView;
    CAGradientLayer *_naviLayer;
    TTAlphaThemedButton *_closeButton;
    TTAlphaThemedButton *_shareButton;
    TTAdCanvasProjectModel *_projectModel;
    NSDictionary *_baseCondition;
    UIView *_screenShotView;
    UIScrollView *_scrollView;
    TTAdCanvasVCDelegate *_canvasDelegate;
    NSMutableArray *_cellArray;
    TTAdCanvasJsonLayoutModel *_jsonLayoutModel;
    NSDate *_enterDate;
}

@property(nonatomic) _Bool hasLayout; // @synthesize hasLayout=_hasLayout;
@property(retain, nonatomic) NSDate *enterDate; // @synthesize enterDate=_enterDate;
@property(retain, nonatomic) TTAdCanvasJsonLayoutModel *jsonLayoutModel; // @synthesize jsonLayoutModel=_jsonLayoutModel;
@property(retain, nonatomic) NSMutableArray *cellArray; // @synthesize cellArray=_cellArray;
@property(retain, nonatomic) TTAdCanvasVCDelegate *canvasDelegate; // @synthesize canvasDelegate=_canvasDelegate;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *screenShotView; // @synthesize screenShotView=_screenShotView;
@property(retain, nonatomic) NSDictionary *baseCondition; // @synthesize baseCondition=_baseCondition;
@property(retain, nonatomic) TTAdCanvasProjectModel *projectModel; // @synthesize projectModel=_projectModel;
@property(retain, nonatomic) TTAlphaThemedButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) TTAlphaThemedButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) CAGradientLayer *naviLayer; // @synthesize naviLayer=_naviLayer;
@property(retain, nonatomic) SSThemedView *naviView; // @synthesize naviView=_naviView;
@property(nonatomic) __weak id <TTAdCanvasVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)skStoreViewDidDisappear:(id)arg1;
- (void)skStoreViewDidAppear:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)removeNotification;
- (void)addNotification;
- (void)trackLeave;
- (void)trackEnter;
- (void)showEndAnimation;
- (void)commitShowRNViewAnimation;
- (void)showStartAnimation:(struct CGRect)arg1 sourceImageModel:(id)arg2 toFrame:(struct CGRect)arg3 toImageModel:(id)arg4;
- (void)showStartAnimation;
- (void)closeButtonTouched:(id)arg1;
- (void)shareTouched:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)setShotScreen;
- (void)setCommons;
- (void)createScrollView;
- (void)createSubViews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithBaseCondition:(id)arg1;

@end

