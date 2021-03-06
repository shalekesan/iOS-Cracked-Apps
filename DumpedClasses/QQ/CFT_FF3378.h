//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_FF7785.h"

#import "QQWalletPubaccManagerDelegate.h"
#import "TouchIdDelegate.h"
#import "UICheckBoxDelegate.h"
#import "UIWebViewDelegate.h"

@class CFT_UICheckBox, CFT_UIPayresultAdverEngine, NSMutableDictionary, NSString, UIButton, UIScrollView, UIView, UIWebView;

@interface CFT_FF3378 : CFT_FF7785 <TouchIdDelegate, UIWebViewDelegate, QQWalletPubaccManagerDelegate, UICheckBoxDelegate>
{
    CFT_UICheckBox *_checkBox;
    NSMutableDictionary *rewardCallbackResultInfo;
    UIWebView *_bannerWebView;
    NSString *_bannerAdUrl;
    UIScrollView *_mScrollView;
    UIView *_pubAccountView;
    double mline_y;
    int tid;
    _Bool _shortPswGuided;
    NSString *_touchPayCsr;
    NSString *_action;
    UIButton *_completeBtn;
    CFT_UIPayresultAdverEngine *_adEngine;
}

@property(retain, nonatomic) CFT_UIPayresultAdverEngine *adEngine; // @synthesize adEngine=_adEngine;
@property(retain, nonatomic) UIButton *completeBtn; // @synthesize completeBtn=_completeBtn;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *touchPayCsr; // @synthesize touchPayCsr=_touchPayCsr;
@property(nonatomic) _Bool shortPswGuided; // @synthesize shortPswGuided=_shortPswGuided;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)openTouchPayResponseFinish:(id)arg1 resultCode:(id)arg2;
- (void)showTouchPayGuidetView;
- (_Bool)canOpenTouchPay;
- (void)showAdWebView:(id)arg1;
- (void)layoutSubviews;
- (void)layoutpubAccountView;
- (void)checkBoxStateChanged:(id)arg1;
- (void)qpayment_na_payconfirm;
- (void)qpay_hb_share;
- (void)showRedGiftReady;
- (void)qpay_hb_na_payconfirm;
- (void)qpay_hb_zone_callback;
- (void)qpay_hb_zone_visitor_callback;
- (void)qpay_reward_callback;
- (void)backToBarginor:(id)arg1;
- (id)packPaySuccResultInfo;
- (void)cancel:(id)arg1;
- (void)jumpPayUrl:(id)arg1;
- (void)showPayResultVC;
- (void)doPaySuccAction;
- (void)actionWith:(id)arg1 style:(int)arg2;
- (void)orderDetail;
- (void)viewDidAppear:(_Bool)arg1;
- (void)showAdvertiserTips;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

