//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FBEntityCardsCollectionViewController, FBSearchResultsEntityCardsDataSource, FBSerpConfig, FBUserSession;

@interface FBSearchResultsEntityCardsViewController : UIViewController
{
    FBUserSession *_session;
    FBEntityCardsCollectionViewController *_viewController;
    FBSearchResultsEntityCardsDataSource *_dataSource;
    FBSerpConfig *_serpConfig;
}

- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 initialModels:(id)arg2 selectedModel:(id)arg3 serpConfig:(id)arg4 scenePath:(id)arg5 startCursor:(id)arg6;

@end
