//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseViewController.h"

@class FMGeneralPageTableView, FMNoticeListTableComponent;

@interface FMNoticeListViewController : FMBaseViewController
{
    FMNoticeListTableComponent *_listComponent;
    FMGeneralPageTableView *_listView;
}

@property(retain, nonatomic) FMGeneralPageTableView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) FMNoticeListTableComponent *listComponent; // @synthesize listComponent=_listComponent;
- (void).cxx_destruct;
- (void)gotoPost;
- (void)rightAction:(id)arg1;
- (void)leftAction:(id)arg1;
- (void)initNavigationBar;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

@end

