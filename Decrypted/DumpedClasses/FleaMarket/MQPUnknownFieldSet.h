//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface MQPUnknownFieldSet : NSObject
{
    NSDictionary *fields;
}

+ (id)builderWithUnknownFields:(id)arg1;
+ (id)builder;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)setWithFields:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
@property(retain) NSDictionary *fields; // @synthesize fields;
- (void).cxx_destruct;
- (id)data;
- (int)serializedSize;
- (void)storeInDictionary:(id)arg1;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (void)writeToOutputStream:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)getField:(int)arg1;
- (_Bool)hasField:(int)arg1;
- (id)initWithFields:(id)arg1;

@end

