//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCBasePresenter.h"

#import "MCChatPageDisplayModelProtocol.h"
#import "MCChatPageDisplayPresenterForCellAndBubbleInterface.h"
#import "MCChatPageDisplayPresenterInterface.h"
#import "MCChatPageDisplayViewDelegate.h"
#import "MCChatPageInputPresenterDelegate.h"
#import "TBIMInitServiceDelegate.h"

@class IMThreadSafeMutableArry, MCCCellManager, MCChatPageConfig, MCChatPageDisplayModel, MCChatPageDisplayView, NSDate, NSDictionary, NSString, UIView;

@interface MCChatPageDisplayPresenter : MCBasePresenter <MCChatPageInputPresenterDelegate, MCChatPageDisplayModelProtocol, MCChatPageDisplayViewDelegate, TBIMInitServiceDelegate, MCChatPageDisplayPresenterInterface, MCChatPageDisplayPresenterForCellAndBubbleInterface>
{
    _Bool _isUnreadButtonClick;
    int _sessionType;
    MCChatPageConfig *_config;
    MCCCellManager *_cellManager;
    MCChatPageDisplayModel *_chatPageDisplayModel;
    id <MCChatDisplayHeaderViewDelegate> _displayHeaderViewDelegate;
    NSString *_sessionID;
    MCChatPageDisplayView *_chatPageDisplayView;
    id <MCChatPageInputPresenterProtocol> _chatPageInptuPresenter;
    IMThreadSafeMutableArry *_cellModelObjectList;
    UIView *_headerView;
    long long _unreadCount;
    long long _realUnreadCount;
    NSDate *_lastAitaMessageDate;
    NSString *_lastAitaMessageCode;
}

@property(copy, nonatomic) NSString *lastAitaMessageCode; // @synthesize lastAitaMessageCode=_lastAitaMessageCode;
@property(retain, nonatomic) NSDate *lastAitaMessageDate; // @synthesize lastAitaMessageDate=_lastAitaMessageDate;
@property(nonatomic) long long realUnreadCount; // @synthesize realUnreadCount=_realUnreadCount;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) _Bool isUnreadButtonClick; // @synthesize isUnreadButtonClick=_isUnreadButtonClick;
@property(nonatomic) int sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) IMThreadSafeMutableArry *cellModelObjectList; // @synthesize cellModelObjectList=_cellModelObjectList;
@property(nonatomic) __weak id <MCChatPageInputPresenterProtocol> chatPageInptuPresenter; // @synthesize chatPageInptuPresenter=_chatPageInptuPresenter;
@property(retain, nonatomic) MCChatPageDisplayView *chatPageDisplayView; // @synthesize chatPageDisplayView=_chatPageDisplayView;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak id <MCChatDisplayHeaderViewDelegate> displayHeaderViewDelegate; // @synthesize displayHeaderViewDelegate=_displayHeaderViewDelegate;
@property(retain, nonatomic) MCChatPageDisplayModel *chatPageDisplayModel; // @synthesize chatPageDisplayModel=_chatPageDisplayModel;
@property(retain, nonatomic) MCCCellManager *cellManager; // @synthesize cellManager=_cellManager;
@property(retain, nonatomic) MCChatPageConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)inputView:(id)arg1 status:(long long)arg2;
- (void)headImageDidLongPressForMessage:(id)arg1;
- (id)getNextUnReadSoundMessageByCurrentMessage:(id)arg1;
- (void)reloadData;
- (void)userChange:(id)arg1;
- (void)messageLoadUnreadMessageAndMsg:(id)arg1 unreadMsgCount:(long long)arg2;
- (void)messageLoadShareItemMessageResultAndMsg:(id)arg1;
- (void)messageLoadImageMessageFailCurrentMessage:(id)arg1 isFront:(_Bool)arg2;
- (void)messageLoadImageMessageResultCurrentMessage:(id)arg1 andMsg:(id)arg2 haveMore:(_Bool)arg3 isFront:(_Bool)arg4;
- (void)messageLoadFailWithError:(id)arg1;
- (void)needReloadMessage;
- (void)messageContentDownLoad:(id)arg1;
- (void)messageClearAll;
- (void)messageChange:(id)arg1;
- (void)messageDel:(id)arg1;
- (void)messageAdd:(id)arg1;
- (void)messageLoadResultNewMessage:(id)arg1 haveMore:(_Bool)arg2;
- (void)sessionChange;
- (void)tableViewDidScrollBottom:(id)arg1;
- (id)getView;
- (void)setTableViewSectionHeaderView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableFooterViewForTableView:(id)arg1;
- (id)tableHeaderViewForTableView:(id)arg1;
- (void)tableViewDidScrollTop:(id)arg1;
- (void)tableViewDidTapped:(id)arg1;
- (void)imInitBaseFinish;
- (void)addBackgroundImage;
- (id)chatCellModelWithArray:(id)arg1 message:(id)arg2 index:(long long)arg3;
- (void)performMessageUpdate:(id)arg1 atIndex:(long long)arg2;
- (void)proccessMessageUpdate:(id)arg1 sort:(_Bool)arg2;
- (void)performMessageAdd:(id)arg1 sort:(_Bool)arg2;
- (void)unReadClickAndScroll;
- (void)aiTaClickAndScroll;
- (void)showOrHiddenUnreadAitaLocator;
- (void)refreshDataAndUI;
- (void)cellManagerInit;
- (void)updateShareItemCountForList:(id)arg1;
- (void)saveCheckShareItemUnreadedCountTimeIfNeed:(_Bool)arg1;
- (_Bool)needCheckShareItemUnreadedCount;
- (id)showShareItemUnreadedCountSysMsgOpenUrl;
- (void)showShareItemUnreadedCountSysMsg;
- (void)updateCellHeader:(id)arg1;
- (void)updateCurrentVisibleCellsWithUser:(id)arg1;
- (void)greetingCardsBizLogic;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFrame:(struct CGRect)arg1 baseVC:(id)arg2 bizKey:(id)arg3 sesssionID:(id)arg4 sessionType:(int)arg5 config:(id)arg6 inputPresenter:(id)arg7;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDictionary *userInfo;

@end
