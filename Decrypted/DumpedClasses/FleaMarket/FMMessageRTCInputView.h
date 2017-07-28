//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FMEmotionInputViewDelegate.h"
#import "FMMessageInputViewDelegate.h"
#import "HPGrowingTextViewDelegate.h"

@class HPGrowingTextView, NSString, UITableView;

@interface FMMessageRTCInputView : UIView <HPGrowingTextViewDelegate, FMMessageInputViewDelegate, FMEmotionInputViewDelegate>
{
    UITableView *_chatTableView;
    id <FMIMMessageEmmiter> _proxyEmitter;
    HPGrowingTextView *_messageInputView;
    unsigned long long _messageViewState;
    CDUnknownBlockType _inputTextReturnedBlock;
    CDUnknownBlockType _editingBlock;
    UIView *_parentView;
    struct CGRect _emotionOrShareMenuStartFrame;
    struct CGRect _emotionOrShareMenuEndFrame;
    struct CGRect _emotionStartFrame;
    struct CGRect _emotionEndFrame;
}

@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) struct CGRect emotionEndFrame; // @synthesize emotionEndFrame=_emotionEndFrame;
@property(nonatomic) struct CGRect emotionStartFrame; // @synthesize emotionStartFrame=_emotionStartFrame;
@property(nonatomic) struct CGRect emotionOrShareMenuEndFrame; // @synthesize emotionOrShareMenuEndFrame=_emotionOrShareMenuEndFrame;
@property(nonatomic) struct CGRect emotionOrShareMenuStartFrame; // @synthesize emotionOrShareMenuStartFrame=_emotionOrShareMenuStartFrame;
@property(copy, nonatomic) CDUnknownBlockType editingBlock; // @synthesize editingBlock=_editingBlock;
@property(copy, nonatomic) CDUnknownBlockType inputTextReturnedBlock; // @synthesize inputTextReturnedBlock=_inputTextReturnedBlock;
@property(nonatomic) unsigned long long messageViewState; // @synthesize messageViewState=_messageViewState;
@property(retain, nonatomic) HPGrowingTextView *messageInputView; // @synthesize messageInputView=_messageInputView;
@property(nonatomic) __weak id <FMIMMessageEmmiter> proxyEmitter; // @synthesize proxyEmitter=_proxyEmitter;
@property(nonatomic) __weak UITableView *chatTableView; // @synthesize chatTableView=_chatTableView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didFinishRecordVoice:(id)arg1 filePath:(id)arg2 recordTime:(double)arg3;
- (void)didSwitchInputMode:(unsigned long long)arg1 seleted:(_Bool)arg2;
- (void)scrollToBottomAnimated:(_Bool)arg1;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (_Bool)growingTextViewShouldBeginEditing:(id)arg1;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)loadView;
- (void)resetParentLayout;
- (id)initWithParentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

