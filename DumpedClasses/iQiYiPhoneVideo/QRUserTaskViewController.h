//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QRBaseViewController.h"

#import "QRUserTaskCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, QRUserTaskHeaderView, QRUserTaskPopController, QRUserTaskProgressView, UITableView, UIView;

@interface QRUserTaskViewController : QRBaseViewController <UITableViewDelegate, UITableViewDataSource, QRUserTaskCellDelegate>
{
    long long _taskType;
    _Bool _statusBarHidden;
    long long _statusBarStyle;
    _Bool _isRequesting;
    UIView *_headerBgView;
    UITableView *_tableView;
    NSMutableArray *_tasksArray;
    QRUserTaskPopController *_taskPopController;
    QRUserTaskProgressView *_progressView;
    QRUserTaskHeaderView *_tableViewHeadView;
}

@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(retain, nonatomic) QRUserTaskHeaderView *tableViewHeadView; // @synthesize tableViewHeadView=_tableViewHeadView;
@property(retain, nonatomic) QRUserTaskProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) QRUserTaskPopController *taskPopController; // @synthesize taskPopController=_taskPopController;
@property(retain, nonatomic) NSMutableArray *tasksArray; // @synthesize tasksArray=_tasksArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *headerBgView; // @synthesize headerBgView=_headerBgView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)updateTasksArray:(id)arg1;
- (void)refreshTasksArray;
- (void)scrollViewDidScroll:(id)arg1;
- (void)receiveAward:(id)arg1 Button:(id)arg2;
- (void)showGuidePop:(id)arg1 Button:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setFirstEnterTaskVc;
- (void)addUserTaskProgressView;
- (void)addTableFooterView;
- (void)addTableHeaderView;
- (void)addTableView;
- (void)addHeaderView;
- (void)refreshView;
- (void)refreshData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

