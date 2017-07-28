//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseViewController.h"

#import "FMNeedLoginProtocol.h"
#import "UIActionSheetDelegate.h"

@class FMAccountComponent, NSString, UITableView;

@interface FMAccountViewController : FMBaseViewController <FMNeedLoginProtocol, UIActionSheetDelegate>
{
    UITableView *_listView;
    FMAccountComponent *_accountComponent;
}

@property(retain, nonatomic) FMAccountComponent *accountComponent; // @synthesize accountComponent=_accountComponent;
@property(retain, nonatomic) UITableView *listView; // @synthesize listView=_listView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)userRealVerifySuccessHandler:(id)arg1;
- (id)scrollViewForShadow;
- (void)logoutDone;
- (void)$$logoutDone:(id)arg1;
- (void)$$h5ResellSuccess;
- (void)$$loginSuccess:(id)arg1;
- (void)$$editItemDidFinishedFromOfflineList:(id)arg1 itemDO:(id)arg2;
- (void)$$itemDeleteDidFinish:(id)arg1 itemDO:(id)arg2;
- (void)$$postItemDidFinishedToAccountModel:(id)arg1 itemDO:(id)arg2;
- (void)$$postItemDidFinishedToAccount:(id)arg1 itemDO:(id)arg2;
- (void)$$tabBar:(id)arg1 didSelectAtIndexAgain:(id)arg2;
- (void)$$accountViewControllerRefresh:(id)arg1;
- (void)$$unCollectionItemSuccess:(id)arg1;
- (void)$$collectionItemSuccess:(id)arg1;
- (void)$$saveUserPageInfoSuccess:(id)arg1;
- (void)$$toBuyList:(id)arg1;
- (void)$$toSoldList:(id)arg1 shareTitle:(id)arg2;
- (void)$$toSellingList:(id)arg1;
- (void)$$toPersonalPage:(id)arg1;
- (void)$$toSettings:(id)arg1;
- (void)$$toAccountSetting:(id)arg1;
- (void)$$toLogin:(id)arg1;
- (void)rightAction:(id)arg1;
- (void)requestData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initNavigationBar;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

