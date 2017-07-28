//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "TRDMailServiceDelegate.h"

@class NSArray, NSMutableArray, NSString, TBHUDActivityView, TBToastView, TRDMailService;

@interface TRDMailPage : UITableViewController <TRDMailServiceDelegate>
{
    NSArray *chapters;
    NSMutableArray *_displayList;
    TRDMailService *_mailService;
    _Bool _bMailing;
    TBHUDActivityView *_messageHud;
    TBToastView *_messageToast;
}

- (void).cxx_destruct;
- (void)mailSendFailed:(id)arg1;
- (void)mailSendSuccessed;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyleType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

