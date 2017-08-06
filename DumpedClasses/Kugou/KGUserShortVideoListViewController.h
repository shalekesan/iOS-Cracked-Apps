//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "MVViewCommentChangeDeleagate.h"
#import "RefreshControlDelegate.h"
#import "UITableViewDataSource.h"

@class KGDefaultNetErrorView, KGTableView, KGThemeLabel, KGThemeView, MVList, NSMutableArray, NSString, RefreshControl, SectionHeaderView, UIImageView, UIView;

@interface KGUserShortVideoListViewController : KGViewController <MVViewCommentChangeDeleagate, UITableViewDataSource, RefreshControlDelegate>
{
    MVList *_mvList;
    KGTableView *_mTableView;
    UIImageView *_headImageView;
    unsigned long long _pageNum;
    KGThemeLabel *_authorNameLabel;
    KGThemeLabel *_userdescLabel;
    NSMutableArray *_authorMvListArr;
    RefreshControl *_refreshControl;
    KGThemeView *_headView;
    UIView *_headViewContentView;
    int _source;
    double _kUserShortVideoListHeadViewHeight;
    SectionHeaderView *_sectionHeaderView;
    KGDefaultNetErrorView *_dataErrorView;
}

@property(retain, nonatomic) KGDefaultNetErrorView *dataErrorView; // @synthesize dataErrorView=_dataErrorView;
@property(retain, nonatomic) SectionHeaderView *sectionHeaderView; // @synthesize sectionHeaderView=_sectionHeaderView;
- (void).cxx_destruct;
- (id)manualPath;
- (void)changeCommentsNumWithMvHash:(id)arg1 AndCommentsNum:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (void)scrollViewDidPositioning:(id)arg1 Position:(int)arg2;
- (id)mvListhByAuthorVideoListInfo:(id)arg1;
- (void)addAuthorMvListArrWithArr:(id)arg1;
- (void)refreshDataAndUiWithAuthorInfo:(id)arg1;
- (void)showData;
- (void)showLoading;
- (void)showNoData;
- (void)disShowError;
- (void)showError;
- (void)getDataWithPage:(unsigned long long)arg1;
- (void)reConnectEvent;
- (void)sendLoadBIWithisSuccess:(_Bool)arg1;
- (void)getNextPageData;
- (void)getFirstData;
- (void)creatRefreshControl;
- (void)initUi;
- (void)viewDidLoad;
- (id)initWithMvList:(id)arg1 AndMVSource:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
