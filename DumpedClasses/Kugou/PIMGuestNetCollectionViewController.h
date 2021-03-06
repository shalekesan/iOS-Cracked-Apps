//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "CollectDataSourceDelegate.h"
#import "CollectDetailSimpleInfoViewControllerDelegate.h"
#import "KGNewSpecialOrAlbumCoverViewDelegate.h"
#import "MoreMusicTableViewDataSource.h"
#import "MoreMusicTableViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UserLoginViewControllerDelegate.h"

@class AdInfoInDetailSongList, CloudListEntity, CollectListEntity, CollectListWithPeriodResponseEntity, KGDefaultHoldTipsView, KGDefaultNetErrorView, KGEmbedWebViewController, KGNewSpecialOrAlbumCoverView, KGSelfBuildDataSource, KGTextRollView, MoreMusicTableView, MusicControlViewController, NSDictionary, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UserInputInfoToReportViewController;

@interface PIMGuestNetCollectionViewController : KGViewController <CollectDataSourceDelegate, KGNewSpecialOrAlbumCoverViewDelegate, CollectDetailSimpleInfoViewControllerDelegate, UIAlertViewDelegate, MoreMusicTableViewDataSource, MoreMusicTableViewDelegate, UserLoginViewControllerDelegate>
{
    MusicControlViewController *_musicControlViewController;
    NSMutableArray *_cacheSongArray;
    double _coverInset;
    int _musicCount;
    NSDictionary *_singerDict;
    UILabel *_descriptionLabel;
    UIImageView *_separateLine;
    UIButton *_shareBtn;
    KGDefaultNetErrorView *_errorView;
    int _type;
    _Bool _isCloudCollected;
    _Bool _isNeedQueryCollectStatus;
    _Bool _isFirstLoadDataDone;
    _Bool _isCollectStatusQueryDone;
    long long _downloadImgAndrequestFinishCount;
    _Bool _canShowTableViewLoading;
    _Bool _isLoadingData;
    int _updateTime;
    MoreMusicTableView *_tableView;
    CloudListEntity *_cloudListEntity;
    long long _userID;
    NSString *_customTitle;
    long long _rankId;
    AdInfoInDetailSongList *_adInfo;
    KGEmbedWebViewController *_embebedWebViewCtrl;
    CollectListWithPeriodResponseEntity *_collectListWithPeriodResponseEntity;
    CollectListEntity *_listEntity;
    KGDefaultHoldTipsView *_blankView;
    CollectListEntity *_collectedListEntity;
    KGSelfBuildDataSource *_dataSource;
    long long _totalSongs;
    long long _currentPage;
    long long _pageSize;
    UserInputInfoToReportViewController *_userInputInfoToReportViewController;
    KGNewSpecialOrAlbumCoverView *_coverView;
    KGTextRollView *_textRollView;
    NSString *_blankViewStr;
}

@property(retain, nonatomic) NSString *blankViewStr; // @synthesize blankViewStr=_blankViewStr;
@property(retain, nonatomic) KGTextRollView *textRollView; // @synthesize textRollView=_textRollView;
@property(retain, nonatomic) KGNewSpecialOrAlbumCoverView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UserInputInfoToReportViewController *userInputInfoToReportViewController; // @synthesize userInputInfoToReportViewController=_userInputInfoToReportViewController;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(nonatomic) _Bool canShowTableViewLoading; // @synthesize canShowTableViewLoading=_canShowTableViewLoading;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long totalSongs; // @synthesize totalSongs=_totalSongs;
@property(retain, nonatomic) KGSelfBuildDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CollectListEntity *collectedListEntity; // @synthesize collectedListEntity=_collectedListEntity;
@property(retain, nonatomic) KGDefaultHoldTipsView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) CollectListEntity *listEntity; // @synthesize listEntity=_listEntity;
@property(retain, nonatomic) CollectListWithPeriodResponseEntity *collectListWithPeriodResponseEntity; // @synthesize collectListWithPeriodResponseEntity=_collectListWithPeriodResponseEntity;
@property(retain, nonatomic) KGEmbedWebViewController *embebedWebViewCtrl; // @synthesize embebedWebViewCtrl=_embebedWebViewCtrl;
@property(retain, nonatomic) AdInfoInDetailSongList *adInfo; // @synthesize adInfo=_adInfo;
@property(nonatomic) long long rankId; // @synthesize rankId=_rankId;
@property(nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(nonatomic) long long userID; // @synthesize userID=_userID;
@property(retain, nonatomic) CloudListEntity *cloudListEntity; // @synthesize cloudListEntity=_cloudListEntity;
@property(retain, nonatomic) MoreMusicTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int updateTime; // @synthesize updateTime=_updateTime;
- (void).cxx_destruct;
- (void)loginSuccess;
- (void)cancelCollectList;
- (void)addCollectList;
- (id)gainCollectListName;
- (void)queryListCollectStatusWithCompleted:(CDUnknownBlockType)arg1;
- (_Bool)checkIsListEntityCollectedInDB;
- (unsigned long long)collectListInDBCount;
- (void)querySpecialBuilderName;
- (void)queryCloudCollectStatus;
- (void)didUpdateUserPortraited:(id)arg1;
- (void)collectEntityInfoDidLoadFailed;
- (void)collectEntityInfoDidLoaded;
- (void)collectEntityFailedWithError:(id)arg1;
- (void)collectEntitySuccess;
- (void)sourceDidLoadFailed;
- (void)sourceDidDeleteSongSuccess;
- (void)sourceDataDidClear:(id)arg1;
- (void)sourceDidFinishLoadData:(id)arg1;
- (void)sourceUpdatePartOfData:(id)arg1;
- (void)sourceStartGetData:(id)arg1;
- (void)oneClickDownloadBtnClick;
- (void)addMoreDataActionWithTabelView:(id)arg1;
- (_Bool)hasMoreWithTabelView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)iteraterToFindLabelInView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)detailVcSingerBtnEvent:(id)arg1;
- (void)coverView:(id)arg1 finishedLoadCoverImage:(id)arg2;
- (void)coverView:(id)arg1 didClickedPlayBtn:(id)arg2;
- (void)coverView:(id)arg1 didClickedDownloadBtn:(id)arg2;
- (void)coverView:(id)arg1 didClickedCollectBtn:(id)arg2;
- (void)coverView:(id)arg1 didClickedAuthorBtn:(id)arg2;
- (void)coverView:(id)arg1 didClickedCoverImgBtn:(id)arg2;
- (void)toSingerInfoView:(id)arg1;
- (void)playButtonClick:(id)arg1;
- (void)adAwardBtnTaped:(id)arg1;
- (void)onCollectBtnClicked:(id)arg1;
- (id)getAllSongInfos;
- (void)fillContent;
- (void)refreshCoverAuthorArea;
- (void)refreshCoverArea;
- (void)KGUsingControllerState:(int)arg1;
- (void)setCoverWithImage:(id)arg1;
- (void)reportblackListNetwork:(int)arg1 content:(id)arg2;
- (void)removeUserInputInfoToReportViewController;
- (void)showUserInputInfoToReportViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 buttonTitleArray:(id)arg3;
- (void)showDetailView;
- (void)goToSearchView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)hideErrorView;
- (void)showErrorView;
- (void)showErrorViewWithTitle:(id)arg1;
- (void)requestAgain;
- (void)hideLoadingState;
- (void)showLoadingState;
- (void)hideTopView;
- (void)showTopView;
- (void)hideBlankView;
- (void)showBlankView;
- (void)hideNetErrorView;
- (void)showNetErrorView;
- (void)hideAllViews;
- (void)showAllViews;
- (void)reConnectEvent;
- (_Bool)networkIsReady;
- (void)fillContentData:(id)arg1;
- (void)getDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)getData;
- (void)setFunViewShotBack:(_Bool)arg1;
- (void)screenShotImage;
- (void)viewInit;
- (void)congfigerView;
- (void)onChangeTheme:(id)arg1;
- (void)createTextRollView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

