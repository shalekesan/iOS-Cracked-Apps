//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IFNumberKeyboardDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, UILabel, UITextField;

@interface FMPriceFieldView : UIView <IFNumberKeyboardDelegate, UITextFieldDelegate>
{
    UILabel *_titleLabel;
    UILabel *_dollorLabel;
    UITextField *_priceField;
    UILabel *_maskTextLabel;
    CDUnknownBlockType _keyboardDoneBlock;
    CDUnknownBlockType _keyboardHideBlock;
    CDUnknownBlockType _resignResponderBlock;
    CDUnknownBlockType _priceDidChangedBlock;
    _Bool _priceFieldEnable;
    NSString *_title;
    NSString *_placeholder;
}

@property(nonatomic) _Bool priceFieldEnable; // @synthesize priceFieldEnable=_priceFieldEnable;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)numberKeyboardBackspace;
- (void)numberKeyboardDone;
- (void)numberKeyboardHide;
- (void)numberKeyboardInput:(id)arg1;
- (void)priceFiledResignResponder:(CDUnknownBlockType)arg1;
- (void)priceDidChanged:(CDUnknownBlockType)arg1;
- (void)keybaordDidDone:(CDUnknownBlockType)arg1;
- (void)keybaordDidHide:(CDUnknownBlockType)arg1;
- (void)onFocus;
@property(retain, nonatomic) NSString *fieldContent;
- (void)setMaskText:(id)arg1;
- (void)priceDidChangedHandlerWithText:(id)arg1;
- (void)registerKVO;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

