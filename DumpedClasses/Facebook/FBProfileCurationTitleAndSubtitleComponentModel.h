//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBMemModelObject;
@protocol FBQueriedProfileDiscoveryBucketItemInterfaceFieldsProtocol;

@interface FBProfileCurationTitleAndSubtitleComponentModel : NSObject
{
    _Bool _shouldShowTitle;
    FBMemModelObject<FBQueriedProfileDiscoveryBucketItemInterfaceFieldsProtocol> *_bucketItem;
}

@property(readonly, nonatomic) _Bool shouldShowTitle; // @synthesize shouldShowTitle=_shouldShowTitle;
@property(readonly, copy, nonatomic) FBMemModelObject<FBQueriedProfileDiscoveryBucketItemInterfaceFieldsProtocol> *bucketItem; // @synthesize bucketItem=_bucketItem;
- (void).cxx_destruct;
- (id)initWithBucketItem:(id)arg1 shouldShowTitle:(_Bool)arg2;

@end
