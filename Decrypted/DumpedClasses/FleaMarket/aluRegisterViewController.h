//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluViewController.h"

#import "aluCountryListViewControllerDelegate.h"
#import "aluRegisterBoxDelegate.h"
#import "aluRegisterPageAppearance.h"

@class NSString, UIButton, UILabel, UIView, aluCountryCode, aluMTopService, aluRegisterBizModel, aluRegisterBox;

@interface aluRegisterViewController : aluViewController <aluRegisterBoxDelegate, aluCountryListViewControllerDelegate, aluRegisterPageAppearance>
{
    _Bool _beeingInGobackProcess;
    int _regRdsStatus;
    aluRegisterBizModel *_bizModel;
    UIButton *_nextBtn;
    aluRegisterBox *_regBox;
    UIView *_containerView;
    UILabel *_protocalLabel;
    UIButton *_taobaoProtocal;
    UIButton *_alipayProtocal;
    NSString *_taobaoProtocalString;
    NSString *_alipayProtocalString;
    aluCountryCode *_selectedCountry;
    aluMTopService *_prepareRegInvoker;
    aluMTopService *_precheckRegInvoker;
    aluMTopService *_verificationRegInvoker;
    NSString *_protocolUrl;
    id <IUATraceComponent> _uaTrace;
    NSString *_sessionId;
}

+ (void)setSharedBizContext:(id)arg1;
+ (id)sharedBizContext;
@property(nonatomic) _Bool beeingInGobackProcess; // @synthesize beeingInGobackProcess=_beeingInGobackProcess;
@property(nonatomic) int regRdsStatus; // @synthesize regRdsStatus=_regRdsStatus;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) id <IUATraceComponent> uaTrace; // @synthesize uaTrace=_uaTrace;
@property(retain, nonatomic) NSString *protocolUrl; // @synthesize protocolUrl=_protocolUrl;
@property(retain, nonatomic) aluMTopService *verificationRegInvoker; // @synthesize verificationRegInvoker=_verificationRegInvoker;
@property(retain, nonatomic) aluMTopService *precheckRegInvoker; // @synthesize precheckRegInvoker=_precheckRegInvoker;
@property(retain, nonatomic) aluMTopService *prepareRegInvoker; // @synthesize prepareRegInvoker=_prepareRegInvoker;
@property(retain, nonatomic) aluCountryCode *selectedCountry; // @synthesize selectedCountry=_selectedCountry;
@property(retain, nonatomic) NSString *alipayProtocalString; // @synthesize alipayProtocalString=_alipayProtocalString;
@property(retain, nonatomic) NSString *taobaoProtocalString; // @synthesize taobaoProtocalString=_taobaoProtocalString;
@property(retain, nonatomic) UIButton *alipayProtocal; // @synthesize alipayProtocal=_alipayProtocal;
@property(retain, nonatomic) UIButton *taobaoProtocal; // @synthesize taobaoProtocal=_taobaoProtocal;
@property(retain, nonatomic) UILabel *protocalLabel; // @synthesize protocalLabel=_protocalLabel;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak aluRegisterBox *regBox; // @synthesize regBox=_regBox;
@property(nonatomic) __weak UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) aluRegisterBizModel *bizModel; // @synthesize bizModel=_bizModel;
- (void).cxx_destruct;
- (_Bool)isNextBtnEnabled;
- (void)updateNextBtnEnabledStatus;
- (void)setAlipayAgreementText:(id)arg1 link:(id)arg2 color:(id)arg3 highLightColor:(id)arg4;
- (void)setRegisterPageTitle:(id)arg1;
- (void)setTaobaoAgreementText:(id)arg1 link:(id)arg2 color:(id)arg3 highLightColor:(id)arg4;
- (void)setAgreementColor:(id)arg1 highLightColor:(id)arg2;
- (id)nextStepButton;
- (_Bool)isCheckCodeAvaial;
- (void)resetCheckCodeStatus;
- (void)alu_p_updateCountries:(id)arg1;
- (void)doPrepareRegister;
- (void)alu_p_confirmMobile;
- (void)doVerificationRegister;
- (void)restoreUI;
- (void)aluCountryListViewController:(id)arg1 selectedCountry:(id)arg2;
- (id)originalPhoneNumText;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)aluRegisterBoxGoCountryList:(id)arg1;
- (void)aluInputBoxTextDidEnd:(id)arg1;
- (void)aluInputBoxTextDidBegin:(id)arg1;
- (void)aluIputBoxTextInputDidChange:(id)arg1;
- (void)clearRegbox4Resue;
- (void)onNext;
- (void)onBack:(id)arg1;
- (void)onProTocal:(id)arg1;
- (void)openAliPayProtocal;
- (void)openTaoBaoProtocal;
- (void)setProtocalButton;
- (void)setProtocalAttriString:(id)arg1;
- (void)createSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool needDropDownList;
@property(readonly) Class superclass;

@end

