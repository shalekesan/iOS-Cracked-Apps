//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMHouseMatchCellProtocol.h"

@class NSString;

@interface FMHouseMatchCellViewModel : NSObject <FMHouseMatchCellProtocol>
{
    NSString *_titleText;
}

@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (Class)templateViewClass;
- (struct UIEdgeInsets)itemMargin;
- (id)reuseIdentifier;
- (struct CGSize)itemSize;

@end

