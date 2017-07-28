//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMPAutoRotateVC.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ImmPaySettingService, NSMutableArray, NSString, UILabel, UISwitch, UITableView;

@interface ImmPaySetChannel : MMPAutoRotateVC <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>
{
    _Bool _autoChannel;
    NSMutableArray *_channelArray;
    NSMutableArray *_channelIndexArray;
    ImmPaySettingService *_settingService;
    UITableView *_tableView;
    UISwitch *_autoChannelSwitch;
    NSString *_chanTips;
    UILabel *_chanTipLbl;
}

@property(nonatomic) _Bool autoChannel; // @synthesize autoChannel=_autoChannel;
@property(retain, nonatomic) UILabel *chanTipLbl; // @synthesize chanTipLbl=_chanTipLbl;
@property(copy, nonatomic) NSString *chanTips; // @synthesize chanTips=_chanTips;
@property(retain, nonatomic) UISwitch *autoChannelSwitch; // @synthesize autoChannelSwitch=_autoChannelSwitch;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak ImmPaySettingService *settingService; // @synthesize settingService=_settingService;
@property(retain, nonatomic) NSMutableArray *channelIndexArray; // @synthesize channelIndexArray=_channelIndexArray;
@property(retain, nonatomic) NSMutableArray *channelArray; // @synthesize channelArray=_channelArray;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)doClickNaviLeftAction:(id)arg1;
- (void)onSwitchValueChanged:(id)arg1;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (struct CGSize)tipSize;
- (void)updateChannelSetting;
- (void)viewDidLoad;
- (id)initWithSetting:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

