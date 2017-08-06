//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSongCellBaseController.h"

#import "MCSearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMAlarmClockSoundSelectView, NSMutableArray, NSString;

@interface NMAlarmClockSoundSelectViewController : NMSongCellBaseController <UITableViewDataSource, UITableViewDelegate, MCSearchBarDelegate>
{
    NSMutableArray *_localSongDataSource;
    NSMutableArray *_searchSongResult;
    _Bool _isLoading;
    _Bool _isSearching;
    NMAlarmClockSoundSelectView *_alarmClockSoundSelectView;
    NSString *_selectSongIndex;
    id <NMAlarmListProtocol> _delegate;
}

@property(nonatomic) __weak id <NMAlarmListProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *selectSongIndex; // @synthesize selectSongIndex=_selectSongIndex;
@property(retain, nonatomic) NMAlarmClockSoundSelectView *alarmClockSoundSelectView; // @synthesize alarmClockSoundSelectView=_alarmClockSoundSelectView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)ipodScanFinished:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)resignSearchBar;
- (void)exitSearch;
- (_Bool)mcsearchBarShouldReturn:(id)arg1;
- (void)mcsearchBarTextDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)selectSong:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)downloadAndIpodSongsDidLoad:(id)arg1;
- (void)loadDownloadAndIpodSongs;
- (void)collapseKeyboardIfNeeded;
- (void)tableReloadData:(id)arg1;
- (void)tableReloadData;
- (void)backAction:(id)arg1;
- (void)switchTableHeader;
- (id)tableView;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
