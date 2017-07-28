//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluWebViewController.h"

#import "MFMessageComposeViewControllerDelegate.h"
#import "aluWebViewDelegate.h"

@class NSDictionary, NSString, aluCallbackBizModel, aluMTopService;

@interface aluACWebViewController : aluWebViewController <MFMessageComposeViewControllerDelegate, aluWebViewDelegate>
{
    _Bool _shouldTriggerCallback;
    _Bool _isSuc;
    NSString *_uaTracePageName;
    aluCallbackBizModel *_bizModel;
    aluMTopService *_retrieveH5Service;
    NSDictionary *_extraInfo;
    id <IUATraceComponent> _uaTrace;
}

@property(nonatomic) id <IUATraceComponent> uaTrace; // @synthesize uaTrace=_uaTrace;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) _Bool isSuc; // @synthesize isSuc=_isSuc;
@property(nonatomic) _Bool shouldTriggerCallback; // @synthesize shouldTriggerCallback=_shouldTriggerCallback;
@property(retain, nonatomic) aluMTopService *retrieveH5Service; // @synthesize retrieveH5Service=_retrieveH5Service;
@property(retain, nonatomic) aluCallbackBizModel *bizModel; // @synthesize bizModel=_bizModel;
@property(copy, nonatomic) NSString *uaTracePageName; // @synthesize uaTracePageName=_uaTracePageName;
- (void).cxx_destruct;
- (void)willWebViewCloseCallback:(id)arg1 request:(id)arg2 params:(id)arg3;
- (void)viewDidDisappearCallback:(_Bool)arg1 extraInfo:(id)arg2;
- (void)onBack:(_Bool)arg1 extraInfo:(id)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (id)alu_p_getRecipients:(id)arg1;
- (_Bool)handleSchemeSMS:(id)arg1;
- (void)getAccountCenterURL:(id)arg1 ext:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onBack:(id)arg1;
- (id)getMonitorValueByKey:(id)arg1;
- (id)getPageName;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

