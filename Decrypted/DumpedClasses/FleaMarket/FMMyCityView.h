//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseScrollView.h"

#import "FMMyCityRefreshViewDelegate.h"

@class FMMyCityFilterBarView, FMMyCityRefreshView, FMMyCityTitleView, FMMyCityViewModel, UIButton, UIView;

@interface FMMyCityView : FMBaseScrollView <FMMyCityRefreshViewDelegate>
{
    UIButton *_backButton;
    _Bool _reloading;
    _Bool _isLoadingMore;
    FMMyCityTitleView *_titleView;
    FMMyCityViewModel *_viewDO;
    FMMyCityFilterBarView *_searchFilterBar;
    FMMyCityRefreshView *_refreshView;
    UIView *_headView;
    FMMyCityFilterBarView *_filterBar;
}

@property(retain, nonatomic) FMMyCityFilterBarView *filterBar; // @synthesize filterBar=_filterBar;
@property(nonatomic) __weak UIView *headView; // @synthesize headView=_headView;
@property(nonatomic) __weak FMMyCityRefreshView *refreshView; // @synthesize refreshView=_refreshView;
@property(retain, nonatomic) FMMyCityFilterBarView *searchFilterBar; // @synthesize searchFilterBar=_searchFilterBar;
@property(retain, nonatomic) FMMyCityViewModel *viewDO; // @synthesize viewDO=_viewDO;
@property(retain, nonatomic) FMMyCityTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(nonatomic) _Bool reloading; // @synthesize reloading=_reloading;
- (void).cxx_destruct;
- (void)requestRefreshDataFinish;
- (_Bool)refreshDataSourceIsLoading:(id)arg1;
- (void)refreshDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)searchDataWithParameter;
- (void)initSearchFilterBar;
- (void)backButtonTapped:(id)arg1;
- (void)bind;
- (void)addSubview:(id)arg1;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1 component:(id)arg2;

@end

