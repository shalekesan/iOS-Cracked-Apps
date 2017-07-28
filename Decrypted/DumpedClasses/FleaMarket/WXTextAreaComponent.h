//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXEditComponent.h"

@class UITextView;

@interface WXTextAreaComponent : WXEditComponent
{
    struct UIEdgeInsets _border;
    struct UIEdgeInsets _padding;
    struct UITextView *_textView;
    unsigned long long _rows;
}

@property(nonatomic) unsigned long long rows; // @synthesize rows=_rows;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)_updateTextContentInset;
- (void)setFont:(id)arg1;
- (void)setAttributedPlaceholder:(id)arg1 font:(id)arg2;
- (void)setEditBorder:(struct UIEdgeInsets)arg1;
- (void)setEditPadding:(struct UIEdgeInsets)arg1;
- (void)setSecureTextEntry:(_Bool)arg1;
- (void)setKeyboardType:(long long)arg1;
- (id)getEditSelectionRange;
- (void)setEditSelectionRange:(long long)arg1 selectionEnd:(long long)arg2;
- (void)setInputAccessoryView:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (CDUnknownBlockType)measureBlock;
- (id)loadView;
- (void)viewWillUnload;
- (void)viewDidLoad;

@end

