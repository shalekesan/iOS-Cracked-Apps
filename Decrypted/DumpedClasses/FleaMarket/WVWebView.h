//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebView.h"

#import "WVWebViewProtocol.h"

@class NSDictionary, NSString, NSURL, NSURLRequest, UIScrollView, UIViewController, WVCommonWebView, WVJavascriptApplication, WVPagePerformance, WVUserContentController;

@interface WVWebView : UIWebView <WVWebViewProtocol>
{
    _Bool _autoPlayAudio;
    _Bool _mainFrame;
    _Bool _useCustomPullToRefresh;
    NSString *bizCode;
    NSString *_title;
    WVCommonWebView *_commonWebView;
}

+ (void)setDefaultUrlScheme:(id)arg1;
+ (id)defaultUrlScheme;
+ (void)WindVaneReadyEventForJS:(id)arg1;
+ (void)initSwizzle;
+ (_Bool)isPostRequest:(id)arg1;
+ (id)getRequestBodyForPost:(id)arg1;
+ (_Bool)isOpenURLInterruptedModule;
+ (void)openURLInterruptedModule;
+ (void)closeURLInterruptedModule;
@property(retain, nonatomic) WVCommonWebView *commonWebView; // @synthesize commonWebView=_commonWebView;
@property(nonatomic, getter=isUseCustomPullToRefresh) _Bool useCustomPullToRefresh; // @synthesize useCustomPullToRefresh=_useCustomPullToRefresh;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic, getter=isMainFrame) _Bool mainFrame; // @synthesize mainFrame=_mainFrame;
@property(retain, nonatomic) NSString *bizCode; // @synthesize bizCode;
@property(nonatomic, getter=isAutoPlayAudio) _Bool autoPlayAudio; // @synthesize autoPlayAudio=_autoPlayAudio;
- (void).cxx_destruct;
- (CDUnknownBlockType)callBackResponeseForJSWithHandlerName:(id)arg1 className:(id)arg2;
- (void)openJSBridgeLog;
- (void)deallocWebViewService;
@property(nonatomic) _Bool isOpenAutoPlayAudio;
@property(nonatomic, getter=isForbiddenPullScroll) _Bool forbiddenPullScroll;
- (_Bool)forbiddenPullScroll;
- (id)getMainFrame;
- (void)didCreateMainJavaScriptContext:(id)arg1;
- (void)wvORIGwebView:(id)arg1 didCreateJavaScriptContext:(id)arg2 forFrame:(id)arg3;
- (void)wvORIGwebView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)wvORIGwebView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)wvORIGwebView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)wvORIGwebView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)wvORIGwebView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (_Bool)wvSetCustomUserAgent:(id)arg1;
- (id)internalWebView;
@property(nonatomic, getter=isWebGLEnabled) _Bool webGLEnabled;
- (void)fetchElementValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) WVJavascriptApplication *webviewJSBContext;
- (void)callRegistedHandler:(id)arg1 withMethod:(id)arg2 withData:(id)arg3 withFatherClass:(id)arg4 withFatherMethod:(id)arg5 withResultCallback:(CDUnknownBlockType)arg6;
- (void)callRegistedHandler:(id)arg1 withMethod:(id)arg2 withData:(id)arg3 withFatherClass:(id)arg4 withFatherMethod:(id)arg5;
- (void)registeHandler:(id)arg1 withClassName:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerHandler:(id)arg1 withClassName:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)registerHandler:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setIsOpenLocalService:(_Bool)arg1;
@property(nonatomic, getter=isOpenLocalService) _Bool openLocalService;
- (void)dealloc;
- (void)bindingWebViewService;
- (void)releaseWebViewService;
- (void)setDelegate:(id)arg1;
- (id)delegate;
@property(readonly, nonatomic) double estimatedProgress;
- (void)stopLoading;
- (void)reload;
@property(readonly, copy, nonatomic) NSURL *URL;
- (id)getRequestUrl;
- (void)loadRequest:(id)arg1;
@property(readonly, retain, nonatomic) NSURLRequest *request;
- (void)setTitle:(id)arg1;
- (void)setIsOpenLongPressSaveImage:(_Bool)arg1;
@property(nonatomic, getter=isOpenLongPressSaveImage) _Bool openLongPressSaveImage;
@property(nonatomic, getter=isOpenWebKitLongPress) _Bool openWebKitLongPress;
@property(nonatomic) _Bool scrollsToTop;
- (void)stopInfiniteScrollingAnimating;
@property(nonatomic, getter=isUseInfiniteScrolling) _Bool useInfiniteScrolling;
@property(nonatomic, getter=isUsePullToRefresh) _Bool usePullToRefresh;
@property(nonatomic) _Bool bounces;
@property(nonatomic) __weak id <WVWebViewDelegate> windVaneDelegate;
@property(readonly, nonatomic) NSDictionary *jsBridgeCallHistory;
- (id)perfRecorder;
@property(readonly, nonatomic) WVPagePerformance *pagePerformance;
- (void)isPageEmpty:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isPageEmpty) _Bool pageEmpty;
@property(nonatomic) long long contentType;
@property(readonly, nonatomic) long long visiblity;
@property(nonatomic) long long visibleInViewController;
@property(nonatomic) __weak UIViewController *sourceViewController;
@property(readonly, nonatomic) WVUserContentController *userContentController;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) _Bool allowsInlineMediaPlayback;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(nonatomic) _Bool mediaPlaybackAllowsAirPlay;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property(readonly, retain, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;

@end

