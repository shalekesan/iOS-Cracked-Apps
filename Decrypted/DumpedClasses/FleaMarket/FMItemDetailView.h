//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMItemDetailComponent, FMItemPriceView, UITableView;

@interface FMItemDetailView : UIView
{
    FMItemDetailComponent *_itemDetailViewModel;
    UITableView *_tableView;
    FMItemPriceView *_titlePriceView;
}

@property(retain, nonatomic) FMItemPriceView *titlePriceView; // @synthesize titlePriceView=_titlePriceView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) FMItemDetailComponent *itemDetailViewModel; // @synthesize itemDetailViewModel=_itemDetailViewModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setTitlePriceViewShow:(_Bool)arg1;
- (void)initTitlePriceView;
- (id)initWithFrame:(struct CGRect)arg1 component:(id)arg2;

@end

