//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseViewController.h"

@class FMGeneralPageTableView, NSString;

@interface FMDonaterListViewController : FMBaseViewController
{
    FMGeneralPageTableView *_tableview;
    NSString *_topicId;
}

@property(copy, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) FMGeneralPageTableView *tableview; // @synthesize tableview=_tableview;
- (void).cxx_destruct;
- (void)setupViews;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (id)initWithTopicId:(id)arg1;
- (id)initWithURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

@end

