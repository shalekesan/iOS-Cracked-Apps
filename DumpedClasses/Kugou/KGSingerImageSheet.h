//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGBasicSheet.h"

#import "KugouGridViewActionDelegate.h"
#import "KugouGridViewDataSource.h"
#import "SingerImageCellDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITextFieldDelegate.h"

@class FXBlurView, KGDefaultNetErrorView, KGPlayViewSearchBar, KGProgressView, KGThemeLabel, KugouGridView, NSArray, NSMutableArray, NSString, SongInfo, UIButton, UILabel, UIView;

@interface KGSingerImageSheet : KGBasicSheet <SingerImageCellDelegate, KugouGridViewDataSource, KugouGridViewActionDelegate, UIScrollViewDelegate, UITextFieldDelegate, UISearchBarDelegate>
{
    _Bool _isSearchingTheSameSingerAsLastTime;
    int _searchAuthorID;
    int _updatetime;
    UIView *_contentview;
    UIView *_bgview;
    id _playdelegate;
    NSArray *_ImagesInOldLogic;
    SongInfo *_song;
    UIView *_blurView2;
    UIButton *_confirmbutton;
    KugouGridView *_gridView;
    UIView *_SearthView;
    UILabel *_separateline;
    KGDefaultNetErrorView *_ErrorView;
    UIView *_gridviewBG;
    KGProgressView *_progressView;
    KGProgressView *_progressView01;
    NSMutableArray *_imgGroups;
    NSMutableArray *_oldImgNotShowGroups;
    NSString *_orignalname;
    NSString *_currentsingername;
    KGPlayViewSearchBar *_searchBar;
    UIButton *_btnSearch;
    KGThemeLabel *_noSingerImgLabel;
    UIView *_grayView;
    FXBlurView *_blurView;
}

@property(retain, nonatomic) FXBlurView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *grayView; // @synthesize grayView=_grayView;
@property(retain, nonatomic) KGThemeLabel *noSingerImgLabel; // @synthesize noSingerImgLabel=_noSingerImgLabel;
@property(retain, nonatomic) UIButton *btnSearch; // @synthesize btnSearch=_btnSearch;
@property(retain, nonatomic) KGPlayViewSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) int updatetime; // @synthesize updatetime=_updatetime;
@property(retain, nonatomic) NSString *currentsingername; // @synthesize currentsingername=_currentsingername;
@property(retain, nonatomic) NSString *orignalname; // @synthesize orignalname=_orignalname;
@property(retain, nonatomic) NSMutableArray *oldImgNotShowGroups; // @synthesize oldImgNotShowGroups=_oldImgNotShowGroups;
@property(retain, nonatomic) NSMutableArray *imgGroups; // @synthesize imgGroups=_imgGroups;
@property(retain, nonatomic) KGProgressView *progressView01; // @synthesize progressView01=_progressView01;
@property(retain, nonatomic) KGProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *gridviewBG; // @synthesize gridviewBG=_gridviewBG;
@property(nonatomic) _Bool isSearchingTheSameSingerAsLastTime; // @synthesize isSearchingTheSameSingerAsLastTime=_isSearchingTheSameSingerAsLastTime;
@property(nonatomic) int searchAuthorID; // @synthesize searchAuthorID=_searchAuthorID;
@property(retain, nonatomic) KGDefaultNetErrorView *ErrorView; // @synthesize ErrorView=_ErrorView;
@property(retain, nonatomic) UILabel *separateline; // @synthesize separateline=_separateline;
@property(retain, nonatomic) UIView *SearthView; // @synthesize SearthView=_SearthView;
@property(retain, nonatomic) KugouGridView *gridView; // @synthesize gridView=_gridView;
@property(retain, nonatomic) UIButton *confirmbutton; // @synthesize confirmbutton=_confirmbutton;
@property(retain, nonatomic) UIView *blurView2; // @synthesize blurView2=_blurView2;
@property(retain, nonatomic) SongInfo *song; // @synthesize song=_song;
@property(retain, nonatomic) NSArray *ImagesInOldLogic; // @synthesize ImagesInOldLogic=_ImagesInOldLogic;
@property(nonatomic) __weak id playdelegate; // @synthesize playdelegate=_playdelegate;
@property(retain, nonatomic) UIView *bgview; // @synthesize bgview=_bgview;
@property(retain, nonatomic) UIView *contentview; // @synthesize contentview=_contentview;
- (void).cxx_destruct;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchClick:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)dealloc;
- (void)theKeyBoardWillHide:(id)arg1;
- (void)theKeyBoardWillShow:(id)arg1;
- (void)KugouGridView:(id)arg1 didLongTapOnItemAtIndex:(long long)arg2;
- (void)KugouGridView:(id)arg1 didTapOnItemAtIndex:(long long)arg2;
- (struct CGSize)KugouGridView:(id)arg1 sizeForItemsInInterfaceOrientation:(long long)arg2;
- (id)KugouGridView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInKugouGridView:(id)arg1;
- (void)showSheet;
- (void)deleteOldNotShowImages;
- (void)ConfirmToDownLoad:(id)arg1;
- (void)SearthSingerImage:(id)arg1;
- (void)updateEffectState:(id)arg1;
- (void)p_initBlur;
- (void)initView;
- (id)gettheImgGroupsfromDBWithSingerName:(id)arg1;
- (id)gettheImgGroupsfromDBWithAuthorID:(int)arg1;
- (id)CombiningtheNewGroupsWithNewGroups:(id)arg1 OldGroups:(id)arg2 SingerID:(int)arg3;
- (_Bool)is480Img:(id)arg1;
- (id)getTheFilePathInCommonDic:(id)arg1;
- (id)getthefilepathWithImage:(id)arg1;
- (void)updateImgGroups:(int)arg1;
- (void)moveTheImagesFromOldLogicToNewLogic;
- (void)gettheSingerNameforThisSong;
- (void)starttoinit;
- (void)makeProgressViewinBackView;
- (void)makeProgressView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
