//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface WVURLQueryItem : NSObject <NSCopying>
{
    NSString *_name;
    NSString *_value;
}

+ (id)getQueryStringWithName:(id)arg1 value:(id)arg2;
+ (id)queryItemWithName:(id)arg1 value:(id)arg2;
+ (id)queryItemWithQuery:(id)arg1;
+ (id)empty;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)queryString;
- (_Bool)isEqualToQueryItem:(id)arg1;
- (_Bool)isEmpty;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)init;

@end

