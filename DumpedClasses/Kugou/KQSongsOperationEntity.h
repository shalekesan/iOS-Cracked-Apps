//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface KQSongsOperationEntity : NSObject
{
    NSMutableArray *_operationArray;
    long long _count;
}

+ (id)entityWithDict:(id)arg1;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSMutableArray *operationArray; // @synthesize operationArray=_operationArray;
- (void).cxx_destruct;
- (id)enParserOperationList;
- (void)parserArray:(id)arg1;
- (id)initEntityWithDict:(id)arg1;
- (id)dictFromEntity;

@end

