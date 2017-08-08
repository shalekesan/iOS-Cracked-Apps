//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface FBInstantGameListGameSocialInfo : FBValueObject <NSCopying>
{
    NSArray *_profileImageURLs;
    NSString *_socialText;
}

@property(readonly, copy, nonatomic) NSString *socialText; // @synthesize socialText=_socialText;
@property(readonly, copy, nonatomic) NSArray *profileImageURLs; // @synthesize profileImageURLs=_profileImageURLs;
- (void).cxx_destruct;
- (id)initWithProfileImageURLs:(id)arg1 socialText:(id)arg2;

@end
