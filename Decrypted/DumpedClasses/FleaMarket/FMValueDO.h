//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMTagData.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface FMValueDO : FMTagData <NSCopying>
{
    _Bool _priority;
    NSString *_propId;
    NSString *_valueId;
    NSString *_type;
    NSDictionary *_trackParams;
}

@property(retain, nonatomic) NSDictionary *trackParams; // @synthesize trackParams=_trackParams;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *valueId; // @synthesize valueId=_valueId;
@property(copy, nonatomic) NSString *propId; // @synthesize propId=_propId;
- (void).cxx_destruct;
- (id)propertyValueString;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

