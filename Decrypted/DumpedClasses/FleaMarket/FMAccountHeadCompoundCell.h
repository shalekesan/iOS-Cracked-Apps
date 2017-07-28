//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"

@class FMAccountHeaderCellView, FMAccountMyViewMemberView, NSString;

@interface FMAccountHeadCompoundCell : UITableViewCell <FMComponentCellProtocol>
{
    FMAccountMyViewMemberView *_memberCell;
    FMAccountHeaderCellView *_header;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) FMAccountHeaderCellView *header; // @synthesize header=_header;
@property(retain, nonatomic) FMAccountMyViewMemberView *memberCell; // @synthesize memberCell=_memberCell;
- (void).cxx_destruct;
- (void)bindComponent:(id)arg1;
- (void)setUserDO:(id)arg1;
- (void)updateConstraints;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

