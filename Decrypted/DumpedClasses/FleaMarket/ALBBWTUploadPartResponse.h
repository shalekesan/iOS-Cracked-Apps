//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALBBWTResponse.h"

@class NSString;

@interface ALBBWTUploadPartResponse : ALBBWTResponse
{
    NSString *_id;
    NSString *_dir;
    NSString *_name;
    NSString *_eTag;
    NSString *_uploadId;
    long long _partNumber;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long partNumber; // @synthesize partNumber=_partNumber;
@property(retain, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(retain, nonatomic) NSString *eTag; // @synthesize eTag=_eTag;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *dir; // @synthesize dir=_dir;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;

@end

