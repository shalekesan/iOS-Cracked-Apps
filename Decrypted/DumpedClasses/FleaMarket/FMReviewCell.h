//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class FMReviewListUnitView;

@interface FMReviewCell : UITableViewCell
{
    unsigned long long _cellType;
    FMReviewListUnitView *_reviewListView;
}

+ (double)getCellHeight:(id)arg1 withCellType:(unsigned long long)arg2;
@property(retain, nonatomic) FMReviewListUnitView *reviewListView; // @synthesize reviewListView=_reviewListView;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (void)setReviewItemDO:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 cellType:(unsigned long long)arg3;

@end

