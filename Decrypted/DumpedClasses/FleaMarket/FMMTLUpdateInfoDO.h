//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMMTLUpdateInfoDO : NSObject
{
    NSString *_name;
    NSString *_size;
    NSString *_version;
    NSString *_pri;
    NSString *_info;
    NSString *_url;
    NSString *_md5;
}

@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *pri; // @synthesize pri=_pri;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

