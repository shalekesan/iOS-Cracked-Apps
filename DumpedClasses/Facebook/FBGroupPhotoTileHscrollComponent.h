//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBFeedToolbox, FBMemGroup, NSArray;

@interface FBGroupPhotoTileHscrollComponent : CKCompositeComponent
{
    struct vector<FBHScrollComponentChild, std::__1::allocator<FBHScrollComponentChild>> _children;
    FBMemGroup *_group;
    FBFeedToolbox *_toolbox;
}

+ (id)newWithGroup:(id)arg1 toolbox:(id)arg2;
@property(readonly, nonatomic) FBFeedToolbox *toolbox; // @synthesize toolbox=_toolbox;
@property(readonly, nonatomic) FBMemGroup *group; // @synthesize group=_group;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *childPhotoTileComponents;

@end
