//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTGrowingTextViewDelegate.h"

@class CTGrowingTextView, NSString, UIButton;

@interface CTSendMessageView : UIView <CTGrowingTextViewDelegate>
{
    UIButton *_recordButton;
    CTGrowingTextView *_growingText;
    UIButton *_submitBtton;
}

@property(retain, nonatomic) UIButton *submitBtton; // @synthesize submitBtton=_submitBtton;
@property(retain, nonatomic) CTGrowingTextView *growingText; // @synthesize growingText=_growingText;
@property(retain, nonatomic) UIButton *recordButton; // @synthesize recordButton=_recordButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
