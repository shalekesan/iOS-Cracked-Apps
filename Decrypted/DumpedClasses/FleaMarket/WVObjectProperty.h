//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WVObjectProperty : NSObject
{
    NSString *_name;
    NSString *_typeString;
    Class _type;
}

@property(readonly, nonatomic) Class type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isNumberType;
- (_Bool)isBOOLType;
@property(readonly, nonatomic) unsigned short typeCode;
- (id)initWithName:(id)arg1 withTypeString:(id)arg2;

@end

