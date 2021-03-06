//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYMMovieCommonViewController.h"

#import "IQYWebViewProtocol-Protocol.h"

@class IQYWebView, IQYWebviewJSBridge, NSString, NSURLRequest, UIButton, UILabel, UIView;

@interface QYMBaiduWebviewController : QYMMovieCommonViewController <IQYWebViewProtocol>
{
    _Bool _isCookieSet;
    NSURLRequest *_urlRequest;
    IQYWebView *_baiduWebView;
    UIButton *_closeBtn;
    UIButton *_webViewbackBtn;
    UILabel *_closeLabel;
    UIButton *_backLabelBtn;
    UILabel *_backLabel;
    UIView *_line;
    IQYWebviewJSBridge *_jsBridge;
    NSString *_URL;
}

@property(retain, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(nonatomic) _Bool isCookieSet; // @synthesize isCookieSet=_isCookieSet;
@property(retain, nonatomic) IQYWebviewJSBridge *jsBridge; // @synthesize jsBridge=_jsBridge;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *backLabel; // @synthesize backLabel=_backLabel;
@property(retain, nonatomic) UIButton *backLabelBtn; // @synthesize backLabelBtn=_backLabelBtn;
@property(retain, nonatomic) UILabel *closeLabel; // @synthesize closeLabel=_closeLabel;
@property(retain, nonatomic) UIButton *webViewbackBtn; // @synthesize webViewbackBtn=_webViewbackBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) IQYWebView *baiduWebView; // @synthesize baiduWebView=_baiduWebView;
@property(retain, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
- (void).cxx_destruct;
- (void)webViewGoBack;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)rebuildTitleLabelFrame:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)jumpToHomeView:(id)arg1 webView:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadBaiduRequest;
- (void)setBaiduWebViewUrl:(id)arg1;
- (void)initWebviewJSBridge;
- (void)initOrderIllustrationWebView;
- (void)closeViewController;
- (void)backBtnTouchUpOutside;
- (void)backBtnTouchDown;
- (void)closeBtnTouchUpOutside;
- (void)closeBtnTouchDown;
- (void)initWebviewOperarionButton;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

