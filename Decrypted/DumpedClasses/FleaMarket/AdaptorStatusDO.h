//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSURL;

@interface AdaptorStatusDO : NSObject
{
    _Bool _processNext;
    NSURL *_resultURL;
    NSMutableDictionary *_otherParam;
}

+ (id)newInstance;
@property(retain, nonatomic) NSMutableDictionary *otherParam; // @synthesize otherParam=_otherParam;
@property(nonatomic) _Bool processNext; // @synthesize processNext=_processNext;
@property(retain, nonatomic) NSURL *resultURL; // @synthesize resultURL=_resultURL;
- (void).cxx_destruct;
- (id)init;

@end

