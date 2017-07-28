//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluViewController.h"

#import "aluInputBoxDelegate.h"
#import "aluRegSetPwdPageAppearacne.h"
#import "aluWebViewDelegate.h"

@class NSString, UIButton, UILabel, UIWebView, aluInputBox, aluMTopService;

@interface aluRegSetPwdViewController : aluViewController <aluRegSetPwdPageAppearacne, aluWebViewDelegate, aluInputBoxDelegate>
{
    _Bool _showHiddenPwd;
    _Bool _shouldShowPromptOnBack;
    NSString *_loginId;
    NSString *_sessionId;
    aluInputBox *_pwdInputBox;
    UILabel *_pwdRightAccessoryLabel;
    UIButton *_nextBtn;
    aluMTopService *_joinInvoker;
    UIWebView *_webView;
    id <IUATraceComponent> _uaTrace;
}

@property(retain, nonatomic) id <IUATraceComponent> uaTrace; // @synthesize uaTrace=_uaTrace;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) aluMTopService *joinInvoker; // @synthesize joinInvoker=_joinInvoker;
@property(nonatomic) __weak UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(nonatomic) __weak UILabel *pwdRightAccessoryLabel; // @synthesize pwdRightAccessoryLabel=_pwdRightAccessoryLabel;
@property(nonatomic) __weak aluInputBox *pwdInputBox; // @synthesize pwdInputBox=_pwdInputBox;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(nonatomic) _Bool shouldShowPromptOnBack; // @synthesize shouldShowPromptOnBack=_shouldShowPromptOnBack;
- (void).cxx_destruct;
- (id)confirmButton;
- (void)updateNextBtnStatus;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)aluIputBoxTextInputDidChange:(id)arg1;
- (void)willWebViewCloseCallback:(id)arg1 request:(id)arg2 params:(id)arg3;
- (void)doSetPassword;
- (void)onNext;
- (void)onBack:(id)arg1;
- (void)onRightAccessoryBtnClick:(id)arg1;
- (void)creatSubviews;
- (void)textFieldEndEdit:(id)arg1;
- (void)textFieldBeginEdit:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)startLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool needDropDownList;
@property(readonly) Class superclass;

@end

