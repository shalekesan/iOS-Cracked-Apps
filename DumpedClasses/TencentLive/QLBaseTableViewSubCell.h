//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

@class NSMutableArray;

@interface QLBaseTableViewSubCell : QLBaseTabelViewCell
{
    NSMutableArray *_lastIndexPathArray;
    NSMutableArray *_nowShowIndexPathArray;
}

- (void).cxx_destruct;
- (void)subCellReportShowUp;
- (void)reportShowUp;
- (void)resetReportShowUpArray;
- (void)removeLastIndexPathArray;
- (void)removeFromParentReportLastIndexs;
- (_Bool)checkNeedToClearLastArray;
- (void)itemCellDidInvisible;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

