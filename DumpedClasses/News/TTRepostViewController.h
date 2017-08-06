//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "UIScrollViewDelegate.h"
#import "UITextViewDelegate.h"

@class NSArray, NSString, SSThemedButton, SSThemedLabel, SSThemedScrollView, SSThemedTextView, SSThemedView, TTRepostOriginArticle, TTRepostOriginThread, TTRepostThreadQuoteView, TTRichSpanText;

@interface TTRepostViewController : SSViewControllerBase <UIScrollViewDelegate, UITextViewDelegate>
{
    _Bool _hasEdited;
    _Bool _firstAppear;
    NSString *_cid;
    NSString *_categoryID;
    unsigned long long _repostType;
    TTRepostOriginArticle *_repostOriginArticle;
    TTRepostOriginThread *_repostOriginThread;
    unsigned long long _repostOperationItemType;
    NSString *_repostOperationItemID;
    NSArray *_repostSegments;
    TTRichSpanText *_richSpanText;
    SSThemedButton *_postButton;
    SSThemedScrollView *_containerView;
    SSThemedView *_inputContainerView;
    SSThemedLabel *_tipLabel;
    SSThemedTextView *_inputTextView;
    TTRepostThreadQuoteView *_repostQuoteView;
    struct CGRect _keyboardEndFrame;
}

+ (id)presentRepostToWeitoutiaoViewControllerWithRepostType:(unsigned long long)arg1 originArticle:(id)arg2 originThread:(id)arg3 operationItemType:(unsigned long long)arg4 operationItemID:(id)arg5 repostSegments:(id)arg6;
@property(retain, nonatomic) TTRepostThreadQuoteView *repostQuoteView; // @synthesize repostQuoteView=_repostQuoteView;
@property(retain, nonatomic) SSThemedTextView *inputTextView; // @synthesize inputTextView=_inputTextView;
@property(retain, nonatomic) SSThemedLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) SSThemedView *inputContainerView; // @synthesize inputContainerView=_inputContainerView;
@property(retain, nonatomic) SSThemedScrollView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) SSThemedButton *postButton; // @synthesize postButton=_postButton;
@property(nonatomic) struct CGRect keyboardEndFrame; // @synthesize keyboardEndFrame=_keyboardEndFrame;
@property(nonatomic) _Bool firstAppear; // @synthesize firstAppear=_firstAppear;
@property(nonatomic) _Bool hasEdited; // @synthesize hasEdited=_hasEdited;
@property(retain, nonatomic) TTRichSpanText *richSpanText; // @synthesize richSpanText=_richSpanText;
@property(copy, nonatomic) NSArray *repostSegments; // @synthesize repostSegments=_repostSegments;
@property(copy, nonatomic) NSString *repostOperationItemID; // @synthesize repostOperationItemID=_repostOperationItemID;
@property(nonatomic) unsigned long long repostOperationItemType; // @synthesize repostOperationItemType=_repostOperationItemType;
@property(retain, nonatomic) TTRepostOriginThread *repostOriginThread; // @synthesize repostOriginThread=_repostOriginThread;
@property(retain, nonatomic) TTRepostOriginArticle *repostOriginArticle; // @synthesize repostOriginArticle=_repostOriginArticle;
@property(nonatomic) unsigned long long repostType; // @synthesize repostType=_repostType;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (void)trackRepostWithEvent:(id)arg1 label:(id)arg2 extra:(id)arg3;
- (id)trackDict;
- (id)source;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)isValidateWithInputText:(id)arg1;
- (void)repostFinished:(_Bool)arg1;
- (void)repost:(id)arg1;
- (void)cancelRepost:(id)arg1;
- (void)keyboardWillChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)addNotification;
- (id)richSpanTextForRepostSegments:(id)arg1;
- (void)createComponent;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithRepostType:(unsigned long long)arg1 originArticle:(id)arg2 originThread:(id)arg3 operationItemType:(unsigned long long)arg4 operationItemID:(id)arg5 repostSegments:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
