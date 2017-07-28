//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class FBView, JSContext, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIScrollView, UITapGestureRecognizer, UITextField, UIView;

@interface FBDocument : UIViewController <UIGestureRecognizerDelegate>
{
    struct fb_core *_core;
    NSMutableDictionary *_viewDict;
    FBView *_root;
    UIScrollView *_scrollView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    struct UIEdgeInsets _originalInsets;
    _Bool _navBar;
    id <FBDocumentDelegate> _delegate;
    NSMutableDictionary *_dictLabel;
    NSMutableDictionary *_dictImg;
    NSMutableArray *_arrayScrollView;
    NSMutableDictionary *_timerMgr;
    UITextField *_focusInput;
    UIView *_focusView;
    JSContext *_ctx;
    NSMutableSet *_asyncCallBack;
    struct CGRect _frame;
}

+ (id)docWithPath:(id)arg1 data:(id)arg2 delegate:(id)arg3;
+ (id)doc:(id)arg1 data:(id)arg2;
@property(retain, nonatomic) NSMutableSet *asyncCallBack; // @synthesize asyncCallBack=_asyncCallBack;
@property(retain, nonatomic) JSContext *ctx; // @synthesize ctx=_ctx;
@property(nonatomic) __weak UIView *focusView; // @synthesize focusView=_focusView;
@property(nonatomic) __weak UITextField *focusInput; // @synthesize focusInput=_focusInput;
@property(retain, nonatomic) NSMutableDictionary *timerMgr; // @synthesize timerMgr=_timerMgr;
@property(retain, nonatomic) NSMutableArray *arrayScrollView; // @synthesize arrayScrollView=_arrayScrollView;
@property(retain, nonatomic) NSMutableDictionary *dictImg; // @synthesize dictImg=_dictImg;
@property(retain, nonatomic) NSMutableDictionary *dictLabel; // @synthesize dictLabel=_dictLabel;
@property(readonly, nonatomic) _Bool navBar; // @synthesize navBar=_navBar;
@property(nonatomic) __weak id <FBDocumentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleTaps:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)popupKeyboard:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)setNeedLayout:(id)arg1;
- (void)layout:(id)arg1;
- (id)findViewByNode:(struct fb_node *)arg1;
- (void)removeView:(struct fb_node *)arg1;
- (id)getViewById:(id)arg1;
- (id)getView;
- (id)view;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void)reloadData:(id)arg1;
- (void)updateLayout;
- (void)executeJS:(id)arg1;
- (_Bool)focus;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithHtml:(id)arg1 withData:(id)arg2;
- (id)initWithHtml:(id)arg1 withData:(id)arg2 andDelegate:(id)arg3;
- (id)initWithFilePath:(id)arg1 withData:(id)arg2 andDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

