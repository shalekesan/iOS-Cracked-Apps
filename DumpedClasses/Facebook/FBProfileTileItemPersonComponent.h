//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

#import "FBHScrollImpressionLogging-Protocol.h"

@class FBMemPerson, FBProtileAnalyticsInfo;
@protocol FBProfileTileSectionComponentToolbox;

@interface FBProfileTileItemPersonComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    FBProtileAnalyticsInfo *_protileAnalyticsInfo;
    FBMemPerson *_person;
    id <FBProfileTileSectionComponentToolbox> _toolbox;
}

+ (id)newWithItem:(struct FBProfileTileItemPersonComponentGraphQL)arg1 imageSize:(const struct CKComponentSize *)arg2 protileAnalyticsInfo:(id)arg3 toolbox:(id)arg4;
@property(readonly, nonatomic) id <FBProfileTileSectionComponentToolbox> toolbox; // @synthesize toolbox=_toolbox;
@property(readonly, nonatomic) FBMemPerson *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (void)didTapIconButton;
- (void)didTapItem;

@end
