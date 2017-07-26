//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSEntryMenuView.h"

#import "TBSNSBasicServiceDelegate.h"

@class NSString, TBSNSBasicService, TBSNSHomePageMenuItem;

@interface TBSNSHomePageMenuView : TBSNSEntryMenuView <TBSNSBasicServiceDelegate>
{
    _Bool _isLoading;
    _Bool _isInWeiTao;
    TBSNSBasicService *_dataService;
    TBSNSHomePageMenuItem *_dataItem;
}

@property(retain, nonatomic) TBSNSHomePageMenuItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) TBSNSBasicService *dataService; // @synthesize dataService=_dataService;
@property(nonatomic) _Bool isInWeiTao; // @synthesize isInWeiTao=_isInWeiTao;
- (void).cxx_destruct;
- (void)menuViewDidOpen;
- (void)tappedBubbleWithIndex:(int)arg1 key:(id)arg2;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (id)getTime;
- (void)setTime;
- (void)goToEvent;
- (void)setUpView;
- (void)updateData;
- (void)updateUI;
- (void)clearData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
